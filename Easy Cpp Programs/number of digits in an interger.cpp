#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter number : ";
    cin>>c;
    int n = 0;
    while(c!=0){
        c = c/10;
        n++;
    }
    cout<<n<<" digits are there in a given number"<<endl;
}
