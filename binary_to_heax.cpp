#include<cmath>
using namespace std;

void binary_to_hexa(){

    string bi;
    cout << "Enter a Binary Number: ";
    cin >> bi;

    int decimal = 0;
    int base1 = 2;

    for(int i = ( bi.length() - 1),n = 0; i >= 0; i--,n++){
        int last = bi.at(i);
        decimal = decimal + ( check2(last)* pow(base1, n) );
    }
    string reverse_hexa;
    int base = 16;

    while(decimal != 0){
        int last = decimal % base;
        reverse_hexa = reverse_hexa + check1(last);
        decimal = decimal / base;
    }

    string hexa;
    for(int i = (reverse_hexa.length()-1); i >= 0; i--){
        hexa = hexa + reverse_hexa.at(i);
    }
    cout << "HexaDecimal Number is " << hexa << endl << endl;

}