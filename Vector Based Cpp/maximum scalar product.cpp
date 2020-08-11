#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    /*
    Logic : Multiply small number with small number and large with large
    */
    if(v1.size() != v2.size())
        return 0;
    sort(v1.begin() , v1.end()); // ascending order
    sort(v2.begin() , v2.end()); // ascending order

    int n = v1.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (v1[i] * v2[i]);
    }
    cout<<"Maximum scalar product : "<<sum<<endl;

    return 0;
}
