(function main(){
    var input = Number(require('fs').readFileSync('../stdin/2438'));
    for(var i = 1; i <= input; i++){
        process.stdout.write(printSpace(input, i));
        for(var j = 0; j < i; j++){
            process.stdout.write('*');
        }
        console.log();
    }

    function printSpace(M, N){
        var space = '';
        for(var i = N; i < M; i++){
            space += ' ';
        }
        return space;
    }
})();