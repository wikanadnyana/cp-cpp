#include <bits/stdc++.h>

using namespace std;
int main(){
    int k,n,w,total = 0;
    cin >> k >> n >> w;
    for(int i = 1; i<= w; i++){
        total+=(i*k);
    }
    if(n > total){
        cout << 0 <<'\n';
    }else{
        cout << total-n <<'\n';
    }
}