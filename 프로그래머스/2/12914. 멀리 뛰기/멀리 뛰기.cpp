#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<long long> dp(n + 1);
    dp[0] = 1; dp[1] = 1;
        
    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;
    }
    
    
    
    return dp[n];
}