#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, s, m;
    cin >> n >> s >> m;
    int x = 0;
    bool yes = false;
    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        if(l - x >= s){
            yes = true;
        }
        x = r;
    }
    if(m - x >= s){
        yes = true;
    }
    if(yes){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}