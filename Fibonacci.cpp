#include <iostream>
using namespace std;

int main()
{
    int fn; 
    int n;
    int fn1=1;
    int fn2=0;

    cout << "Masukkan jumlah nilai deret Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        if(i == 0) 
        {
            cout << fn2 << " "; // Menampilkan nilai pertama (0)
            continue;
        }
        if(i == 1) 
        {
            cout << fn1 << " "; // Menampilkan nilai kedua (1)
            continue;
        }
        
        fn = fn1 + fn2; // Menghitung nilai Fibonacci berikutnya
        fn2 = fn1;      // Memperbarui fn2
        fn1 = fn;       // Memperbarui fn1
        
        cout << fn << " "; // Menampilkan nilai Fibonacci
    }

    return 0;
}
