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
    cout << "Int Signed : " << angkaSigned1 << " " << angkaSigned2 << " " << angkaSigned3 << " " << angkaSigned4 << endl;

    //integer (unsigned) non-negative only
    unsigned short angkaUnsigned1 = 5;
    unsigned angkaUnsigned2 = 6;
    unsigned long angkaUnsigned3 = 7;
    unsigned long long angkaUnsigned4 = 8;
    cout << "Int Unsigned : " << sizeof(angkaUnsigned1) << " " << sizeof(angkaUnsigned2) << " " << sizeof(angkaUnsigned3) << " " << sizeof(angkaUnsigned4) << endl;
    


}
