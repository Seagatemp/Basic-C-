#include <iostream>

using namespace std;

int main(){
    char kata[100];
    cin >> kata;

    int panjang = 0;
    while(kata[panjang] != '\0'){
        panjang++;
    }
    for(int i = panjang -1; i >= 0; i--){
        cout << kata[i];
    }

    return 0;
}
