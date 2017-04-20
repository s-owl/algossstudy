var fs = require('fs');
// var input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
var input = fs.readFileSync('./stdin/10814').toString().trim().split('\n')

// sapphire code
// var input = fs.readFileSync('/dev/stdin').toString().trim().split('\n')
// .filter(function(e, i){
//     return (i === 0? false: e);
// }).map(function(e, i){
//     var x = e.split(' ');
//     return [parseInt(x[0]), x[1], i];
// }).sort(function(a, b){
//     return (a[0] - b[0]) || (a[2] - b[2]);
// }).map(function(e){
//     return e[0]+' '+e[1];
// }).join('\n');
// console.log(input);

// my code
input.shift();

var arr = [];

input.forEach(function(e, i){
    var x = e.trim().split(' ');
    arr.push([parseInt(x), x[1], i]);
});

arr.sort(function(a, b){
    return a[0] - b[0] || a[2] - b[2];
});
arr.forEach(function(a){
    console.log(a[0]+' '+a[1]);
});
