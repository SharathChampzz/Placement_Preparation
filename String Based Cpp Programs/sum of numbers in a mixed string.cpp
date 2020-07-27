#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    int sum = 0;
    char x;
    getline(cin , s);
    int len = 0;
    string temp;
    for(int i=0;i<s.length();i++){
            int flag = 0;
            while(i<s.length()){
                int x = toupper(s[i]);
                if(!(65<=x and x<=90)){
                    temp.push_back(x);
                    i++;
                    flag = 1;
                }
                else{
                    break;
                }
            }
            if(flag == 1){
                    int a = stoi(temp);
                    sum += a;
                    temp.clear();
            }
    }
    cout<<sum<<endl;
}
