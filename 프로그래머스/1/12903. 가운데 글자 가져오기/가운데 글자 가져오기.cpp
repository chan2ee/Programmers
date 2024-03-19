#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num = s.length() % 2;
    
    if(num == 1){
        answer += s[s.length() / 2];
    }
    else{
        answer += s[s.length() / 2 - 1];
        answer += s[s.length() / 2];
    }
    
    return answer;
}