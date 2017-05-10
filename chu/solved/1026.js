function main(){
    var fs = require('fs');
    var max = 0;
    var input = fs
                .readFileSync('../stdin/1026')
                .toString()
                .split('\n')
                .filter(function(e, i){
                    if(i === 0) max = e;
                    return i;
                });

    var a = createArray(input[0])
    .sort(function(a,b){
        return a - b;
    });

    var b = createArray(input[1])
    .sort(function(a,b){
        return b - a;
    });
    
    var s = calcSum(a,b,max);
    console.log(s);
}

var createArray = function(arr){
    var A = arr.split(' ').map(function(e){
        return parseInt(e);
    });
    return A;
}

var calcSum = function(a, b, max){
    var s = 0;
    for( var i = 0; i < max; i++ ){
        s = s + a[i]*b[i];
    } 
    return s;
}

main();