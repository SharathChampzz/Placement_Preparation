// 5 is an automorphic number, 5*5 =25. The last digit is 5 , input is only single digit
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    n == (n*n)%10 ? cout<<"Number is Automorphic" : cout<<"Number is not Automorphic";
    return 0;
}

