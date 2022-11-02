#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Compare T-Shirt Sizes 

/* 
 * X = 0.1;
 * S = 1;
 * M = 2;
 * L = 3;
 * 
*/

void solve() {
    string a, b;
    cin >> a >> b;
    int na = a.length();
    int nb = b.length();

    double s1 = 0;
    if(a[na - 1] == 'S') {
        s1 = 1 - (na - 1) * (0.1);
    } else if(a[na - 1] == 'L') {
        s1 = 3 + (na - 1) * (0.1);
    } else {
        s1 = 2;
    }

    double s2 = 0;
    if(b[nb - 1] == 'S') {
        s2 = 1 - (nb - 1) * (0.1);
    } else if(b[nb - 1] == 'L') {
        s2 = 3 + (nb - 1) * (0.1);
    } else {
        s2 = 2;
    }

    if(s1 > s2) {
        cout << ">\n";
    } else if(s1 < s2) {
        cout << "<\n";
    } else {
        cout << "=\n";
    }
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
