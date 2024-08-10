#include <bits/stdc++.h>

using namespace std;

void calculateFraction(int sidenom, int sideden ,unsigned int &p, unsigned int &q){
    int parentnom = 0, parentden = 0, parentnomnext1 = 0, parentdennext1 = 0;
    if(sidenom < sideden){
        parentnom = sidenom;
        parentden = sideden - sidenom;
        p = parentden + parentnom;
        q = parentden;
    }else{
        parentden = sideden;
        parentnom = sidenom - sideden;
        // parentnomnext1 = 
        

    }

}

int main(){
    int a, b, c;
    string side;
    cin >> a;

    for(int i=0 ; i<a; i++){
        cin >> b >> side;
        unsigned int p = 0;
        unsigned int q = 0;
        calculateFraction(int(side[0]), int(side[2]), p, q);
        cout <<i+1 <<" "<< p << '/' << q <<'\n';
    }

}
