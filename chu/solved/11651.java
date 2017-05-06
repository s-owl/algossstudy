package week2;

import java.util.*;
public class aa11651 {
	public static void swap(int arr[][], int a, int b){
		int[] temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	public static int partition(int arr[][], int start, int end) {
		int y_val = arr[end-1][1]; // 마지막 배열의 y좌표
	    int x_val = arr[end-1][0];
		int left = start - 1;
	    for (int j = start; j <= end-1; ++j){
	    	if(arr[j][1] < y_val)
	    		swap(arr, ++left, j);
	    	else if(arr[j][1] == y_val){
	    		if(arr[j][0] < x_val)
	    		swap(arr, ++left, j);
	    	}
	    }
	    swap(arr, left+1, end-1);
	    return left+1;
	};
	
	public static void QuickSort(int arr[][], int start, int end) {
	    if (start >= end)
	        return;
	    int middle = partition(arr, start, end);
	    QuickSort(arr, start, middle);
	    QuickSort(arr, middle + 1, end);
	};
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int size = sc.nextInt();
		int[][] arr = new int[size][2];
		
		for(int i = 0; i < size; ++i){
			arr[i][0] = sc.nextInt();
			arr[i][1] = sc.nextInt();
		}
		
		QuickSort(arr, 0, arr.length);
		
		for(int i = 0; i < size; ++i)
			System.out.println(arr[i][0]+" "+arr[i][1]);
	}
}
