#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    
    for(int i = 0; i < score.size(); i++){
        if(i < k){
            v.push_back(score[i]);
            sort(v.begin(), v.end());
            answer.push_back(v[0]);
        }
        else{
            if(v[0] < score[i]){
                v.erase(v.begin() + 0);
                v.push_back(score[i]);
                sort(v.begin(), v.end());
            }
            answer.push_back(v[0]);
        }
    }
    return answer;
}