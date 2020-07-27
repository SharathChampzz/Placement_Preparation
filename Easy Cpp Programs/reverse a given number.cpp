#include<iostream>
using namespace std;
void printreverse(int n){ // recursive fn or stack can be used to reverse any kind
    if(n==0) return;  // recursive uses stack in implementation
    cout<<n%10;
    printreverse(n/10);
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    printreverse(n);
    return 0;
}
