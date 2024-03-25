#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if(isdigit(s[0])){
        answer += s[0];
    }
    else if('A' <= s[0] && s[0] <= 'Z'){
        answer += s[0];
    }
    else if(s[0] == ' '){
        answer += ' ';
    }
    else{
        answer += s[0] - 32;
    }
    for(int i = 1; i < s.length(); i++){
        if(s[i - 1] == ' ' && ('A' <= s[i] && s[i] <= 'Z')){
            answer += s[i];
        }
        else if(s[i - 1] == ' ' && ('a' <= s[i] && s[i] <= 'z')){
            answer += s[i] - 32;
        }
        else{
            if('A' <= s[i] && s[i] <= 'Z'){
                answer += s[i] + 32;
            }
            else if(s[i] == ' '){
                answer += ' ';
            }
            else{
                answer += s[i];
            }
        }
    }
    return answer;
}