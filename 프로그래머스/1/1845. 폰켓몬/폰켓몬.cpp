#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = nums.size() / 2;
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    if(nums.size() > size){
        answer = size;
    }
    else{
        answer = nums.size();
    }
    return answer;
}