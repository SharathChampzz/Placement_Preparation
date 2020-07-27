#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    getline(cin , s);
    string::reverse_iterator itr;
    string rev;
    for(itr = s.rbegin();itr!=s.rend();itr++){
        rev.push_back(*itr);
    }
    if(s == rev) cout<<"Pallindrome"<<endl;
    else cout<<"Not Pallindrome"<<endl;
}
