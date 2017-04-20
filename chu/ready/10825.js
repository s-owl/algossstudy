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
    var left = start - 1;
    var name = arr[end-1][0];
    var kor = parseInt(arr[end-1][1]);
    var eng = parseInt(arr[end-1][2]);
    var math = parseInt(arr[end-1][3]);

    for (var i = start; i <= end-1; ++i) {
        var v_name = arr[i][0];
        var v_kor = parseInt(arr[i][1]);
        var v_eng = parseInt(arr[i][2]);
        var v_math = parseInt(arr[i][3]);

        if(v_kor > kor){
			if(v_kor == v_eng){
				if(v_math > math)
					swap(arr, ++left, i);
			}
			swap(arr, ++left, i);
		} else if(v_kor == kor){
			if(v_eng < eng){
				swap(arr, ++left, i);
			}
			if(v_kor == kor && v_eng == eng && v_math == math){
				if(v_name < name)
					swap(arr, ++left, i);
			}
			if(v_kor == kor && v_eng == eng){
				if(v_math > math){
					swap(arr, ++left, i);
				}
			}
		}
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
        console.log(arr[i][0]);
    }
}
