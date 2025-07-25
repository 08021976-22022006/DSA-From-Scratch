//Given an integer x, return true if x is a palindrome, and false otherwise.

//Example 1:
//Input: x = 121
//Output: true
//Explanation: 121 reads as 121 from left to right and from right to left.

//Example 2:
//Input: x = -121
//Output: false
//Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

//Example 3:
//Input: x = 10
//Output: false
//Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


//Constraints:
//-231 <= x <= 231 - 1



#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int x=n;
    if(n<0)
        return false;
    else{
            int revNum=0;
        while(n>0){
            int lastdigit=n%10;
            n=n/10;
            revNum=(revNum*10)+lastdigit;
        }
        if(revNum==x)
            return true;
        else
            return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
