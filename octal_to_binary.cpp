#include<cmath>
using namespace std;

void octal_to_binary(){

    string oct;
    cout << "Enter a Octal Number: ";
    cin >> oct;

    int decimal = 0;
    int base1 = 8;

    for(int i = ( oct.length() - 1), n = 0; i >= 0; i--, n++){
        int last = oct.at(i);
        decimal = decimal + ( check2(last) * pow(base1, n) );
    }

    string reverse_binary;
    int base = 2;

    while(decimal != 0){
        int last = decimal % base;
        reverse_binary = reverse_binary + check1(last);
        decimal = decimal / base;
    }

    string binary;
    for(int i = (reverse_binary.length()-1); i >= 0; i--){
        binary = binary + reverse_binary.at(i);
    }

    cout << "Binary Number is " << binary << endl << endl;
}