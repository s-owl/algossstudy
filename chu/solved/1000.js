var readline = require("readline");
var rl = readline.createInterface(process.stdin, process.stdout);
var A, B;
rl.on('line', function(line){
    var test = line.split(" ");
    A = parseInt(test[0]);
    B = parseInt(test[1]);
    if(A > 0 && B < 10)
        console.log(A+B);
    rl.close();
});
