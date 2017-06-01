(function main(){
    var zero = 0;
    var one = 0;
    var input = require('fs').readFileSync('../stdin/1003').toString().split('\n')
    .slice(1)
    .map(function(e){
        return e.trim();
    })
    .forEach(function(e){
        zero = 0;
        one = 0;
        fibonacci(parseInt(e));
        console.log(zero, one);
    });

    function fibonacci(n){
        if(n === 0){
            zeroCheck();
            return 0;
        } else if (n === 1){
            oneCheck();
            return 1;
        } else {
            return fibonacci(n-1) + fibonacci(n-2);
        }
    };

    function zeroCheck(){
        return zero++;
    };

    function oneCheck(){
        return one++;
    };
})()