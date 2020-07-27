#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<"Before swap = "<<a<<" "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swap = "<<a<<" "<<b<<endl;
}
