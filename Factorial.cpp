#include <iostream>

using namespace std;

int main(){
    int x;
    cin>>x;

    if(x < 1 || x > 10){
        cout << " Bilangan hanya rentang 1-10 ";
    }
    else {
        int f=1;
        for (int i = x; i >= 1 ; i--){
            f = f * i;
            cout<<i<<" x ";
        }
    cout<<" = "<<f<<endl;
    }
    return 0;
    
}
