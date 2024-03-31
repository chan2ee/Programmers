#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> v;
    
    sort(tangerine.begin(), tangerine.end());
        
    for(int i = 0; i < tangerine.size();){
        int cnt = 0;
        cnt = count(tangerine.begin(), tangerine.end(), tangerine[i]);
        v.push_back(cnt);
        i += cnt;
    }
    
    sort(v.begin(), v.end(), greater<>());
    int cnt_ = 0;
    
    for(int i = 0; i < v.size(); i++){
        k -= v[i];
        cnt_++;
        
        if(k == 0){
            answer = cnt_;
            break;
        }
        else if(k < 0){
            answer = cnt_;
            break;
        }
    }
    return answer;
}