#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of People in room : ";
    cin>>n;
    // maximum handshakes is not but nC2
    int maxhandshake = n * (n-1) / 2;
    cout<<maxhandshake<<" Handshakes are possible"<<endl;
    return 0;
}
