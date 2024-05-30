#include <iostream>

using namespace std;

int main(){
    int Tahun;

    cout<<" Masukkan Tahun : ";
    cin >> Tahun;

        if(Tahun%4 == 0 && Tahun %100 != 0){
          if(Tahun%400){
            
            cout<<" Tahun "<<Tahun<<" adalah tahun kabisat ";
        }
        }
        else{
            cout<<" Bukan Tahun Kabisat ";
        }
        


    return 0;
}
