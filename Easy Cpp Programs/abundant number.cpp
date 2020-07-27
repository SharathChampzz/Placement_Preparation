// An abundant number is a number for which the sum of its proper divisors is greater than the number itself.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<n/2+1;i++){
        if(n%i == 0) sum += i;
    }
    sum > n ? cout<<"Abundant Number\n" : cout<<"Not Abundant Number\n";
    return 0;
}
