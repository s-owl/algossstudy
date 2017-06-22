// var input = require('fs').readFileSync('/dev/stdin').toString();
var input = require('fs').readFileSync('./stdin/1463').toString();
// 1,2,3 을 정의
var arr = [1, 1];
console.time("start");
// 메인 함수
function main(e) {
    // console.log("roop = "+e);
    if(e == 0 || e == 1) return Number.MAX_VALUE;
    if(e == 2) return 1;
    if(e == 3) return 1;
    
    var a,b,c;
    if(e % 3 == 0) a = Math.floor(e / 3);
    if(e % 2 == 0) b = Math.floor(e / 2);
    c = e-1;
    if(a == undefined) a = 0;
    if(b == undefined) b = 0;
    if(arr[e-2] == undefined){
        var min = Math.min(main(a), main(b), main(c));
        // console.log("min = "+min);
        arr[e-2] = min + 1;
    }
    // console.log(arr);
    return arr[e-2];
}
var input = 10000; // input이 10000개 이상이면 RangeError: Maximum call stack size exceeded 에러남
var clear = main(input);
console.log(input+"의 최솟값 : "+clear);
console.timeEnd("start");