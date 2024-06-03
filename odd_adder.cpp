#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int angka[1000];
    int n;
    cout << "Jumlah Angka : ";
    cin >> n;

    ofstream outputFile("file.txt");

    for(int i = 0; i < n; ++i){
        cout << "Angka ke- " << i+1 << " : ";
        cin >> angka[i];
        outputFile<<angka[i]<<endl;

    }
    
    outputFile.close();


    ifstream inputFile("file.txt");

    int total=0;

    for (int i = 0; i < n; ++i){
            inputFile>>angka[i];
        if (angka[i] % 2 != 0) {
            total += angka[i];
        }
    }

    inputFile.close();
    if (total == 0){
        cout << "tidak ada";
    }else {
        cout << "Kode redeem kredit azure: " << total << endl;
    }
    return 0;
}
