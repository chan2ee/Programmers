#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int i = 0, j = 0;
    
    while(i + j < goal.size()){
        if(i < cards1.size() && cards1[i] == goal[i + j]){
            i++;
            answer = "Yes";
        }
        else if(j < cards2.size() && cards2[j] == goal[j + i]){
            j++;
            answer = "Yes";
        }
        else{
            answer = "No";
            break;
        }
    }
    
    return answer;
}