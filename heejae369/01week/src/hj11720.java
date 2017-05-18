import java.util.Scanner;

public class hj11720 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int sum=0;
		int cnt = Integer.parseInt(sc.nextLine());
		//sc.nextLine();
		String nums = sc.nextLine();
		
		sc.close();
		
		for(int i=0; i<cnt; i++){
			sum += nums.charAt(i)-'0';
		}
		
		System.out.println(sum);
	}
}