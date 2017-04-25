var fs = require("fs");
var input = fs.readFileSync("./stdin/11652").toString().split('\n')
.filter(function(e, i){
    return i === 0 ? false: e;
}).map(function(e){
    e = e.trim();
    return parseInt(e);
})

var frequency = {};
var max = 0;
var result;
input.forEach(function(v){
    frequency[v] = (frequency[v] || 0) + 1; // fre증가
    if(frequency[v] > max){
        max = frequency[v];
        result = v;
    }else if(frequency[v] == max && v < result){
        max = frequency[v];
        result = v;
    }   
});

console.log(result);
