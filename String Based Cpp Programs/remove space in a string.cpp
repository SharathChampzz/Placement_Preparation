#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    getline(cin , s);
    int len = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s.erase(s.begin() + i);
        }
    }
    cout<<s<<endl;
}
