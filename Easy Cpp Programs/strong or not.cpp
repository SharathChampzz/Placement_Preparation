#include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;
    int temp = n;
    while(temp!=0){
        sum += fact(temp%10);
        temp = temp/10;
    }
    n == sum ? cout<<"Number is Strong" : cout<<"Number is not strong";
    return 0;
}
