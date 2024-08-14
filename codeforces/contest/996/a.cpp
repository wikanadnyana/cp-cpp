#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a;
    cin>>a;
    string a_str = to_string(a);
    string pangkat;
    if(a_str[0] == '1' && a_str[1] == '0' && a_str[2] != '0'){
        for(int i = 2; i < a_str.size(); i++){
            pangkat += a_str[i];
        }
        if(stoi(pangkat) >= 2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }  
    }else{
        cout<<"NO\n";
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}