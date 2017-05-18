var timer = "main";
console.time(timer);
    
function main(){
    // var max = 100000;
    var max = 0;
    var input = require('fs').readFileSync('./stdin/1874').toString().split('\n')
    .filter(function(e, i){
        if(i === 0) max = e;
        return i;
    })
    .map(function(e){
        e = e.trim();
        return parseInt(e);
    });

    // 테스트
    // var input2 = [];
    // for(var j = 0; j < max; j++){
    //     input2.push(Math.floor(Math.random()*max));
    // }
    
    var stack = [];
    input.forEach(function(e){
        if(e > stack.length){
            for(var i = stack.length; i < e; i++){
                stack.push(1);
                console.log("+");
            }
            console.log("-");
        } else if( e < stack.length ) {
            console.log("-");
        } else {
            console.log("NO");
        }
    });
};
main();
console.timeEnd(timer);