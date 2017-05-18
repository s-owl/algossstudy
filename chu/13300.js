function main(){
    var people, max_room;
    var room = 0;
    var temp = {
        '1': [0, 0],
        '2': [0, 0],
        '3': [0, 0],
        '4': [0, 0],
        '5': [0, 0],
        '6': [0, 0],
    };
    var input = require('fs').readFileSync("./stdin/13300").toString().split('\n')
    .filter(function(elem, index){
        if(index === 0){
            people = parseInt(elem.trim().split(' ')[0]);
            max_room = parseInt(elem.trim().split(' ')[1]);
        }
        return index;
    })
    .map(function(e) {
        return e.trim().split(' ') 
    });

    input.forEach(function(elem, index) {
        if(elem[0] === '0'){
            temp[ elem[1] ][0]++;
        }else{
            temp[ elem[1] ][1]++;
        }
    });
   
    for( index in temp ){
        room += Math.round(temp[index][0] / max_room);
        room += Math.round(temp[index][1] / max_room);
    }
    console.log(room);
}

main();

// 런타임 에러 ㅠㅠ