package week2;

import java.util.*;
public class a9613 {

	public static int GCD(int x, int y){
		if(x < y){
			int temp = x;
			x = y;
			y = temp;
		}
		int m = x % y;
		if(m == 0)
			return y;
		else{
			x = y;
			y = m;
			return GCD(x, y);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int size = sc.nextInt();
		
		for(int i = 0; i < size; ++i){
			int leng = sc.nextInt();
			int sum = 0;
			int arr[] = new int[leng];
			
			for(int j = 0; j < leng; ++j){
				int val = sc.nextInt();
				arr[j] = val;
			}
			for(int k = 0; k < leng; ++k)
				for(int j = 0; j < leng; ++j){
					if(k < j)
						sum += GCD(arr[k], arr[j]);
				}
	
			System.out.println(sum);
		}	
	}
}
