import java.util.Scanner;

public class hj11650 {
	
	static void mergeSort(int[][] crd, int start, int end, int pos){
		if(start == end) return;
		int middle = (start+end) / 2;
		mergeSort(crd, start, middle, pos);
		mergeSort(crd, middle+1, end, pos);
		merge(crd, start, middle, end, pos);
	}
	
	static void merge(int[][] crd, int start, int middle, int end, int pos){
		int length = end-start+1;
		int tmp[] = new int[length];
		int i = 0;
		int index1 = start;
		int index2 = middle+1;
		
		while(index1 <= middle && index2 <= end){
			if(crd[index1][pos] < crd[index2][pos])
				tmp[i++] = crd[index1++][pos];
			else
				tmp[i++] = crd[index2++][pos];
		}
		
		while(index1 <= middle){
			tmp[i++] = crd[index1++][pos];
		}
		
		while(index2 <= end){
			tmp[i++] = crd[index2++][pos];
		}
		
		for(i=0; i<tmp.length; i++){
			crd[start+i][pos] = tmp[i];
		}
	}
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		
		int crd[][] = new int[num][2]; //좌표(coordinates)
		for(int i=0; i<num; i++){
			crd[i][0] = sc.nextInt();
			crd[i][1] = sc.nextInt();
		}
		sc.close();
		
		mergeSort(crd, 0, crd.length-1, 0); //x쌍 기준 정렬
		mergeSort(crd, 0, crd.length-1, 1); //y쌍 기준 정렬
		
		for(int i=0; i<crd.length; i++){
			System.out.println(crd[i][0] + " " + crd[i][1]);
		}
	}
}
