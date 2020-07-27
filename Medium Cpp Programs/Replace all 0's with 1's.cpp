#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s = to_string(x);
    for(int i=0;i<s.size();i++){
        if(s[i] == 48){
            s[i] = 49;
        }
    }
    x = stoi(s);
    cout<<x<<endl;
    return 0;
}
