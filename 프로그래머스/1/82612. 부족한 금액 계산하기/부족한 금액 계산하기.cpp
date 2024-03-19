using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum = 0;
    
    //등차수열 합 이용 : (초항 : price) : (막항 : l) : (등차 : price) : (항 개수 : count)
    long long l = price + (count - 1) * price;
    
    sum = count * (price + l) / 2;
    
    if(sum >= money){
        answer = sum - money;
    }
    else{
        answer = 0;
    }
    

    return answer;
}