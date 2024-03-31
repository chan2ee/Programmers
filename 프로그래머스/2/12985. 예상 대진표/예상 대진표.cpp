#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int count = 0;
    //if(a == b + 1 || a == b - 1 || b == a + 1 || b == a - 1){
    for(int i = 1; i <= n; i++){
        if(a < b){
            if((b % 2 == 0) && (a == b + 1 || a == b - 1 || b == a + 1 || b == a - 1)) {
                answer = count + 1;
                break;  
            }
        }
        if(b < a){
            if((a % 2 == 0) && (a == b + 1 || a == b - 1 || b == a + 1 || b == a - 1)) {
                answer = count + 1;
                break;  
            }
        }
        if(a % 2 == 0){
            a /= 2; 
            count++; 
        }   
        else{
            a = (a + 1) / 2;
            count++;
        }
        if(b % 2 == 0){ 
            b /= 2; 
        }
        else{
            b = (b + 1) / 2;    
        }
        
        
    }

    return answer;
}