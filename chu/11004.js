// 메모리 초과

const fs = require("fs");
let val;
console.log(
    countingSort(
        fs.readFileSync("./stdin/11004").toString().split('\n')
        .filter((elem, index) => {
            if(index === 0){
                val = parseInt(elem.trim().split(' ')[1]);
            }
            return (index > 0);
        })
        .map((e) => e.trim().split(' '))[0]
    )[val-1]
);

function countingSort(arr){
    return arr.reduce( (acc, v) => (acc[v] = (acc[v] || 0) + 1, acc), [])
              .reduce( (acc, n, i) => acc.concat(Array(n).fill(i)), [] );
};