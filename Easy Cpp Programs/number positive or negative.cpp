#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    if(c>0){
        cout<<"Positive";
    }
    else if(c<0){
        cout<<"Negative";
    }
    else{
        cout<<"Neutral";
    }
}
