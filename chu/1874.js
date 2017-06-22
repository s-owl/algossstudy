var timer = "main";
console.time(timer);
    
function main(){
    var max = 0;
    var input = require('fs').readFileSync('./stdin/1874').toString().split('\n')
    .filter(function(e, i){
        if(i === 0) max = e;
        return i;
    })
    .map(function(e){
        e = e.trim();
        return parseInt(e);
    });
    
    var stack = [];
    for(var i = 1; i <= max; i++){
        stack.push(i);
    }

    // var maxVal = 0;
    // var secVal = 0;
    // var stack2 = [];
    // var stack3 = [];

    // input.forEach(function(e){
    //     if(maxVal < e) {
    //         // if(maxVal == 0){
    //         //     secVal = 0;
    //         // } else {
    //         //     secVal = e - maxVal;
    //         // }
    //         secVal = maxVal;
    //         maxVal = e;
    //     }
    //     if(maxVal <= e){
    //         for(var i = secVal+1; i <= maxVal; i++){
    //             stack2.push(i);
    //             // console.log("+");
    //             stack3.push("+");
    //         }
    //         // console.log("-");
    //         stack3.push("-");
    //         stack2.pop();  
    //     } else { 
    //         if( stack2[stack2.length-1] !== e){
    //             console.log("NO");
    //             process.exit();
    //         }
    //         // console.log("-");
    //         stack3.push("-");
    //         stack2.pop();
    //     }
    // });

    // stack3.forEach(function(e){
    //     console.log(e);
    // });

    var stack2 = [];
    var stack3 = [];
    input.forEach(function(e){
        // 없을 때
        if(stack2.indexOf(e) < 0){
            console.log("[stack] "+stack);
            var shift = stack.shift();
            if(shift === undefined){
                console.log("NO");
                process.exit();
            }
            console.log("shift "+shift+", element "+e);

            for(var i = shift; i <= e; i++){
                if(i === shift){
                    stack2.push(shift);
                } else {
                    stack2.push(stack.shift());
                }
                console.log(stack2);
                // console.log("+");
                stack3.push("+");
            }
            stack2.pop();
            stack3.push("-");
            // console.log("-");
        } else {
            // stack2에 값이 있을 때
            stack2.pop();
            console.log("[pop] "+stack2);
            // console.log("-");
            stack3.push("-");
        }   
    });

    stack3.forEach(function(e){
        console.log(e);
    });
};
main();
console.timeEnd(timer);