#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    
    if(k < score.size()){
        for(int i = 0; i < k; i++){
            v.push_back(score[i]);
            sort(v.begin(), v.end());
            answer.push_back(v[0]);
        }
    }
    else{
        for(int i = 0; i < score.size(); i++){
            v.push_back(score[i]);
            sort(v.begin(), v.end());
            answer.push_back(v[0]);
        }
    }
    
    
    for(int i = k; i < score.size(); i++){
        if(v[0] < score[i]){
            v.erase(v.begin() + 0);
            v.push_back(score[i]);
            sort(v.begin(), v.end());
        }
        
        answer.push_back(v[0]);
    }
    
    return answer;
}