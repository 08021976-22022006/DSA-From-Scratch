// Count Number Of Digits

#include<bits/stdc++.h>
using namespace std;
int countDigit(int n){
    int cnt=0;
    while(n>0){
        // int lastdigit = n%10;
        cnt++;
        n=n/10;
    }
    return cnt;
}

int countUsingLog(int n){
    int cnt = (int) log10(n) + 1;
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigit(n)<<endl;
    cout<<countUsingLog(n);
    return 0;

}
