package week2;

import java.util.*;
public class aaa9012 {
	public static String vps(String pm){
		Stack st = new Stack();
		for(int i = 0; i < pm.length(); ++i){
			if(pm.charAt(i) == '(')
				st.push(1);
			else if(pm.charAt(i) == ')')
				if(st.isEmpty())
					return "NO";
				else
					st.pop();
		}
		if(st.isEmpty())
			return "YES";
		else
			return "NO";
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		
		for(int i = 0; i < tc; ++i){
			String stdin = sc.next();
			System.out.println(vps(stdin));
		}
	}
}
