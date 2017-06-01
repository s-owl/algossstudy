(function main(){
    var sum = 0;
    var n = Number(require('fs').readFileSync('../stdin/8393'));
    for( var i = 1; i <= n; i++){
        sum += i;
    }
    console.log(sum);
})()

// 사파이어님 코드
// console.log(
//     Array.apply(null, Array(parseInt(require('fs').readFileSync('/dev/stdin').toString())))
//     .map(function(e, i) { 
//         return (i + 1); 
//     })
//     .reduce(function(prev, curr) { 
//         return prev + curr; 
//     }, 0)
// );
