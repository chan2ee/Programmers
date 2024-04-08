#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    map<int, int> mp;
    string str = "";
    
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            str += s[i];         
        }
        else if(!str.empty() && (s[i] == '}' || s[i] == ',')){
            mp[stoi(str)]++; 
            str = "";
        }
    }
    
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < v.size(); i++){
        answer.push_back(v[i].first);
    }
    
    
    return answer;
}