#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter range : ";
    cin>>m>>n;
    int flag = 0;
    for(int j=m;j<=n;j++){
        flag = 0;
        for(int i=2;i<j/2+1;i++){
        if(j%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0) cout<<j<<" ";
    }
    return 0;
}
