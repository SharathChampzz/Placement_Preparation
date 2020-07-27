#include<iostream>
using namespace std;
void fib(int n){
    int a = 0 , b = 1,c;
    if(n<=1){
        cout<<"Enter atleast 2"<<endl;
        return;
    }
    cout<<a<<" "<<b;
    for(int i=2;i<n;i++){
        c = a + b;
        a = b;
        b = c;
        cout<<" "<<c;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fib(n);
}
