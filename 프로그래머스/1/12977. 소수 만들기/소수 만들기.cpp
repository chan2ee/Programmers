#include <vector>
#include <iostream>
using namespace std;

bool is_prime(int n){
    for(int i = 2; i < n / 2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
    
int solution(vector<int> nums) {
    int answer = 0;
    vector<int> v;
    
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                if(is_prime(nums[i] + nums[j] + nums[k])){
                    answer++;    
                }
            }
        }
    }
 
    
    return answer;
}