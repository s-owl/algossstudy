import java.util.Scanner;

public class hj9613 {
	
	static int gcd(int a, int b){
		if(b == 0)
			return a;
		else
			return gcd(b, a%b);
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int input = sc.nextInt();
		for(int i=0; i<input; i++){
			int num = sc.nextInt();
		
			int nums[] = new int[num];
			for(int j=0; j<num; j++){
				nums[j] = sc.nextInt();
			}
			
			int sum=0;
			for(int x=0; x<num; x++){
				for(int y=x+1; y<num; y++)
				sum += gcd(nums[x], nums[y]);
			}
			
			System.out.println(sum);
		}
		
		sc.close();
	}
}
