import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testCase = sc.nextInt();
		for (int i = 0; i < testCase; i++) {
			String temp = sc.next();
			String[] arr = temp.split(",");
			int a = Integer.parseInt(arr[0]);
			int b = Integer.parseInt(arr[1]);
			System.out.println(a+b);
		}
	}
}
