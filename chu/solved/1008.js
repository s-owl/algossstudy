var input = require('fs').readFileSync('/dev/stdin').toString().split(' ')
.map(function(e){
    return e.trim();
});

console.log(input[0] / input[1]);
