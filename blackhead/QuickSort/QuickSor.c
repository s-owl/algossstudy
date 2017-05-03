void quicksort(int left, int right){

int i = left, j = right;

int tmp;

int pivot = arr[(left+right)/2];    //피봇을 중심값으로 하고, 바로 값을 저장



while (i<=j){

while(arr[I] <pivot) i++;     //피봇과 값을 비교하면서 인덱스를 변경함

while(arr[j] > pivot) j--;



if(i<=j){                            //인덱스 이동이 멈추면 두 값을 변경

tmp = arr[i];

arr[i] = arr[j];

arr[j] = tmp;

i++; j--;                    //인덱스 이동을 멈추게 하기 위해서 한번더 i값을 증가시키고 j는 감소시킴

}

}



if(left<j) quicksort(left,j);            //남은 범위를 재귀 호출하여 소팅 반복함.

if(i<right) quicksort(right,i);

}

