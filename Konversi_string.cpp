#include <iostream>

using namespace std;

int main(){
    int sisa,cm,m;
    cout<< " Konversi "; cin>>cm ; cout<<endl;

    m = cm / 100;
    sisa = cm % 100;

    cout<< " Hasil Konversi "<< m <<" Meter "<< sisa <<" cm " <<endl;

    return 0;

}
