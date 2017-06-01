(function main(){
    var input = Number(require('fs').readFileSync('../stdin/2438'));
    for(var i = 1; i <= input; i++){
        process.stdout.write(printSpace(i,1));
        for(var j = input; j >= i; j--){
            process.stdout.write('*');
        }
        console.log();
    }
    function printSpace(M, N){
        var space = '';
        for(var i = N; i < M; i++){
            space += ' ';
        }
        return space;
    }
})();


// 사파이어님 코드 후더럳ㄹ..
// console.log(
//     Array.apply(null, Array(
//         parseInt(require('fs').readFileSync('/dev/stdin').toString())
//     )
// ).map(function(e, i, a) { 
//     return a.map(function(f, j) { 
//         return ((a.length - 1) - i > j ? ' ' : '*'); 
//     }).join(''); 
// }).reverse()
// .join('\n'));
