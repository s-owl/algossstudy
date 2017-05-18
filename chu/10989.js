var input = require('fs').readFileSync('./stdin/10989').toString().trim().split('\n')
.filter(function(e, i){
    return i === 0 ? false : e;
})
.map(function(e){
    e = e.trim();
    return parseInt(e);
})

console.log(input);

// 메모리

// input = CountingSort(input, 0, input.length);

// input.forEach(function(e){
//     console.log(e);
// })

// function CountingSort(arr, min, max){
//     var i, z = 0, count = [];
//     for(i = min; i <= max; i++){
//         count[i] = 0;
//     }
//     for(i = 0; i < arr.length; i++){
//         count[arr[i]]++;
//     }
//     for(i = min; i <= max; i++){
//         while(count[i]-- > 0){
//             arr[z++] = i;
//         }
//     }
//     return arr;
// }
