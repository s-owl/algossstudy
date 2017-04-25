var fs = require('fs');
//var input = fs.readFileSync('/dev/stdin').toString().trim().split('\n')
var input = fs.readFileSync('./stdin/10825').toString().trim().split('\n')
.filter(function(e, i){
    return (i === 0? false: e);
})
.map(function(e){
    e = e.trim().split(' ');
    return e;
})
.sort(function(a, b){
    return b[1] - a[1] || a[2] - b[2] || b[3] - a[3] || CompareForSort(a, b);
});

// 출력
input.forEach(function(e){
    console.log(e);
});

// 문자열 사전 순 비교
function CompareForSort(first, second)
{
    if (first == second)
        return 0;
    if (first < second) 
        return -1;
    else
        return 1; 
};
