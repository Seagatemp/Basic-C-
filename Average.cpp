#include <iostream>
using namespace std;

float hitung(int *nilai , int jumlah) {
    float total = 0;

    for (int i = 0; i < jumlah; ++i){
        total += *(nilai + i);        
    }
return total / jumlah; 
}

int main(){
    int nilai[3];

    cout << "mata kuliah 1 :" << endl;
    cin >> nilai[0];
    
    cout << "mata kuliah 2 :" << endl;
    cin >> nilai[1];

    cout << "mata kuliah 3 :" << endl;
    cin >> nilai[2];

float rata = hitung(nilai , 3);

cout << " Rata rata nilai mata kuliah = " << rata << endl;

return 0;

}
