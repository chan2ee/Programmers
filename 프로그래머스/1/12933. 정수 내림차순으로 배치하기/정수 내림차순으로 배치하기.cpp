#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string str = to_string(n);
    
    sort(str.begin(), str.end(), greater<>());
    
    answer = stol(str);
    
    return answer;
}

//string 형도 sort가 되고, 세번째 매개변수는 내림차순을 의미한다.
//greater<타입>()의 형태인데, <타입> 부분을 비워주면 자동으로 타입을 찾아준다.
//stol : string to long
