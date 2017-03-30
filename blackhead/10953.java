import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int[] M=new int[N];
        sc.nextLine();
		for(int i=0 ; i<N ; i++){
			String S = sc.nextLine();
			String[] s = S.split(",");
			int sum=0;
			for(int j=0;j<s.length;j++){
				sum=sum+Integer.parseInt(s[j]);
			}
			M[i]=sum;
		}
		for(int i=0;i<M.length;i++){
			System.out.println(M[i]);
		}
	}
}