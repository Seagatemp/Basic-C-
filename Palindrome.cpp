#include <iostream>

using namespace std;


int main (){
    int x;
    cout<<"Panjang string: ";
    cin>>x;
    
    char kata[x];
    
    cout<<" String: ";
    cin>>kata;
    
    bool palindrom = true;
    
    for (int i=0; i < x / 2 ;i++){ 
        if (kata[i] != kata[x-i-1]){
            palindrom = false;
        }   
    }
    if (palindrom){
        cout << "Yes"<< endl;	
    }else {
        cout << "No"<< endl;
    }
    return 0;
}
