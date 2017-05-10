var fs = require('fs');

var ascending = [1,2,3,4,5,6,7,8];
var descending = [8,7,6,5,4,3,2,1];
var sum = 0;

var input = fs
            .readFileSync('../stdin/2920')
            .toString().split(' ')
            .map(function(e){
                return parseInt(e);
            });

for( index in input ){
    if(input[index] === ascending[index])
        sum++;
    if(input[index] === descending[index])
        sum--;
}

if( sum === 8 )
    console.log("ascending");
else if( sum === -8 )
    console.log("descending");
else 
    console.log("mixed");