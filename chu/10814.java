package algossstudy;

import java.util.*;
public class a10814 {
	public static void swap(String arr[][], int a, int b){
		String[] temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	static int findMin(String[][] a, int start){
		int j = 0;
		Integer min = new Integer(a[0][0]);
		System.out.println("min:"+min);
		for(int i = start; i < a.length; ++i){
			Integer val = new Integer(a[i][0]);
			if(min > val){
				min = val;
				j = i;
			}
		}
		return j;
	}

	static void selectionSort(String[][] a){
		for(int i = 0; i < a.length; ++i){
			int minIndex = findMin(a, i);
			System.out.println("\nminindex : "+minIndex);
			swap(a, i, minIndex);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	
		int size = sc.nextInt();

		String[][] arr = new String[size][2];
		
		for(int i = 0; i < size; ++i){
			arr[i][0] = sc.next()+" ";
			arr[i][1] = sc.next()+" ";
		}
		
		selectionSort(arr);
		
		for(int i = 0; i < size; ++i){
			System.out.println(Arrays.toString(arr[i]));
		}
	}
}