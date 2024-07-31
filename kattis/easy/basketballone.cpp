#include <bits/stdc++.h>

using namespace std;

int main(){
    string game;
    int a = 0, b = 0;
    getline(cin, game);
    for(int i = 0; i < game.length(); i+=2){
        if(game[i] == 'A'){
            a+=int(game[i+1]);
        }else if(game[i] == 'B'){
            b+=int(game[i+1]);
        }
    }
    if(a>b){
        cout << 'A' << '\n';
    }else if(b>a){
        cout << 'B' << '\n';
    }

}