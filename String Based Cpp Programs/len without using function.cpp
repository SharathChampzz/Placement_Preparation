#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    string::iterator it;
    int len = 0;
    for(it = s.begin();it != s.end();it++){
        len++;
    }
    cout<<len<<endl;
    if(len == s.length()) cout<<"Length Matched!"<<endl;
    else cout<<"Length did not matched!"<<endl;
    return 0;
}
