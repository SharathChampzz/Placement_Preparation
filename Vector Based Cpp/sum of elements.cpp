#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4};
    vector<int>::iterator it;
    int sum = 0;
    for(it = v.begin(); it!=v.end(); it++)
        sum += *it;
    cout<<sum<<endl;
    return 0;
}
