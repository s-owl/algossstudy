import java.util.Scanner;

public class hj1934 {
	
	//greatest common divisor
	static int gcd(int a, int b){
		if(b == 0)
			return a;
		else
			return gcd(b, a%b);
	}

	//least common multiple
	static int lcm(int a, int b){
		return (a*b) / gcd(a, b);
	}

	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		for(int i=0; i<num; i++){
			int num1 = sc.nextInt();
			int num2 = sc.nextInt();
			
			System.out.println(lcm(num1, num2));
		}
		sc.close();
		
	}
}