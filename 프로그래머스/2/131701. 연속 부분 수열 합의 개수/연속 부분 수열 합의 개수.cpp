#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> newarr;
    vector<int> v;
    newarr.insert(newarr.end(), elements.begin(), elements.end());
    newarr.insert(newarr.end(), elements.begin(), elements.end());
    
    for(int i = 1; i <= elements.size(); i++){
        for(int j = 0; j < elements.size(); j++){
            int sum = 0;
            for(int k = j; k < j + i; k++){
                sum += newarr[k];
            }
            v.push_back(sum);
        }
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    return v.size();
}