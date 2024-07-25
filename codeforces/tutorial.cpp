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

    //boolean
    bool isTrue = true;
    cout << "Boolean : " << isTrue << '\n';

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
    decltype(k + l) m = 256; //k + l here means copy the TYPE only into variable m 
    cout << "Decltype : " << typeid(m).name() << " " << "Value : " << m << "\n"; 

    //difference between using "/n" with "endl" is "/n" more efficient because it does not flush the buffer of output
    //the example will combine with use case of string. String is compound of character

    string hobi = "tidak nonton youtube";
    string hobi2("tidak nonton reels");
    string hobi3{"tidak nonton tiktok"};
    cout << "String type : " << typeid(hobi).name() << " " << "String Value : " << hobi << endl;

    //constant
    const long long num = 30029309302909ll; //add literal constant to make the compiler directly interpret the number before assign and to avoid the type conversion issues

    //try without using long long
    cout << "Const Int : " << num << '\n';

    //cpp contant not only allowed decimals num, but also hexa (base 16) & octal (base 8), for instance :
    const int dec = 3600;
    const int octal = 07020;
    const int hexa = 0xE10;
    cout << "Different base num : " << octal << " " << hexa << '\n';

    //in float constant type, we can represent real number or an exponent, for instance :
    const float avogadro = 6.02e23; // avogadro constant = 6.02 x 10^23
    const float electron = 1.6e-19; // electric charge of an electron = 1.6 x 10^-19
    cout << "Float Constant as Exponent : " << avogadro << " " << electron << "\n"; 

    //LITERAL is fixed value written directly in the source code

    //line continuation :
    string longtext = "line continuation is a way to make long string can\
 continously type on the next line\
 by using backslash mark"; //notes: please don't add the additional space that precedes the terminated text
    cout << "Long String : " << longtext << '\n';

    


}
