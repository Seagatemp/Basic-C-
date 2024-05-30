#include <iostream>

using namespace std;

int main(){
    int nilai;

    cout << " Masukkan Nilai Anda (0-100) : ";
    cin>>nilai;
    cout<<endl;
    cout<< " Grade Anda : ";
    
    if(nilai>=0){
        if(nilai<=100){
    
        if(nilai>=90 ){
            cout<<"A";
        }
        else if(nilai>=80){
           cout<<"B";
        }
        else if(nilai>=70){
            cout<<"C";
        }
        else if(nilai>=60){
            cout<<"D";
        }
        else {
            cout<<"E";
        }
        }
    }
    return 0;
}
