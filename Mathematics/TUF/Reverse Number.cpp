#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    int revNum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revNum=(revNum*10)+lastdigit;
    }
    return revNum;
}



int main(){
    int n;
    cin>>n;
    cout<<rev(n);
}
