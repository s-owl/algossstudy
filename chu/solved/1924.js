(function main(){
    var year = [
        [1, 31],
        [2, 28],
        [3, 31],
        [4, 30],
        [5, 31],
        [6, 30],
        [7, 31],
        [8, 31],
        [9, 30],
        [10, 31],
        [11, 30],
        [12, 31]
    ];
    var day = [ 'SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT' ];

    var n = require('fs').readFileSync('../stdin/1924').toString().split(' ');
    var sum = 0;
    for(var i = 1; i < parseInt(n[0]); i++){
        sum += year[i-1][1];
    }
    sum = sum + parseInt(n[1]);
    
    console.log(sum);
    sum = sum % 7;
    console.log(sum);
    console.log(day[sum]);
})()