#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a and b and c : ";
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<a<<" is greater"<<endl;
    }
    else if(b>a and b>c){
        cout<<b<<" is greater"<<endl;
    }
    else{
        cout<<c<<" is greater"<<endl;
    }
}

