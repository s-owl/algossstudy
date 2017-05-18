import java.util.Scanner;

public class hj10953 {
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine(); //nextInt()를 사용한 다음 바로 nextLine()을 이용하기 위해 가상적으로 처리해주는 영역(이해못함)
		
		for(int i=0; i<n; i++){
			String cmd = sc.nextLine();
			String[] str = cmd.split(",");
			System.out.println(Integer.parseInt(str[0]) + Integer.parseInt(str[1]));
		}
		
		sc.close();
		
	}
}