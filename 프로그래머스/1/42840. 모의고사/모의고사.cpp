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
    
    if(one_count == two_count && two_count == three_count){
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
    }
    else{
    if(max( {one_count, two_count, three_count} ) == one_count && one_count == two_count){
        answer.push_back(1);
        answer.push_back(2);
    }
    else if(max( {one_count, two_count, three_count} ) == one_count && one_count == three_count){
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(max( {one_count, two_count, three_count} ) == one_count){
        answer.push_back(1);
    }
    
    else if(max( {one_count, two_count, three_count} ) == two_count && two_count == three_count){
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(max( {one_count, two_count, three_count} ) == two_count){
        answer.push_back(2);
    }
        else if(max( {one_count, two_count, three_count} ) == three_count){
        answer.push_back(3);
    }
    }
    
    
    return answer;
}