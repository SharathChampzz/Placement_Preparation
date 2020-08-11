// Sorting method : sort is ascending order and print second element
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{1,5,0,8};
    int small1 = 0 , small2 = 0;
    if(v1[0]>v1[1]){
        small2 = v1[0];
        small1 = v1[1];
    }
    else{
        small1 = v1[0];
        small2 = v1[1];
    }
    for(int i=2;i<v1.size();i++){
        if(v1[i] < small1){
            small2 = small1;
            small1 = v1[i];
            continue;
        }
        if(v1[i] < small2 and v1[i]>=small1){
            small2 = v1[i];
            continue;
        }
    }
    cout<<"Second Smallest = "<<small2<<endl;

    return 0;
}
