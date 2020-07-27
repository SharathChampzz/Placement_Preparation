#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    int sum = 0;
    for(int i=a;i<=b;i++){
        sum += i;
    }
    cout<<"Sum of digits  = "<<sum<<endl;
}
