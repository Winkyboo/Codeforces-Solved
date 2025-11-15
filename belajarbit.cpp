#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

class Solution{
  public:
    bool equalPartition(const vector<unsigned long long>& arr){
        unsigned long long sum = accumulate(arr.begin(), arr.end(), 0ULL);
        if (sum % 2) return false;
        unsigned long long target = sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        for (unsigned long long num : arr)
            for (unsigned long long j = target; j >= num; --j)
                dp[j] = dp[j] || dp[j - num];
        return dp[target];
    }
};

void printTwoParts(const vector<unsigned long long>& arr) {
    Solution sol;
    if (sol.equalPartition(arr)) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
}

int main(int argc, char* argv[]){
    unsigned long long n, a, b;
    cin >> n;
    vector<unsigned long long> input;
    for (unsigned long long i = 0; i < n; i++) {
        cin >> a >> b;
        for (unsigned long long j = 0; j < b; j++) {
            input.push_back(unsigned long long(exp2(a)));
        }
    }
    printTwoParts(input);
    return 0;
}