#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string toLower(string str){
    string s = "";
    for(int i = 0; i < str.length(); i++){
        s += tolower(str[i]);
    }
    return s;
}
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> str;
    
    for(int i = 0; i < cities.size(); i++){    
        if(cacheSize == 0){
            answer = cities.size() * 5;
            break;
        }
        int cnt = count(str.begin(), str.end(), toLower(cities[i]));
        
        if(cnt > 0){
            auto a = find(str.begin(), str.end(), toLower(cities[i]));
            int idx = distance(str.begin(), a);
            str.erase(str.begin() + idx);
            str.push_back(toLower(cities[i]));
            
            answer += 1;
        }
        else{
            if(str.size() != cacheSize){
                str.push_back(toLower(cities[i]));
            }   
            else {
                str.erase(str.begin());
                str.push_back(toLower(cities[i]));
            }
            
            answer += 5;
        }
    }
    
    return answer;
}