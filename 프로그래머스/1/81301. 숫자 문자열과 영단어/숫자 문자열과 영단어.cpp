#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> number = {"zero", "one", "two", "three", "four", "five", "six",
                            "seven", "eight", "nine"};
    vector<int> num = {0,1,2,3,4,5,6,7,8,9};
    
    string str = "";
    string temp = "";
    
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            str += s[i];
        }
        else{
            temp += s[i];
            for(int j = 0; j < number.size(); j++){
                if(temp == number[j]){
                    str += to_string(num[j]);
                    temp = "";
                }
            }
        }
    }
    
    answer = stoi(str);
        
    return answer;
}