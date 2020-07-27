/*
For example,6 and 28 are Friendly Pair.
(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28.
*/
#include<iostream>
using namespace std;

int sumofdivisors(int n){
    int sum = 0;
    for(int i=1;i<n/2+1;i++){
            if(n%i==0) sum += i ;
    }
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    int sum1 = sumofdivisors(a);
    int sum2 = sumofdivisors(b);

    sum1/a == sum2/b ? cout<<"Numbers are amicable i.e friendly" : cout<<"Numbers are not amicable";
    return 0;
}
