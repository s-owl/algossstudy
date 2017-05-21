var timer = "main";
console.time(timer);

(function main(){
    // var num = 0;
    // console.log(require('fs').readFileSync("../stdin/11004").toString().split('\n')
    //     .filter(function(e, i){
    //         if(i === 0) num = e.split(' ')[1];
    //         return i;
    //     }).map(function(e){
    //         return e.split(' ');
    //     })
    //     [0].sort(function(a, b){
    //         return a - b;
    //     })[num - 1]
    // );
    
    // TEST - 대충 3초 정도 나옴 (시간 단축 필요)
    var num = 4900000;
    var N = 5000000;
    var input = [];
    for(var i = 0; i < N; i++){
        input.push(Math.floor(Math.random()*N));
    }
    input.sort(function(a, b){
        return a - b;
    })
    console.log(input[num-1]);
})();

// 시간 표시
console.timeEnd(timer);
