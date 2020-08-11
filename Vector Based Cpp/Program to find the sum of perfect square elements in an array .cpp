//perfect square if find square root you won't get floating values
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*  Check whether number is float or not
Logic : Multiply by ten, check for last digit , if its zero then int else float
eg :    x = 25.0
        y = 250 i.e x*20
        y = 0 i.e Yeah X was integer

        x = 256.08
        y = 2560.8
        y = 8 i.e there is some remainder then obviously its float type
*/
bool isperfectsquare(int n){
    float x = sqrt(n);
    int y = x*10;
    y = y%10;
    if(y == 0)
        return true; // Perfect square, because result of sqrt() is of type int
    else
        return false;
}

int main(){
    vector<int> v{1,4,3,16};
    int sum = 0;
    for(int i=0;i<v.size();i++){
        bool x = isperfectsquare(v[i]);
        if(x == true)
            sum += v[i];
    }
    cout<<sum<<endl;


    return 0;
}

