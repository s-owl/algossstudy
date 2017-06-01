var input = Number(require('fs').readFileSync('../stdin/2739'));
for(var i = 1; i <= 9; i++){
    console.log(input + ' * ' + i + ' = ' + (input*i) );
}