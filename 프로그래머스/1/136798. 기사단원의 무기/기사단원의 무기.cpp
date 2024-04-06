#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> num;
    
    for(int i = 1; i <= number; i++){
        num.push_back(i);
    }
    
    vector<int> v;
    
    for(int i = 0; i < num.size(); i++){
        int count = 0;
        for(int j = 1; j * j <= num[i]; j++){
            if(num[i] == j * j){
                count++;
            }
            else if(num[i] % j == 0){
                count++;
                count++;
            }
        }
        
        v.push_back(count);
    }
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] > limit){
            v[i] = power;
        }
    }
    answer = accumulate(v.begin(), v.end(), 0);
    return answer;
}