import java.util.Scanner;

public class hj11721 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();
		sc.close();
		
		if(line.length() == 0 || line.length() > 100)
			System.exit(0);
		
		int decArea = line.length() - (line.length() % 10);
		for(int i=0; i<decArea; i+=10)
			System.out.println(line.substring(i, i+10));	
		System.out.println(line.substring(decArea, line.length()));
	}
}