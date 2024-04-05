#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    //1 3 2 4 2
    int one_count = 0;
    int two_count = 0;
    int three_count = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == one[i % one.size()]){
            one_count++;
        }
        if(answers[i] == two[i % two.size()]){
            two_count++;
        }
        if(answers[i] == three[i % three.size()]){
            three_count++;
        }
    }
    
    vector<int> v;
    v.push_back(one_count);     v.push_back(two_count);     v.push_back(three_count);
    
    int max = *max_element(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] == max){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}