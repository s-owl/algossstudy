function main(){
    var input = require('fs').readFileSync('../stdin/10809').toString().split('');
    var alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];
    alphabet.forEach(function(e, i){
        if(e === findAlphabet(e, input)){
            process.stdout.write(input.indexOf(e)+" ");
        }
        else
            process.stdout.write("-1 ");
    })
}

var findAlphabet = function(e, input){
    for( i in input )
        if(input[i] === e)
            return e;
}

main();