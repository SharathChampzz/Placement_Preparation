#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter co-ordinates : ";
    cin>>x>>y;
    if(x == 0 and y == 0) cout<<"Lies at Centre";
    if(x>0 and y>0) cout<<"I Co-ordinate";
    if(x<0 and y>0) cout<<"II Co-ordinate";
    if(x<0 and y<0) cout<<"III Co-ordinate";
    if(x>0 and y<0) cout<<"IV Co-ordinate";
    return 0;
}
