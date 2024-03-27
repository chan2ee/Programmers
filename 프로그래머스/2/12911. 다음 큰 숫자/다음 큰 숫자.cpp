#include <string>
#include <vector>

using namespace std;

int to_B(int n, int c){
    while(n > 1){
        if(n % 2 == 1){
            c++;
        }
        n /= 2;
    }
    if(n == 1){
        c++;
    }
    
    return c;
}
int solution(int n) {
    int answer = 0;
    int num = n + 1;
    
    int cnt_a = to_B(n, 0); //n의 2진법 변환 후 1개수
    
    while(1){
        if(cnt_a == to_B(num, 0)){
            answer = num;
            break;
        }
        else{
            num++;
        }
    }
    return answer;
}