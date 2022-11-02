#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Funny Permutation 

void solve() {
    int n;
    cin >> n;
    if(n == 3) {
        cout << "-1\n";
        return ;
    }
    vector<int> a(n); 
    a[0] = n;
    a[1] = n - 1;
    int temp = 1;
    for(int i = 2; i < n; i++) {
        a[i] = temp++;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
