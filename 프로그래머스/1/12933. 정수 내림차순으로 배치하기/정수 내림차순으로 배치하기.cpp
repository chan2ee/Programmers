#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string str = to_string(n);
    
    sort(str.begin(), str.end(), greater<>());
    
    answer = stol(str);
    
    return answer;
}