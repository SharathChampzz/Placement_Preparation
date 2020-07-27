#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    getline(cin , s);
    int len = 0;
    for(int i=0;i<s.length();i++){
        x = tolower(s[i]);
        if(x=='a' or x=='e' or x=='i' or x=='o' or x=='u'){
            s.erase(s.begin() + i);
        }
    }
    cout<<s<<endl;
}
