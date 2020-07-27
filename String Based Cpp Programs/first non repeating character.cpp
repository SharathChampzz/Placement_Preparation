#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char , int> m;
    string s;
    char x;
    getline(cin , s);
    map<char,int>::iterator itr;
    for(int i=0;i<s.length();i++){
        itr = m.find(s[i]);
        if(itr != m.end()){ // if found increment previous value
            itr->second += 1;
        }
        else{
            m.insert(pair<char,int>(s[i],1));
        }
    }
    char ans,flag = 0;
    for(int i=0;i<s.length();i++){
        itr = m.find(s[i]);
        if(itr->second == 1){
            cout<<s[i]<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0) cout<<"All Characters are repetitive atleast Once!!!"<<endl;
}

