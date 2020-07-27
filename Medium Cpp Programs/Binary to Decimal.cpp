#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long bin;
    cin>>bin;
    long deci = 0;
    int i = 0;
    // binary to decimal
    while(bin!=0){
        deci += pow(2,i)*(bin%10);
        i++;
        bin = bin/10;
    }
    cout<<"Decimal equivalent = "<<deci<<endl;
    return 0;
}
