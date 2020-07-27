#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int digits = floor(log10(n) + 1); // This is power of  digits to check armstrong number or not
    //string s = to_string(n); // method 2 for calculating number of digits
    //int siz = s.size();
    cout<<digits<<" are there, so power will be "<<digits<<endl;
    int sum = 0;
    int temp = n;
    while(temp!=0){
        sum += pow(temp%10 , digits);
        temp = temp/10;
    }
    n == sum ? cout<<"Number is Armstrong" : cout<<"Number is not a Armstrong";
    return 0;
}
