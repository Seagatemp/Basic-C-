#include <iostream>

using namespace std;

int main(){
    double keuntungan,hargaBeli,hargaJual;
    // a untuk harga beli, b untuk harga jual
    cout<< " Masukkan Harga beli barang = "; cout<<endl;

    cin>>hargaBeli;

    keuntungan=0.3*hargaBeli;

    hargaJual=hargaBeli+keuntungan;
    
    cout<<endl;

    cout<< " Harga Jual = "<<hargaJual;
    cout<<endl;
    cout<< " Keuntungan = "<<keuntungan;
    cout<<endl;
    




 return 0;
}
