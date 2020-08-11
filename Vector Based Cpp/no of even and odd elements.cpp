#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int o = 0,e = 0;
    vector<int> v = {1,2,3,4,5,6,7,8,9,0 , 12};

    vector<int>::iterator itr;

    for(itr = v.begin(); itr != v.end(); itr++){
        if((*itr)%2 == 0)
            e++;
        else
            o++;
    }
    cout<<"Even : "<<e<<endl;
    cout<<"Odd : "<<o<<endl;
    return 0;
}
