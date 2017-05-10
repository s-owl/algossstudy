// function main(){
//     var input = parseInt(require('fs').readFileSync('./stdin/13301').toString());
//     var s = calcSum(input);
//     console.log(s);
// }

var calcSum = function(max){
    var a = 0;
    var b = 1;
    var c = 0;
    for(var i = 0; i <= max; i++){
        c = b;
        b = a;
        a = b + c;
    }
    return 2*(a+b);
}

function TEST(x){
    var s = calcSum(x);
    console.log(s);
}

for(var i = 1; i <= 80; i++){
    TEST(i);
}

// 77~80 번째 마지막 숫자가 이상하게 찍히네...