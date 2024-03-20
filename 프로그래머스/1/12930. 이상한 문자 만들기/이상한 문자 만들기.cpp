#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            cnt = 0;
            answer += " ";
        }    
        else{ //짝수 대문자 : 홀수 소문자
            if(cnt % 2 == 0){ //인덱스가 짝수 일 때,
                if('A' <= s[i] && s[i] <= 'Z'){
                    s[i] = s[i];
                }
                else if('a' <= s[i] && s[i] <= 'z'){
                    s[i] -= 32;   
                }
            }
            else{ //a - z 97 122 // A-Z 65 90
                if('A' <= s[i] && s[i] <= 'Z'){
                    s[i] += 32;
                }
                else if('a' <= s[i] && s[i] <= 'z'){
                    s[i] = s[i];   
                }
            }
            
            cnt++;
            answer += s[i];
        }
    }
    
    return answer;
}