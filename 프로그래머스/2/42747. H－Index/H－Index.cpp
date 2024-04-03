#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    vector<int> v;
    
    for(int i = 0; i < citations.size(); i++){
        int count = 0;
        for(int j = 0; j < citations.size(); j++){
            if(citations[i] <= citations[j]){
                count++;
            }
            v.push_back(min(citations[i], count));
        }
    }
    
    answer = *max_element(v.begin(), v.end());
    
    return answer;
}