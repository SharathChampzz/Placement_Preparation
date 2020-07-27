#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char , int> m;
    string st[2];
    char x;
    getline(cin , st[0]);
    getline(cin , st[1]);
    if(st[0].length() != st[1].length()){
        cout<<"Not an Anagram!";
        return 0;
    }
    map<char,int>::iterator itr;
    for(int a=0;a<2;a++){
        string s = st[a];
       for(int i=0;i<s.length();i++){
        itr = m.find(s[i]);
        if(itr != m.end()){ // if found increment previous value
            itr->second += 1;
        }
        else{
            m.insert(pair<char,int>(s[i],1));
        }
    }
    }
    int flag = 0;
    for(itr = m.begin();itr!= m.end();itr++){
        if(itr->second%2!=0){
            cout<<"Not an Anagram!"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<"Anagram Found!"<<endl;
    return 0;
}

