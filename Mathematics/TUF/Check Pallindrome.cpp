#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int n){
    int num=n;
    int revNum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revNum=(revNum*10)+lastdigit;
    }
    if(num==revNum)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    if(isPallindrome(n))
        cout<<"Pallindrome!"<<endl;
    else
        cout<<"Not a Pallindrome!"<<endl;
    return 0;
}
