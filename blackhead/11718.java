import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
		
		ArrayList<String> list = new ArrayList<String>();
		Scanner scan = new Scanner(System.in);
		
		for (int i = 0; i<100; i++) {
            while(scan.hasNextLine()){
                String A = scan.nextLine();
                if (A.length() > 100 || A.isEmpty() || A.startsWith(" ") || A.endsWith(" ")) {
                    break;
                } else {
                    list.add(A);
                }
                if(scan.hasNextLine()==false)
                    break;
            }	
		}
		
		for (int j = 0 ; j<list.size(); j++) {
			System.out.println(list.get(j));
		}
	}

}