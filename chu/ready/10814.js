var readline = require('readline');
var r = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
var arr = [];
r.setPrompt('');
r.prompt();
r.on('line', function(line){
    if(!line){
        r.close();
    }
    line = line.split(" ");
    if(line.length == 1){
        r.prompt();
    }else{
        arr.push(line);
        r.prompt();
    }
});
r.on('close', function(){
    Qsort(arr, 0, arr.length);
    print(arr);
    process.exit();
});

var swap = function(arr, a, b){
    var temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

var partition = function(arr, start, end){
    var value = arr[end-1][0];
    var left = start - 1;
    for (var i = start; i <= end-1; ++i) {
        if(arr[i][0] < value)
            swap(arr, ++left, i);
    }
    swap(arr, left + 1, end-1);
    return left + 1;
}

var Qsort = function(arr, start, end){
    if(start >= end) return;
    var middle = partition(arr, start, end);
    Qsort(arr, start, middle);
    Qsort(arr, middle + 1, end);
}

var print = function(arr){
    for (var i = 0; i < arr.length; i++) {
        console.log(arr[i][0]+" "+arr[i][1]);
    }
}
