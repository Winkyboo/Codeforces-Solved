#include <iostream>
using namespace std;

unsigned long faktorial (unsigned long n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main () {
    unsigned long l, r, q, total;
    cin >> q;
    unsigned long hasil = 0;

    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        hasil = 0;
        for (int x = 0; x <= r; x++) {
            for (int y = 0; y <= x; y++) {
                total = x + y;
                if (total >= l && total <= r) {
                    hasil += (faktorial(x) / (faktorial(y) * faktorial(x - y)));
                }
            }
        }
        hasil %= 998244353;
        cout << hasil << endl;
    }

    return 0;
}