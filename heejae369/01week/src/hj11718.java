import java.util.Scanner;
import java.util.ArrayList;

public class hj11718 {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		ArrayList<String> list = new ArrayList<String>();
		String line;
		
		while(sc.hasNextLine()){
			line = sc.nextLine();
			if(line.length() > 100 || line.isEmpty() || line.startsWith(" ") || line.endsWith(" "))
				break;
			else
				list.add(line);
		}
		
		for(int i=0; i<list.size(); i++)
			System.out.println(list.get(i));
		
		sc.close();
	}

}