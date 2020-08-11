#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{5 , 10 ,34 , 43, 23 };
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;

}

