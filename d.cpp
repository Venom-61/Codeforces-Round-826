#include<bits/stdc++.h>
using namespace std;

#define ll long long

// D. Masha and a Beautiful Tree

vector<int> a;

int solve(int l, int r) {
    if(r - l == 1) 
        return 0;
    
    int mid = (l + r) >> 1;
    int ml = *max_element(a.begin() + l, a.begin() + mid);
    int mr = *max_element(a.begin() + mid, a.begin() + r);
    
    int ans = 0;
    if(ml > mr) {
        ++ans;
        for(int i = 0; i < (mid - l); ++i)
            swap(a[l + i], a[mid + i]);   
    }
    
    return solve(l, mid) + solve(mid, r) + ans;
}

int solve() {
    int n; cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = solve(0, n);
    if(is_sorted(a.begin(), a.end()))
        return ans;
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test = 1;
    cin >> test;
    while(test--) {
        cout << solve() << "\n";
    }
    
    return 0;
}
