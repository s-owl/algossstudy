package week2;

import java.util.*;
public class aa10828 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack st = new Stack();
		
		int tc = sc.nextInt();
		
		for(int i = 0; i <= tc; ++i){
			String stdin = sc.nextLine();
			if(stdin.length() > 0){
				int val = 0;
				String stack = stdin.split(" ")[0];
				if(stdin.length() > 5){
					val = Integer.parseInt(stdin.split(" ")[1]);
				}
					switch(stack){
				case "push":
					st.push(val);
					break;
				case "top":
					if(st.isEmpty())
						System.out.println(-1);
					else
						System.out.println(st.peek());
					break;
				case "size":
					System.out.println(st.size());
					break;
				case "empty":
					if(st.isEmpty())
						System.out.println(1);
					else
						System.out.println(0);
					break;
				case "pop":
					if(st.isEmpty())
						System.out.println(-1);
					else
						System.out.println(st.pop());
					break;
				}
			}	
		}
	}
}
