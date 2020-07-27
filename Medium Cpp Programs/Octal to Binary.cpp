// Convert Octal to Deci or Hexa then Deci or Hexa to Binary
// To get hexadecimal , first we need to get decimal and  then deci to hexa conversion

#include<iostream>
#include<cmath>
using namespace std;

void decitobin(long deci){
    if(deci == 0){
        return;
    }
    int rem = deci%2;
    decitobin(deci/2); // using recursion nothing but using stack
    cout<<rem;  // to reverse the number recursion / stack can be used
}
int main(){
    long octa;
    cin>>octa;
    long deci = 0;
    int i = 0;
    // Octal to decimal
    while(octa!=0){
        deci += pow(8,i)*(octa%10);
        i++;
        octa = octa/10;
    }
    cout<<"Decimal equivalent = "<<deci<<endl;
    cout<<"Binary equivalent = ";
    decitobin(deci);


    return 0;
}

