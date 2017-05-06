import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testCase = sc.nextInt();
		for (int i = 0; i < testCase; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println("Case #"+(i+1)+": "+(a+b));
		}
	}
}
