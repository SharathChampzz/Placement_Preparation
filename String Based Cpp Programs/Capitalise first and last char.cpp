#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    getline(cin , s);
    s[0] = toupper(s[0]);
    s[s.length()-1] = toupper(s[s.length()-1]);
    cout<<s<<endl;
}
