#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int count_zero = 0;
    int count_toB = 0;
    int count_one = 0;
    
    while(s != "1"){
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                count_zero++;
            }
            else{
                count_one++;
            }
        }
      
        s = "";
        while(count_one > 0){
            s += to_string(count_one % 2);
            count_one /= 2;
        }
        count_toB++;
        
    }
    
    answer.push_back(count_toB);
    answer.push_back(count_zero);
    
    
    return answer;
}