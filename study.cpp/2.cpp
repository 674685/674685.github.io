#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 5e14;
bool islegal(ll x){
    while(x){
        int temp = x % 10;
        if(temp > 3 || temp < 2){
            return false;
        }
        x /= 10;
    }
    return true;
}
int main(){
    ll fact = 0;
    for(ll i = 0; i < MAXN / 2023; i++){
        ll temp = i * 2023;
        if(islegal(temp)){
            cout<<i <<"\n"<<temp<<"\n";
        }
    }
    cout<<"end";
    return 0;
}