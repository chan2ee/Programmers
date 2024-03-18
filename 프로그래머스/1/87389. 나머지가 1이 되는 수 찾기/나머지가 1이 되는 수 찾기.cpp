#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 1){
            v.push_back(i);
        }
    }
    
    sort(v.begin(), v.end());
    
    return v[0];
}