#include <iostream>

using namespace std;

int main()
{
    int v,t,r;
    // mendeklarasikan v,t,r v=volume t=tinggi r=jari-jari
    float phi=3.1415;
    // mendeklarasikan phi yaitu 3,14
    
        cout<<" Masukkan Nilai Tinggi = "; cin>>r;
        // menginput nilai tinggi dan mengeluarkannya
        cout<<" Masukkan Nilai Jari-Jari = "; cin>>t;
        // menginput nilai jari-jari dan mengeluarkannya
        v=phi*r*r*t;
        // rumus volume tabung memasukkan nilai phi,r,t
        cout<<" Volume Tabung = "<<v<<endl;
        // mengeluarkan hasil dari volume tabung
    
    
    return 0;
}
