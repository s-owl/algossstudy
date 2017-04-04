var fs = require('fs');
// var input = fs.readFileSync('/dev/stdin').toString().split('\n');
var input = fs.readFileSync('./stdin').toString().split('\r\n');

var size = parseInt(input[0]);
var arr = [];

for (var i = 1; i <= size; i++) {
    arr.push(parseInt(input[i]))
}

arr.sort();

arr.forEach(function(i) {
    console.log(i);
});

// 잘나오는데 백준에서 절대 안된다. 계속 틀렸다고 나온다. 젠장!!!!
