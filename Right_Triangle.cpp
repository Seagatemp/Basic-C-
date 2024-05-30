#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 20) {
        cout << "N hanya rentang 1 hingga 20." << endl;
    } else {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= i; ++j){
                cout <<j<<" ";
            }
            cout << endl;
        }
    }

    return 0;
}
