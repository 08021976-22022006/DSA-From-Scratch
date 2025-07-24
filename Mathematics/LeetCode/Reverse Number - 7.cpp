// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

//Example 1:
//Input: x = 123
//Output: 321

//Example 2:
//Input: x = -123
//Output: -321

//Example 3:
//Input: x = 120
//Output: 21


//Constraints:
//-231 <= x <= 231 - 1


#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    long long revNum=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        revNum=(revNum*10)+lastdigit;
    }
    if(revNum > INT_MAX || revNum < INT_MIN)
        return 0;
    return revNum;
}

int main(){
    int n;
    cin>>n;
    cout<<rev(n);
}
