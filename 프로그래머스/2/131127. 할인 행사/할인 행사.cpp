#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<string> v;
    
    for(int i = 0; i < discount.size(); i++){
        if(10 + i <= discount.size()){
            for(int j = i; j < 10 + i; j++){
                v.push_back(discount[j % discount.size()]);
            }
        }
        
        int cnt = 0;
        
        for(int k = 0; k < want.size(); k++){
            if(count(v.begin(), v.end(), want[k]) == number[k]){
                cnt++;
            }
        }
        
        if(cnt == want.size()){
            answer++;
        }
        
        v.clear();
    }
    return answer;
}