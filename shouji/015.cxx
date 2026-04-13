#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool exist[20001] = {false};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        exist[a[i]] = true;
    }
    bool counted[20001] = {false};
    int ans = 0;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            int sum = a[i] + a[j];
            if (sum <= 20000 && exist[sum] && !counted[sum]) {
                counted[sum] = true;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}