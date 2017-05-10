const fs = require("fs");

function main(){
    let people, max_room;
    let room = 0;
    let temp = {
        '1': [0, 0],
        '2': [0, 0],
        '3': [0, 0],
        '4': [0, 0],
        '5': [0, 0],
        '6': [0, 0],
    };
    let input = fs.readFileSync("./stdin/13300").toString().split('\n')
    .filter((elem, index)=>{
        if(index === 0){
            people = parseInt(elem.trim().split(' ')[0]);
            max_room = parseInt(elem.trim().split(' ')[1]);
        }
        return index;
    })
    .map((e) => e.trim().split(' ') );

    input.forEach((elem, index) => {
        console.log(elem);
        if(elem[0] === '0'){
            temp[ elem[1] ][0]++;
        }else{
            temp[ elem[1] ][1]++;
        }
    });
   
        console.log(temp);
    for( index in temp ){
        room += Math.round(temp[index][0] / 2);
        room += Math.round(temp[index][1] / 2);
    }
    console.log(room);
}

main();

// 런타임 에러 ㅠㅠ