require('fs').readFileSync('../stdin/10989').toString().trim().split('\r\n')
.filter(function(e, i){
    return i === 0 ? false : e;
})
.sort(function(a, b){
    return a - b;
})
.forEach(function(e){
    console.log(e);
});

// 메모리 초과는 안뜨는데 틀렸다고 나옴