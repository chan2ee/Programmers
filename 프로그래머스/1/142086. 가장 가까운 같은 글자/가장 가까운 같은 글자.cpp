#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> idx;
    string str = "";
    for(int i = 0; i < s.length(); i++){
        int count = -1;
        
        for(int j = 0; j < i; j++){
            if(s[i] == s[j]){
                count = i - j;
            }
        }
        
        answer.push_back(count);
    }
    return answer;
}