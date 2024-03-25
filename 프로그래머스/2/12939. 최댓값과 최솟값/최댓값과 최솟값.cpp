#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


string solution(string s) {
    string answer = "";
    stringstream ss (s);
    vector<string> v;
    string str = "";
    while(getline(ss, str, ' ')){
        v.push_back(str);
    }
    vector<int> b;
    for(int i = 0; i < v.size(); i++){
        b.push_back(stoi(v[i]));
    }
    
    int min_a = *min_element(b.begin(), b.end());
    int max_a = *max_element(b.begin(), b.end());
    
    answer += to_string(min_a);
    answer += ' ';
    answer += to_string(max_a);
    
    return answer;
}