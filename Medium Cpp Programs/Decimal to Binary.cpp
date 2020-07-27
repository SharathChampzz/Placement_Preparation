#include<iostream>
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
    long deci;
    cin>>deci;
    decitobin(deci);
    //printf("\nDirect Method : %b",deci); // Binary // works in c
    //printf("\nDirect Method : %x",deci); // Hexadecimal
    //printf("\nDirect Method : %o",deci);  // Octal
    return 0;
}
