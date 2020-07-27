#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Year : ";
    cin>>n;
    if(n%4==0 and  n%100!=0 or n%400 == 0){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not leap Year"<<endl;
    }
}
