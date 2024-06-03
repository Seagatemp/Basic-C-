#include <iostream>

using namespace std;
 
int main()
{
    cout<<"Menghitung Keliling Lingkaran"<<endl;
    cout<<endl;

    float phi=3.14159;

    int diameter;

    float kelilinglingkaran;

        cout<<"Masukkan Nilai Diameter = "; 
        cin>>diameter;
        kelilinglingkaran = phi * diameter;
        cout <<"Keliling Lingkaran = " <<kelilinglingkaran << endl;
        cout << endl;
        return 0;
}
