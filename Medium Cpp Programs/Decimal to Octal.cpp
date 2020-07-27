#include<iostream>
using namespace std;
void decitooctal(long deci){
    if(deci == 0){
        return;
    }
    int rem = deci%8;
    decitooctal(deci/8); // using recursion nothing but using stack
    cout<<rem;  // to reverse the number recursion / stack can be used
}
int main(){
    long deci;
    cin>>deci;
    decitooctal(deci);
    return 0;
}

