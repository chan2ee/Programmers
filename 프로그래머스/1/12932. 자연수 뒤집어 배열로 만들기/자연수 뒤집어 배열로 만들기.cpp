#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str;
    
    str = to_string(n);
    
    for(int i = str.length() - 1; i >= 0; i--){
        answer.push_back(str[i] - '0');
    }
    
    return answer;
}