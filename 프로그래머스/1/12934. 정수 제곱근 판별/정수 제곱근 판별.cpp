#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long ret;
    //3일때, double형으로 들어가서 1.xxxx 뽑히고 4로 계산됨.  
    
    for(long long i = 1; i * i <= n; i++){
        if(i * i == n){
            ret = (long long)sqrt(n);
            answer = pow(ret + 1, 2);
        }
        
    }
    return answer;
}