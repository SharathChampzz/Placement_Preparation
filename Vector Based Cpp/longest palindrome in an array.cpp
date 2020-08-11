#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool checkpallindrome(string s){
    string x = s;
    reverse(s.begin() , s.end());
    if(x == s)
        return true;
    else
        return false;
}
int main(){
    vector<string> v{"10101","98456548","Radar","Madam"};
    int maxi = -1;
    for(int i=0;i<v.size();i++){
        bool c = checkpallindrome(v[i]);
        if(c){
            int len = v[i].size();
            if(len > maxi)
                maxi = len;
        }
    }
    cout<<maxi<<endl;
    return 0;
}
