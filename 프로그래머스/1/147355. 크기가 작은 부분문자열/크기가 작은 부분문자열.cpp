#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string str = ""; //0 1 2
      
    for(int i = 0; i <= t.length() - p.length(); i++){
        str = t.substr(i, p.length());
           
        if(stoull(str) <= stoull(p)){
           answer++;
        }       
    }
    return answer;
}