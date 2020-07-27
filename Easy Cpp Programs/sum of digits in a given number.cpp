#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    int n = 0;
    int s = 0;
    while(c!=0){
        s += c%10;
        c = c/10;
        n++;
    }
    cout<<"Sum of digits  = "<<s<<endl;
}

