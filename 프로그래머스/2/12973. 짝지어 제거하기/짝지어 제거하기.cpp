#include <iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> str;
    
    for(int i = 0; i < s.length(); i++){    
        if(!str.empty() && str.top() == s[i]){
            str.pop();
        }
        else{
            str.push(s[i]);
        }
    }
    
    if(str.empty()){
        answer = 1;
    }
    else{
        answer = 0;
    }
    

    return answer;
}