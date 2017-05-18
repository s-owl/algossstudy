var num = 0;
console.log(require('fs').readFileSync("../stdin/11004").toString().split('\n')
    .filter(function(e, i){
        if(i === 0) num = e.split(' ')[1];
        return i;
    }).map(function(e){
        return e.split(' ');
    })[0].sort(function(a, b){
        return a - b;
    })[num - 1]
);

// 시간 초과