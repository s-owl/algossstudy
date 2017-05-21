var input = require('fs').readFileSync('../stdin/2438').toString();
for(var i = 1; i <= input; i++){
    for(var j = 1; j <= i; j++){
        process.stdout.write('*');
    }
    console.log();
}