import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String s = scan.next();
		String[] str = s.split("");
		for(int i = 0; i < s.length(); i++){
			if(i > 0 && i % 10 == 0)
				System.out.println("");
			System.out.print(str[i]);
		}
	}
}