#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any alphabet : ";
    cin>>c;
    c = tolower(c);
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
}
