#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(1){
        answer += (n / a) * b; //10개
        n = (n % a) + ((n / a) * b);
        
        if(n < a){
            break;
        }
    }
    return answer;
}