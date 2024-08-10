#include <bits/stdc++.h>

using namespace std;

void calculateFraction(int c, unsigned int &p, unsigned int &q){
    if(c==1){
        p = 1;
        q = 1;
        return;
    }
    int parent = c%2 == 0? c/2 : (c-1)/2;
    calculateFraction(parent, p, q);
    if(c%2==0){
        q+=p;
    }else{
        p+=q;
    }
}

int main(){
    int a, b, c;

    cin >> a;
    for(int i=0 ; i<a; i++){
        cin >> b >> c;
        unsigned int p = 0;
        unsigned int q = 0;
        calculateFraction(c, p, q);
        cout <<i+1 <<" "<< p << '/' << q <<'\n';
    }

}


/*
//step 1
def fraction_in_node(6):
    if n == 1:
        return (1, 1)  # Base case: root node
    elif n % 2 == 0:
        parent_n = n // 2
        a, b = fraction_in_node(parent_n)
        return (a, a + b)  # Left child
    else:
        parent_n = (n - 1) // 2
        a, b = fraction_in_node(parent_n)
        return (a + b, b)  # Right child

	
    //step 2
    def fraction_in_node(3):
        if n == 1:
            return (1, 1)  # Base case: root node
        elif n % 2 == 0:
            parent_n = n // 2
            a, b = fraction_in_node(parent_n)
            return (a, a + b)  # Left child
        else:
            parent_n = (n - 1) // 2
            a, b = fraction_in_node(parent_n)
            return (a + b, b)  # Right child


                //step 3
                def fraction_in_node(1):
                        if n == 1:
                            return (1, 1)  # Base case: root node
                        elif n % 2 == 0:
                            parent_n = n // 2
                            a, b = fraction_in_node(parent_n)
                            return (a, a + b)  # Left child
                        else:
                            parent_n = (n - 1) // 2
                            a, b = fraction_in_node(parent_n)
                            return (a + b, b)  # Right child

	







*/