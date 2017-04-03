////// 퀵 소트 Typescript //////

// 초기 배열
var array : Array<number> = [31, 8, 48, 73, 11, 3, 20, 29, 65, 15];
var array2 : Array<number> = [321, 82, 48, 3, 121, 52, 20, 29, 65, 15, 213, 4, 77, 96];

// 스왑
var swap = (array, num1, num2) => {
    var temp : number = array[num1];
    array[num1] = array[num2];
    array[num2] = temp;
}

// 편한 재귀 퀵소트 (배열을 2개 만들어서 공간이 낭비됨)
var QuickSort = (array) => {
    if( array.length == 0)
        return [];

    var middle : number = array[0];
    var len : number = array.length;
    var left : Array<number> = [];
    var right : Array<number> = [];

    for( var i = 1; i < len; ++i){
        if( array[i] < middle ){
            left.push(array[i]);
        } else {
            right.push(array[i]);
        }
    }
    return QuickSort(left).concat(middle, QuickSort(right));
}

// 파티션 (기준값 선정)
var partition = (array, start, end) => {
    var middle : number = array[end-1];
    var left : number = start - 1;
    for( var j = start; j <= end-1 ; ++j ){
        if(array[j] < middle){
            swap(array, ++left, j);
        }
    }
    swap(array, left + 1, end-1);
    return left+1;
}

// 기준값 선정 후 앞 뒤로 재귀 퀵소트 공간 낭비가 없음
var QuickSort2 = (array, start, end) => {
    if(start >= end) return;
    var middle : number = partition(array, start, end);
    QuickSort2(array, start, middle);
    QuickSort2(array, middle+1, end);
}

// 출력
console.log("< Array >");
console.log(array);
console.log();

console.log("< QuickSort >");
console.log(QuickSort(array));
console.log();

console.log("< Array2 >");
console.log(array2);
console.log();

console.log("< QuickSort2 >");
QuickSort2(array2, 0, array2.length);
console.log(array2);
