package week2;

import java.util.*;
public class a2609 {

	public static int GCD(int x, int y){
		if(x < y){
			int temp = x;
			x = y;
			y = temp;
		}
		
		int m = x % y;
		
		if(m == 0){
			int c = m;
			return y;
		}
		else{
			x = y;
			y = m;
			return GCD(x, y);
		}
	}
	
	public static int LCM(int x, int y, int gcd){
		return (x * y / gcd);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		int gcd = GCD(x, y);
		System.out.println(gcd);
		System.out.println(LCM(x, y, gcd));
	}
}
