#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    int count = 0, start, end;
    for(int i=0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            count++;
            if(count == 1){
                start = i;
            }
        }
    }
    end = start + count;
    if(count==0){
        s.insert(s.size(), 1, 'w');
    }else{
        s.insert(((start + end)/2) + 1, 1, 'w');
    }
    cout<<s<<'\n';

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}