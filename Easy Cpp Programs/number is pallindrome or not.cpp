#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter a number : ";
    cin>>n;
    int r = 0;
    temp = n;
    while(temp != 0){
        r = 10*r + temp%10;
        temp = temp/10;
    }
    cout<<"Reversed Number  = "<<r<<endl;
    n == r ? cout<<"Number is Pallindrome" : cout<<"Number is not a pallindrome";
    return 0;
}
