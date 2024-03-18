#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++){    //for문 범위를 1부터 하는 이유 : 0으로 나누면 예외처리가 되기 때문.
        if(n % i == 0){
            answer += i;
        }
    }
    
    return answer;
}

