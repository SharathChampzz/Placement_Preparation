//printing string , length , reversing , concat , copy , compare two string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter First Name : ";
    getline(cin , s);

    string s2;
    cout<<"Enter Last name : ";
    getline(cin , s2);
    s = s + s2;
    cout<<"Fast name and Last name = "<<s<<endl;

    cout<<"Length = "<<s.length()<<endl;
    string::iterator it; // use different iterator for forward and reverse iterator
    cout<<"String using iterator : ";
    for(it = s.begin();it!=s.end();it++){
        cout<<*it;
    }
    cout<<endl;

    string::reverse_iterator itr; // creating iterator varibale
    cout<<"Reverse Order : ";
    for(itr=s.rbegin();itr!=s.rend();itr++ ){
        cout<<*itr;
    }
    cout<<endl;

    // copy function  s.copy(char array , length , start index)

    s.push_back('w');
    cout<<"After Pushing w at the end = "<<s<<endl;

    s.pop_back();
    cout<<"After Poping w at the end = "<<s<<endl;
    return 0;
}
