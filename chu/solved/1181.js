var fs = require('fs');
// var input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
var input = fs.readFileSync('./stdin/1181').toString().trim().split('\n');
var size = input.shift();

var arr = input.reduce(function(a,b){
    if(a.indexOf(b) < 0) a.push(b);
    return a;
}, []);
// 길이 오름차순 정렬 및 단어 사전순 정렬
arr.sort(function(a,b){
    return a.length - b.length || a.localeCompare(b);
}, []);
// 출력
arr.forEach(function(element) {
    console.log(element);
}, this);
