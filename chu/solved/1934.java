package week2;

import java.util.*;
public class aa1934 {
	public static int GCD(int x, int y){
		if(x < y){
			int temp = x;
			x = y;
			y = temp;
		}
		
		int m = x % y;
		if(m == 0){
			return y;
		}else{
			x = y;
			y = m;
			return GCD(x, y);
		}
	}
	public static int LCM(int x, int y, int gcd){
		return x*y/gcd;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int tc = sc.nextInt();
		for(int i = 0; i < tc; ++i){
			int x = sc.nextInt();
			int y = sc.nextInt();
			int gcd = GCD(x, y);
			int lcm = LCM(x, y, gcd);
			System.out.println(lcm);
		}
	}
}
