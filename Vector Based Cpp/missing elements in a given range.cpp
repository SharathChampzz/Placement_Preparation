#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 8, 9};
    int a,b; // to store range
    cout<<"Enter range : ";
    cin>>a>>b;

    sort(v.begin() , v.end());

    for(int i=a;i<=b;i++){
        if(find(v.begin(), v.end(), i) == v.end()){ // Not found
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
