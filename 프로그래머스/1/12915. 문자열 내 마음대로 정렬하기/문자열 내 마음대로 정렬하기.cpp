#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int num;

bool s(string a, string b){
    if(a[num] == b[num]){
        return a < b;   
    }
    return a[num] < b[num];
}

vector<string> solution(vector<string> strings, int n) {
    num = n;
    vector<string> answer;
    
    sort(strings.begin(), strings.end(), s);
    
    return strings;
}