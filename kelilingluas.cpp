#include <iostream>

using namespace std;

int main()
{
    int Pilih;
    float luas,keliling,sisi;
    cout<<"Menghitung Luas dan Keliling Persegi"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Masukkan Nilai Sisi = "; cin>>sisi;
    cout<<"Masukkan Pilihan Anda : "<<endl;
    cout<<"1. Luas Persegi "<<endl;
    cout<<"2. Keliling Persegi "<<endl;
    cin>>Pilih;
        luas=sisi*sisi;
        keliling=4*sisi;
    cout<<endl;
    if(Pilih==1)
    {
        cout<<"Luas Persegi = "<<luas<<endl;
    }
    cout<<endl;
    if(Pilih==2)
    {
        cout<<"Keliling Persegi = "<<keliling<<endl;    
    }
    else if(Pilih>=3)
    {cout<<"error"<<endl;
    }
    return 0;
}
