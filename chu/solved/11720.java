import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int sum = 0;
		int temp = sc.nextInt();
		if(temp <= 100 && temp >= 1){
			String a = sc.next();
			String[] arr = a.split("");
			for(int i = 0; i < temp; i++){
				sum += Integer.parseInt(arr[i]);
			}
			System.out.println(sum);
		}
	}
}
