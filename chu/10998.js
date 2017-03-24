var readline = require('readline');
var r = readline.createInterface(process.stdin,process.stdout);

r.on('line', function(line){
    var test = line.split(" ");
    var a = parseInt(test[0]);
    var b = parseInt(test[1]);
    console.log(a*b);
    r.close();
});
