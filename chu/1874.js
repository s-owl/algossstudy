var timer = "main";
console.time(timer);
    
function main(){
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
    
    var stack = {
        'max': 0,
        'arr': []
    };
    input.forEach(function(e, i){
        if(stack.max > e){
            stack.arr.push('-');
        } else {
            for(var i = stack.max; i < e; i++){
                stack.arr.push('+');
            }
            stack.arr.push('-');
            stack.max = e;
        }
    });
    console.log(stack.arr.toString().replace(/,/g,'\n'));
};
main();
console.timeEnd(timer);