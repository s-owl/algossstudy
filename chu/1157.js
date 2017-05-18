function main(){
    var input = require('fs').readFileSync('./stdin/1157').toString().split('');
    console.log(input);

    var d = {};

    var mymap = new Map();
    input.forEach(function(e){
        mymap.set(e, 0);
    });

    input.forEach(function(e){
        num = mymap.get(e);
        mymap.set(e, ++num);
    });
    mymap.forEach(function(v, k){
        checkMax(v, k);
    })
    console.log(mymap);
    console.log(mymap.entries());
}

var checkMax = function(v, k){
   var max;
   
}

main();

// Map이 아닌가벼..