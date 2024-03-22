#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            answer += " ";
        }
        else if(s[i] == 'z' || s[i] == 'Z'){
            answer += s[i] - 26 + n;
        }
        else{
        if(s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i] + n > 90){
                answer += s[i] - 26 + n;
            }
            else{
                answer += s[i] + n;
            }
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            if(s[i] + n > 122){
                answer += s[i] - 26 + n;
            }
            else{
                answer += s[i] + n;
            }
        }
        }
    }
    return answer;
}