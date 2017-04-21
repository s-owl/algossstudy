var time = Date.now();
var k;
var arr = [];
var fs = require("fs");
// var input = fs.readFileSync("/dev/stdin").toString()
var input = fs.readFileSync("./stdin/11004").toString()
.trim().split('\n')
.map(function(e, i){
    var x = e.trim().split(' ');
    if(i === 0) k = parseInt(x[1]);
    if(i === 1) arr.push(x);
    return x;
});

arr[0].sort(function(a, b){
    return parseInt(a) - parseInt(b);
});

console.log(parseInt(arr[0][k-1]));

console.log('script time : '+(Date.now() - time)+'ms');