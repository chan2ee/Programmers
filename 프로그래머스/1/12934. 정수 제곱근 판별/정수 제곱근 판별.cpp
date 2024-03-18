#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long ret;

    for(long long i = 1; i * i <= n; i++){
        if(i * i == n){
            ret = (long long)sqrt(n);
            answer = pow(ret + 1, 2);
        }
        
    }
    return answer;
}

//for문의 범위가 중요하다. 제곱근을 찾으면 종료하는 것이 시간초과를 피할 수 있는 방법이다.
//따라서, i * i <= n을 해준다면 n의 제곱근을 찾고 for문을 탈출하게 된다.

//sqrt는 제곱근 함수이다. 기본 타입이 double이기 때문에 형변환을 해줘야 함.
//pow는 승수 함수 이다. pow(a, b)이라면 a의 b승의 값을 알 수 있다.
