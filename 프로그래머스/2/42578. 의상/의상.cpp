#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> mp;
    
    for(int i = 0; i < clothes.size(); i++){
        mp[clothes[i][1]]++;
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++){
        answer *= ((it->second) + 1);
    }
    
    answer -= 1;
    
    
    return answer;
}