#include <iostream>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    while(n > 0){
        answer += n % 10;    //어떤 수를 10으로 나눈 나머지는 1의 자리 수가 된다.
        n /= 10;            //어떤 수를 10으로 나눈 몫은 1의 자리를 제외한 수가 된다.
    }
    

    return answer;
}
