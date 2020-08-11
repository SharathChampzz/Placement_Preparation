#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{5 , 10 ,34 , 34, 23 };
    sort(v.begin() , v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;

}
