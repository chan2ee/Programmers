#include <string>
#include <vector>

using namespace std;

int month(int a){
    if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12){
        return 31;
    }
    else if(a == 4 || a == 6 || a == 9 || a == 11){
        return 30;
    }
    else{
        return 29;
    }
}
string solution(int a, int b) {
    string answer = "";
    vector<string> w = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int num = 0;
    
    for(int i = 1; i < a; i++) {
        num += month(i);
    }
    
    int sum = num + b;
    
    int day = sum % 7;
    
    if(day - 1 < 0){
        answer = w[day - 1 + 7];    
    }
    else{
        answer = w[day - 1];    
    }
    
    return answer;
}