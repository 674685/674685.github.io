#include<bits/stdc++.h>
using namespace std;
int f(int a){
    int b[40];
    int idx = 0;
    while(a){
        b[++idx] = a % 2;//b从1到idx
        a >>= 1;
    }
    for(int i = 1; i <= idx; i++){
        a = (a << 1) + (b[i] & 1);//a先右移再加0/1
    }
    return a;
}
int main(){
    cout<<f(4)<<endl;
    cout<<f(3);
    return 0;
}