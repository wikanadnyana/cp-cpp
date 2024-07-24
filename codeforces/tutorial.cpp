#include <bits/stdc++.h>

using namespace std;

int main(){
    //mapping all the datatypes in cpp :
    //char
    char abjad = 'A';
    char16_t abjad2 = 'B';
    char32_t abjad3 = 'C';
    wchar_t abjad4 = 'D';
    cout << "Char : "<< sizeof(abjad) << " " << sizeof(abjad2) << " " << sizeof(abjad3) << " " << sizeof(abjad4) << endl;
    
    //integer (signed) posive & negative allowed
    short angkaSigned1 = 1;
    int angkaSigned2 = 2;
    long angkaSigned3 = 3;
    long long angkaSigned4 = 4;
    cout << "Int Signed : " << sizeof(angkaSigned1) << " " << sizeof(angkaSigned2) << " " << sizeof(angkaSigned3) << " " << sizeof(angkaSigned4) << endl;

    //integer (unsigned) non-negative only
    unsigned short angkaUnsigned1 = 5;
    unsigned angkaUnsigned2 = 6;
    unsigned long angkaUnsigned3 = 7;
    unsigned long long angkaUnsigned4 = 8;
    cout << "Int Unsigned : " << sizeof(angkaUnsigned1) << " " << sizeof(angkaUnsigned2) << " " << sizeof(angkaUnsigned3) << " " << sizeof(angkaUnsigned4) << endl;

    //initialize variable :
    int x = 1; //c-like initialization
    int y(1); //constructor initialization
    int z{1}; //uniform initialization
    cout << "Initialization : " << x << " " << y << " " << z << "\n";

    //type deduction :

    //auto
    auto bulat = 1000; //show the output of typeid i,  which means integers
    auto desimal = 3.141592653589;  // show the ouptut of typeid d, which means double 
    cout << "Auto : " << typeid(bulat).name() << " " << typeid(desimal).name() << "\n";

    //we also possible to copy the type of variable that already intialized
    int k = 3000;
    auto l = k;
    cout << "Auto copy : " << typeid(l).name() << '\n';

    //decltype
    decltype(k + l) m;
    cout << "Decltype : " << typeid(m).name() << " " << "Value : " << m << "\n"; 

    

}
