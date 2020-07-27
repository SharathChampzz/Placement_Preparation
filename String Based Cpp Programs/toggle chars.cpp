#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);

    int len = 0;
    for(int i=0;i<s.length();i++){

        if(65<= s[i] and s[i] <= 90){  // 65 <= s[i] <= 90 wont give crt answer
            s[i] +=  32;
        }
        else if(97<= s[i] and s[i] <= 122){
            s[i] -= 32;
        }
        else{
            cout<<"Special Char found!"<<endl;
        }
    }
    cout<<s<<endl;
}
