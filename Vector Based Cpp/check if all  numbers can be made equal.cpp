#include <bits/stdc++.h>
/*
Let us assume an array arr[]. We need to check if all the numbers of an array can be equalized to a particular number.
 In a single operation, any element of the array can be either multiplied by 2 or by 3.
 If it's possible to make all the array elements equal with the given operation then print Yes else print No.

 Logic :
     tart traversing the array and check if the number is divisible by 2.
    If it is divisible, divide the array element by 2.
    Similarly, check if the array element is divisible by 3.
    If it is divisible, divide the array element by 3.
    Then, check the remaining elements with the first element of the array.
    If they are equal, the array can be equalized.
*/
using namespace std;
bool make_equal(int a[], int n)
{
for (int i = 0; i < n; i++) {
    // Divide number by 2
    while (a[i] % 2 == 0)
        a[i] /= 2;

    // Divide number by 3
    while (a[i] % 3 == 0)
        a[i] /= 3;
    }
    for (int i = 0; i < n; i++){
        cout<<endl<<a[i]<<" ";
    }
    cout<<endl;
    // Remaining numbers
    for (int i = 1; i < n; i++)
    if (a[i] != a[0]) {
        return false;
    }

    return true;
}
int main()
{
    int a[15], n, i;
    cin>>n;
    for(i=0; i<n; i++)
    cin>>a[i];

    if (make_equal(a, n))
    cout << "Yes";
    else
    cout << "No";

    return 0;
}
