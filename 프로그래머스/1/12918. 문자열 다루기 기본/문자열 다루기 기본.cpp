#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for(int i = 0; i < s.length(); i++){
        if(s.length() == 4 || s.length() == 6){
            if((int)s[i] >= 65 && (int)s[i] <= 90){
                answer = false;
            }
            else if((int)s[i] >= 97 && (int)s[i] <= 122){
                answer = false;
            }
        }
        else{
            answer = false;
        }
    }
    
    return answer;
}