#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


string solution(string s) {
    string answer = "";
    stringstream ss (s);
    vector<int> v;
    string str = "";
    while(getline(ss, str, ' ')){
        v.push_back(stoi(str));
    }
   
    int min_a = *min_element(v.begin(), v.end());
    int max_a = *max_element(v.begin(), v.end());
    
    answer += to_string(min_a);
    answer += ' ';
    answer += to_string(max_a);
    
    return answer;
}