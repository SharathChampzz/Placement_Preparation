#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    getline(cin , s);
    char temp;
    for(int i=0;i<s.length();i++){  // bubble sorting
        for(int j=0;j<s.length()-1;j++){
            if(s[j+1] < s[j]){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    cout<<s<<endl;
}
