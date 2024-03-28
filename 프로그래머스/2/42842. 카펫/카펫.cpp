#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    vector<int> v;
    int a, b;
    
    for(int i = 1; i * i <= sum; i++){
        if(sum % i == 0){
            a = max(i, sum / i);
            b = min(i, sum / i);
            
            if((a-2) * (b-2) == yellow){
                answer.push_back(a);
                answer.push_back(b);
            }
        }    
    }
    return answer;
}