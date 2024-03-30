#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> str;
    str.push_back(words[0]);
    
    for(int i = 1; i < words.size(); i++){
        if(answer.size() != 0){
            break;
        }
        
        if(str[i - 1].back() == words[i].front()){
            str.push_back(words[i]);    
        }
        else{
            answer.push_back((i % n) + 1);
            answer.push_back((i / n) + 1);
            break;
        }
                
        for(int j = 0; j < i; j++){
            if(words[i] == words[j]){
                answer.push_back((i % n) + 1);
                answer.push_back((i / n) + 1);
            }
        }
    }
    
    if(answer.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}