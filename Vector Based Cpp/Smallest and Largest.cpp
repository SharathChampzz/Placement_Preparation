#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{10,5,23,56,23,13,34};
    sort(v.begin() , v.end());
    cout<<"Smallest = "<<v[0]<<endl;
    cout<<"Largest = "<<v[v.size()-1]<<endl;
    return 0;
}
