#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> v;
    
    for(int i = 0; i < progresses.size(); i++){
        if((100 - progresses[i]) % speeds[i] == 0){
            v.push_back((100 - progresses[i]) / speeds[i]);
        }    
        else{
            v.push_back(((100 - progresses[i]) / speeds[i]) + 1);
        }
    }
    //[7 3 9]
    //[5 10 1 1 20 1]
    
    int complete = v[0]; //7
    int count = 1;
    
    for(int i = 1; i < v.size(); i++){
        if(complete >= v[i]){
            count++;
        }
        else{
            answer.push_back(count);
            complete = v[i];
            count = 1;
        }
    }
    answer.push_back(count);
    
    return answer;
}