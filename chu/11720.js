var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split('\n')[1].split('');
// var input = fs.readFileSync('./stdin/11720').toString().split('\n')[1].split('');

var sum = 0;
input.forEach(function(a){
    sum += parseInt(a);
});

console.log(sum);
