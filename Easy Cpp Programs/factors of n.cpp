#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factorials : ";
    for(int i=1;i<n/2+1;i++){
        if(n%i == 0) cout<<i<<" ";
    }
    cout<<n<<endl;
    return 0;
}
