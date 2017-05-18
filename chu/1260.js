(function (){
    function Node(data){
        this.data = data;
        this.next = null;
    }
    function LinkedList(){
        this._length = 0;
        this.head = null;
    }
    LinkedList.prototype.add = function(value){
        var node = new Node(value),
            currentNode = this.head;
        if(!currentNode){
            this.head = node;
            this._length++;

            return node;
        }
        while(currentNode.next){
            currentNode = currentNode.next;
        }
        
        currentNode.next = node;
        
        this._length++;

        return node;
    };

    // N = 개수, M = 간선, V = 탐색을 시작할 정점
    var N, M, V;
    var input = require('fs').readFileSync('./stdin/1260')
    .toString().split('\n').map(function(e, i){
        e = e.trim().split(' ');
        if(i === 0){
            N = e[0]; // 앞에꺼 저장
            M = e[1];
            V = e[2];
        }
        return e;
    });

    // 앞에꺼 삭제
    input.splice(0,1);

    var list = [];
    input.forEach(function(e, i){
        // 링크 생성 및 초기화
        if(list[e[0]] === undefined){
            list[e[0]] = new LinkedList();
            list[e[0]].add(e[0]);
            // 양방향 연결 생성
            if(list[e[1]] === undefined){
                list[e[1]] = new LinkedList();
                list[e[1]].add(e[1]);    
            }
        }
        // 양방향 연결 생성
        if(list[e[1]] === undefined){
            list[e[1]] = new LinkedList();
            list[e[1]].add(e[1]);    
        }
        // 리스트에 값 추가
        list[e[0]].add(e[1]);
        if( list[e[1]] !== undefined ) list[e[1]].add(e[0]);
    });

    // 리스트 쭉 탐색하는 함수
    function find_list(list, d){
        var show = [];
        var data = list[d].head.data;
        var current = list[d].head;
        show.push(data);
        while(current.next !== null){
            current = current.next;
            show.push(current.data);
        }
        return show;
    }

    // 리스트 출력
    console.log(find_list(list, 1));
    console.log(find_list(list, 2));
    console.log(find_list(list, 3));
    console.log(find_list(list, 4));
    console.log(find_list(list, 5));
    console.log(find_list(list, 6));
    console.log(find_list(list, 7));
    console.log(find_list(list, 8));

    var show = [];
    function DFS(list, val){
        var curr = list[val].head;
        var length = list[val]._length;
        show.push(curr.data);
        for(var i = 0; i < length; i++){
            if(show.indexOf(curr.data) !== -1){
                curr = curr.next;
            }else{
                DFS(list, curr.data);
                curr = curr.next;
            }
        }    
    }

    var show2 = [];
    function BFS(list, val){
        var curr = list[val].head;
        var length = list[val]._length;
        for(var i = 1; i <= length; i++){
            if(show2.indexOf(curr.data) !== -1){
                curr = curr.next;
            }else{
                show2.push(curr.data);
                curr = curr.next;
            }
        }
    }

    // 함수 실행
    DFS(list, V);
    for(var i = V; i < N; i++){
        BFS(list, i);
    }
    // DFS 출력
    show.forEach(function(e){
        process.stdout.write(e+" ");
    });
    console.log();
    // BFS 출력
    show2.forEach(function(e){
        process.stdout.write(e+" ");
    });
})();

