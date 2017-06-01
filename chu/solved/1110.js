(function main(){
    var input = Number(require('fs').readFileSync('../stdin/1110'));
    var num = 0;
    Cicle(input);
    console.log(num);

    function Cicle(prop){
        var A = Math.floor(prop/10);
        var B = prop % 10;
        var C = A+B;
        if(C < 10){
            var D = B*10 + C;
        } else {
            C = C % 10;
            var D = (prop%10)*10 + C;
        }   
        if(num !== 0 && input === prop){
            return num;
        }else{
            num++;
            Cicle(D);
        }
    }
})();