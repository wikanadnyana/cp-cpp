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


    //another const syntax :
    const double pi = 3.14159265358979;
    // or maybe u can use preprocessor like :
    #define PI 3.1415
    #define NEWLINE '\n'
    cout << "Const : " << pi << " Preprocessor : " << PI << NEWLINE;

    //operators

    //assign directly a value in expression of operators
    int num1;
    int num2 = 5 + (num1 = 10); //that possible by directly assign a value into number 1, it similar like num1 = 10; num2 = 5 + num1
    cout << "Print of Num 2 : " << num2 << "; Print of Num 1 : " << num1 << '\n';

    //assign same value into more than 1 variables
    int num3, num4, num5;
    num3 = num4 = num5 = 1200; //it always assign from right to left.
    cout << "Assign same value into 3 variables : " << num3 << " " << num4  << " " << num5 << " " << '\n';

    //compound assignment
    int price = 300000;
    int units = 3;
    price *= units + 1; // it similar like price = price * (units + 1)
    cout << "Compound assignment for price : " << price << '\n';

    //comparing assignment
    int valueComparing;
    bool comparing = ((valueComparing = 9) >= 3); //this opearation will executes to assign the value 9 into valueComparing variable first, and then continue with comparing the value 
    cout << "Value comparing with assign : " << comparing << '\n';

    //new terminology : SHORT-CIRCUIT EVALUATION
    /*
        when using operator && = if the left side value is already evaluated as false, the right side of the operator always be left, and the compiler will not evaluated the right side.
        when using opeartor || = if the left side value is already evaluated as true, the right side of the operator always be true, and the compiler will not evaluated the right side.
    
    */

   //but the problem cames up when we doing prefix increment like this :
   int valueIncrement = 5;
   bool shortCircuit = ((10>8) || (++valueIncrement < 33));
   //the valueIncrement will not increase bcs the right side will not being executed.
   cout << "Short Circuit Evaluation : " << "Bool value : " << shortCircuit << " Value Increment : " << valueIncrement << '\n';


    //ternary
    string ternaryResult = 310==295+15? "Bener" : "Salah";
    cout << "Ternary Result : " << ternaryResult << '\n'; 

    //comma operator
    //useful is you having several operations, but only one expression expected. for instance : 
    int commaOps = (commaOps = 120, commaOps++, commaOps/=11);
    cout << "Result of Comma Operation : " << commaOps << '\n';
    







    


}
