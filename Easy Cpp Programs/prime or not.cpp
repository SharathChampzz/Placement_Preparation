#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int flag = 0;
    for(int i=2;i<n/2+1;i++){
        if(n%i == 0)
            flag = 1;
    }
    flag == 1? cout<<"Not Prime\n" : cout<<"Prime Number\n";
    return 0;
}
