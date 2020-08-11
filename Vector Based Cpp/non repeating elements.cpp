
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {1, 2, 1, 4, 2, 2, 1, 5};
    map<int , int> m;
    map<int , int>::iterator itr;
    for(int i=0;i<v.size();i++){
        itr = m.find(v[i]);
        if(itr != m.end()){ // element found update value
            itr->second += 1;
        }
        else{ // element not found so insert
            m.insert(pair<int , int>(v[i] , 1));
        }
    }
    cout<<"Non repeating elements : ";
    for(itr = m.begin(); itr != m.end(); itr++){
        //cout<<itr->first<<" : "<<itr->second<<endl;
        if(itr->second == 1){
            cout<<itr->first<<" ";
        }
    }
    cout<<endl;
    return 0;
}
