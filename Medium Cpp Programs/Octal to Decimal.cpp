#include<iostream>
#include<cmath>
using namespace std;
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
    return 0;
}

