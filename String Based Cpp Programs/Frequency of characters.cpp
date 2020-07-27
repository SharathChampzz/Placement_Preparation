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

    for(itr = m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" : "<<itr->second<<endl;
    }
}

