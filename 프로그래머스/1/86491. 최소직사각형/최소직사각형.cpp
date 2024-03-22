#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> w;
    vector<int> h;
    
    for(int i = 0; i < sizes.size(); i++){ 
        if(sizes[i][0] > sizes[i][1]){
            w.push_back(sizes[i][0]);
            h.push_back(sizes[i][1]);
        }
        else if(sizes[i][0] < sizes[i][1]){
            w.push_back(sizes[i][1]);
            h.push_back(sizes[i][0]);
        }
        else{
            w.push_back(sizes[i][0]);
            h.push_back(sizes[i][1]);
        }
        
    }   
    auto max_w = *max_element(w.begin(), w.end());
    auto max_h = *max_element(h.begin(), h.end());
    
    answer = max_w * max_h;
    
    return answer;
}
