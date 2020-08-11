#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> v){
    vector<int>::iterator itr;
    for(itr = v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    // insertion deletion search
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print(v);
    // deleting
    v.pop_back();
    cout<<"Deleted Last element\n";
    print(v);
    // searching
    vector<int>::iterator itr;
    itr = find(v.begin() , v.end() , 20);
    if(itr!= v.end()){
        cout<<"Element Found "<<*itr<<endl;
    }
    else{
        cout<<"Not found\n";
    }
    v.erase(itr);
    print(v);

}
