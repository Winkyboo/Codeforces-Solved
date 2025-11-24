#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long totalSum = 0;
    int max_a = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        totalSum += a[i];
        max_a = max(max_a, a[i]);
    }
    long long kiri = max_a, kanan = totalSum, jawaban = totalSum;
    while (kiri <= kanan){
        long long tengah = (kiri + kanan)/2;
        int kelompok = 1;
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            if (total + a[i] > tengah) {
                kelompok++;
                total = a[i];
            }else total += a[i];
        }

        if (kelompok <= k) {
            jawaban = tengah;
            kanan = tengah - 1;
        } else kiri = tengah + 1;
    }

    cout << jawaban << endl;
    return 0;
}