(function (){
    var N, M, V;
    var input = require('fs').readFileSync('./stdin/1260')
    .toString().split('\n').map(function(e, i){
        e = e.trim().split(' ');
        if(i === 0){
            N = e[0];
            M = e[1];
            V = e[2];
        }
        return e;
    });
    input.splice(0,1);

    console.log(input);
    console.log(N,M,V);
    
})();

// 으아아아아ㅏ