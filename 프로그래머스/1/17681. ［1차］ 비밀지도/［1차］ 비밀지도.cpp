#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string to_B(int n, int m){
    string str = "";
    for(int i = 0; i < m; i++){
        str += to_string(n % 2);
        n /= 2;
    }
    reverse(str.begin(), str.end());
    
    return str;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> a;
    vector<string> b;
    
    for(int i = 0; i < n; i++){
        a.push_back(to_B(arr1[i], n));
        b.push_back(to_B(arr2[i], n));
    }
    
    for(int i = 0; i < n; i++){
        string s = "";
        for(int j = 0; j < n; j++){
            if(a[i][j] == '1' || b[i][j] == '1'){
                s += '#';
            }
            else {
                s += ' ';
            }
        }
        answer.push_back(s);
    }
    
    return answer;
}