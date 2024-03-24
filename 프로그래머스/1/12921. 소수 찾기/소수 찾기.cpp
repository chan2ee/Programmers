#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool s(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int solution(int n) {
    int answer = 0;
    
    for(int i = 2; i <= n; i++){
        if(s(i)){
            answer++;
        }
    }
    return answer;
}