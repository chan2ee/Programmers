#include <string>
#include <bits/stdc++.h>

using namespace std;

string trans(string s1){
    string s = "";
    
    for(int i = 0; i < s1.length(); i++){
        s += tolower(s1[i]);
    }
    
    return s;
}

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> s1;
    vector<string> s2;
    
    str1 = trans(str1);
    str2 = trans(str2);
    
    for(int i = 0; i < str1.length() - 1; i++){
        string str = "";
        
        if((str1[i] >= 'a' && str1[i] <= 'z') && (str1[i+1] >= 'a' && str1[i+1] <= 'z')){
            str += str1[i];
            str += str1[i+1];
            s1.push_back(str);
        }
        
    }
    
    for(int i = 0; i < str2.length() - 1; i++){
        string str = "";
        
        if((str2[i] >= 'a' && str2[i] <= 'z') && (str2[i+1] >= 'a' && str2[i+1] <= 'z')){
            str += str2[i];
            str += str2[i+1];
            s2.push_back(str);
        }
    
    }
    
    if(s1.empty() && s2.empty()){
        return 65536;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    vector<string> sum(s1.size() + s2.size());
    auto it_union = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), sum.begin());
    sum.resize(it_union - sum.begin());
    
    vector<string> com(s1.size() + s2.size());
    auto it_intersection = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), com.begin());
    com.resize(it_intersection - com.begin());
    
    answer = (int)(((double)com.size() / (double)sum.size()) * 65536);
    
    return answer;
}