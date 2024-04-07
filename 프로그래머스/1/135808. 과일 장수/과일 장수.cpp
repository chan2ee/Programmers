#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<>());
    //3 3 2 2 1 1 1
    //0 1 2 3 4 5 6
    
    //4 4 4 //4 4 4 //2 2 2 //2 1 1
    //0 1 2   3 4 5   6 7 8  9 10 11
    int size = score.size();
    
    for(int i = 0; i < score.size(); i++){      //3 6 9 12
    
            if(size - m >= 0){                  //9 6 3
                answer += score[i + m - 1] * m; //12 12 6 3
                size -= m;                      //9 6 3 0
                i += (m - 1);                      
            }        
            else{
                break;
            }
        
    }
    
    return answer;
}