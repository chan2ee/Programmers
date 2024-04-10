#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    map<string, int> mp;
    
    for(int i = 1; i < phone_book.size(); i++){
        string str = "";
        mp.insert({phone_book[i - 1], 0});
        
        for(int j = 0; j < phone_book[i - 1].size(); j++){
            str += phone_book[i][j];
        }
        
        if(mp.find(str) != mp.end()){
            answer = false;
            break;
        }
    }
    return answer;
}