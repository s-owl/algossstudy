import java.util.Scanner;
import java.util.ArrayList;

int findMin(list, start, end){
	int min = list.get(start);
	for(int i=start; i<end; i++)
		if(list.get(start) < min)
			min = list.get(start);
}

public class hj10989 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for(int i=0; i<n; i++)
			list.add(sc.nextInt());
		
		int index;
		for(int i=0; i<n; i++){
			value = findMin(list,i,n);
			list.swap(value);
		}
		
		sc.close();
	}
}
