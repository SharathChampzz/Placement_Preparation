#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 0, 1, 0, 1};
    /*
    Logic : Multiply small number with large number and vice versa
    */
    if(v1.size() != v2.size())
        return 0;
    sort(v1.begin() , v1.end()); // ascending order
    sort(v2.begin() , v2.end() , greater<int>()); // descending order

    int n = v1.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (v1[i] * v2[i]);
    }
    cout<<"Minimum scalar product : "<<sum<<endl;

    return 0;
}
