function solution(left, right) {
    var answer = 0;
    // 제곱근이 정수인 수는 약수의 갯수가 홀수
    // 곱하는 짝이 본인이라서 하나 부족함.
    for(let i = left; i <= right; i++){
        let count = 0;
        for(let j = 1; j <= i; j++){
            if(i % j === 0){
                count++;
            }
        }
        if(count % 2 === 0){
            answer += i
        } else {
            answer -= i
        }
    }
    
    return answer;
}