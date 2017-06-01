(function main(){
    var n = require('fs').readFileSync('../stdin/10869').toString().split(' ');
    console.log(parseInt(n[0]) + parseInt(n[1]));
    console.log(n[0] - n[1]);
    console.log(n[0] * n[1]);
    console.log(Math.floor(n[0] / n[1]));
    console.log(n[0] % n[1]);
})()