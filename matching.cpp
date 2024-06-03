#include <iostream>

using namespace std;

int jumlah(const string s, const string t, int index_s, int index_t) {
    if (index_t == t.length()) {
        return 1;
    }
    if (index_s == s.length()) {
        return 0;
    }
    int cara = 0;
    if (s[index_s] == t[index_t]) {
      cara += jumlah(s, t, index_s + 1, index_t + 1);
    } cara += jumlah(s, t, index_s + 1, index_t);

   return cara;
}
int main() {
    string s, t;
    cin >> s;
    cin >> t;

    int hasil = jumlah(s, t, 0, 0);

    cout << hasil << endl;

    return 0;
}
