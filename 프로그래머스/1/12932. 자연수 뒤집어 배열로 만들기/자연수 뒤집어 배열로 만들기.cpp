#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str;
    
    str = to_string(n);
    
    for(int i = str.length() - 1; i >= 0; i--){
        answer.push_back(str[i] - '0');
    }
    
    return answer;
}

//str[i] - '0'을 하는 이유 :  int타입의 vector에 넣을 때 string 형을 int형으로 형 변환.
//stoi를 쓰지 못하는 이유 : stoi는 전체적으로 형 변환.
