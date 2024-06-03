#include <iostream>
using namespace std;


int Hanoi(int n, char dari, char ke, char tambahan) {
  if (n == 1) {
  return 1;
  }

   int perpindahan1 = Hanoi(n - 1, dari, tambahan, ke);
   int perpindahan2 = Hanoi(n - 1, tambahan, ke, dari);

    return 1 + perpindahan1 + perpindahan2;
}

int main(){
    int n;
    do {
        cin >> n;

        if (n < 1 || n > 10) {
            cout << "Error " << endl;
        }
    }
    while (n < 1 || n > 10);
    

    int perpindahan = Hanoi(n,'A','C','B');
    cout << perpindahan << endl;
    
    return 0;
}

   

