#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cout << s.substr(0, i) << (s[i] == 'a'? 'b' : 'a') << s.substr(i) << '\n';
            return;
        }
    }
    s += s.back() == 'a' ? 'b' : 'a';
    cout << s << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
