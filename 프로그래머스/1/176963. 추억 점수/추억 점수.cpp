#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i < photo.size(); i++){
        int sum = 0;
        for(int k = 0; k < name.size(); k++){
            for(int j = 0; j < photo[i].size(); j++){
                if(name[k] == photo[i][j]){
                    sum += yearning[k];
                }
            }
        }
        answer.push_back(sum);
    }
    return answer;
}