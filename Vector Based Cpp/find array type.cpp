//Program to find the array type (even, odd or mixed array)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{1,5,3,8};
    int odd = 0 , even = 0;
    for(int i=0;i<v1.size();i++){
        if(odd == 1 and even == 1){
            cout<<"Mixed type..!"<<endl;
            return 0;
        }
        if(v1[i]%2 == 0){
            even = 1;
        }
        if(v1[i]%2 != 0){
            odd = 1;
        }
    }
    if(odd == 1 and even == 1) // to handle for last element in a vector
        cout<<"Mixed type!"<<endl;
    else if(odd == 1)
        cout<<"Odd type!"<<endl;
    else if(even == 1)
        cout<<"Even type!"<<endl;
    else
        cout<<"Something is wrong..!!"<<endl;

    return 0;
}
