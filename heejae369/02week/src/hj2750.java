import java.util.Scanner;

public class hj2750 {
	
	static void swap(int[] arr, int i, int j){
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	
	static int partition(int[] arr, int start, int end){
		int value = arr[end];
		int i = start-1;
		for(int j=start; j<=end-1; j++){
			if(arr[j] <= value)
				swap(arr, ++i, j);
		}
		swap(arr, i+1, end);
		return i+1;
	}
	
	static void quickSort(int[] arr, int start, int end){
		if(start>=end) return;
		int middle = partition(arr, start, end);
		quickSort(arr, start, middle-1);
		quickSort(arr, middle+1, end);
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		//sc.nextLine();
		
		int arr[] = new int[num];
		for(int i=0; i<num; i++)
			arr[i] = sc.nextInt();
		sc.close();
		
		quickSort(arr, 0, num-1);
		
		for(int i=0; i<num; i++)
			System.out.println(arr[i]);
	}
}