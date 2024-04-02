#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.length(); i++){
        stack<char> st;
        bool flag = false;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
                flag = true;
            }
            else{
                if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                
            }
        }
        if(st.empty() && flag){
            answer++;
        }
        
        rotate(s.begin(), s.begin() + 1, s.end());
    }

    return answer;
}