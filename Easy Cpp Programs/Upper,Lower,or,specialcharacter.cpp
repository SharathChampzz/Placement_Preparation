#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any alphabet : ";
    cin>>c;
    if(c>=65 and c<=90){
            cout<<"Upper Character";
    }
    else if(c>=97 and c<=122){
        cout<<"Lower Character";
    }
    else{
        cout<<"Special Character";
    }
}
