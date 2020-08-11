#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{1,2,3,4};
    vector<int> v2{1,2,6,4};
    if(v1.size() != v2.size()){
        cout<<"They are not same!"<<endl;
        return 0;
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i] != v2[i]){
            cout<<"They are not same!"<<endl;
            return 0;
        }
    }
    cout<<"They are same!"<<endl;
    return 0;
}
