#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int a,b,c,d;
    /*
    15/7 and 3/2  Enter this as 15 7 3 2
    */
    cin>>a>>b>>c>>d;
    int hcf = gcd(b,d);
    int lcm = (b*d)/hcf;
    cout<<"LCM = "<<lcm<<endl;
    int num1 = a*lcm/b;
    int num2 = c*lcm/d;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    cout<<(num1+num2)<<"/"<<lcm<<" = "<<(num1+num2)/lcm;
}
