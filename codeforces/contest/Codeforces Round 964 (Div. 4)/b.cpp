#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a1, a2, b1, b2;
    cin>>a1>>a2>>b1>>b2;
    cout<< 2 * (((a1>b1) + (a2>b2) > (a1<b1) + (a2<b2)) + ((a1>b2) + (a2>b1) > (a1<b2) + (a2<b1))) << '\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}