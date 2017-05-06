var readline = require("readline");
var rl = readline.createInterface(process.stdin, process.stdout);

rl.on('line', function(line){
    console.log(line);
    rl.close();
});
