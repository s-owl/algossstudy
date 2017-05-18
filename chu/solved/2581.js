function main(){
    var min = 0;
    var max = 0;
    var input = require('fs').readFileSync('../stdin/2581').toString().split('\n')
    .filter(function(e,i){
        if(i === 0) min = parseInt(e.trim());
        if(i === 1) max = parseInt(e.trim());
        return 0;
    });

    var arr = [];

    var sosu = function(num){
        for (var i = 2; i <= num; i++) {
            if(num === i) arr.push(i);
            if(num % i === 0) return false;
        }
    };

    for(var i = min; i <= max; i++) sosu(i);
    if(arr.length < 1){
        console.log(-1);
    } else {
        var sum = 0;
        arr.forEach(function(e){
            sum += e;
        })
        console.log(sum);
        console.log(arr[0]);
    }
}
main();






