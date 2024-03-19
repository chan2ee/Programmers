#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int min = *min_element(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++){
        if(arr.size() == 1){
            answer.push_back(-1);
        }
        else{
            answer.push_back(arr[i]);
        
            if(arr[i] == min){
                answer.erase(answer.begin() + i);
            }
        }
        
        
        
    }
    
    return answer;
}