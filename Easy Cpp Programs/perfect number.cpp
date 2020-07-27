/*
For example, 6 is a perfect number.
The divisors of 6 are 1, 2 and 3.
1 + 2 + 3 = 6.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;

    for(int i=1;i<n/2+1;i++){
            if(n%i==0) sum += i ;
    }
    n == sum ? cout<<"Number is Perfect" : cout<<"Number is not a Perfect Number";
    return 0;
}

