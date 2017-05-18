var input = require("fs").readFileSync("../stdin/11652").toString().split('\n')
.map( function(e) {
    return e.trim();
});
input.splice(0,1);

var myMap = new Map();

input.forEach(function(e){
    myMap.set(e, 0);
});

input.forEach(function(e){
    var a = myMap.get(e);
    myMap.set(e, ++a);
});

var arr = [];

myMap.forEach(function(e,i){
    arr.push( [i, e] );
});

arr.sort(function(a,b){
    return b[1] - a[1] || a[0] - b[0];
});

console.log(arr[0][0]);

// 런타임 에러 