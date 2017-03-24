import java.util.Scanner;
public class a10950 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = 0;
		int b = 0;
		int repeat = scan.nextInt();
		if(repeat > 0)
			for(int i = 0; i < repeat; ++i){
				a = scan.nextInt();
				b = scan.nextInt();
				System.out.println(a+b);
			}
	}
}
