#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int value[40];
    int sum = 0;
    for(int i = 0; i < 40; i++){
        cin>>value[i];
        sum += value[i];
    }
    vector<int> dp(sum/2 + 100, 0);///
    dp[0] = 0;
    for(int i = 0; i < 40; i++){
        for(int j = sum/2; j >= value[i]; j--){//注意循环条件
                dp[j] = max(dp[j - value[i]] + value[i], dp[j]);
        }
    }
    cout<<dp[sum/2] * (sum - dp[sum / 2]);
    return 0;
}