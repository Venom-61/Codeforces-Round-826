#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Minimizing the Thickness

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    // Prefix sum
    vector<long long> pref(n);
    pref[0] = a[0];
    for(int i = 1; i < n; i++) 
        pref[i] = pref[i - 1] + a[i];

    int ans = n;
    for(int i = 0; i < n; i++) {
        long long sum = pref[i];
        sum += sum;

        int curr = i + 1, last = i;
        int idx;
        while(binary_search(pref.begin(), pref.end(), sum)) {
            idx = lower_bound(pref.begin(), pref.end(), sum) - pref.begin();
            sum += pref[i];
            curr = max(curr, idx - last);
            last = idx;
        }

        if(last == n-1) 
            ans = min(ans, curr);
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        // cout << "Case: #" << i << " ";
        solve();
    }

    return 0;
}
