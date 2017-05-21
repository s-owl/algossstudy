(function main(){
    var input = require('fs').readFileSync('../stdin/2741').toString();
    for(var i = input; i >= 1; i--){
        console.log(i);
    }
})();