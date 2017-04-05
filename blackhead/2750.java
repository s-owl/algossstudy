import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n=0;
        n=scan.nextInt();
        int arr[] = new int[n];
        
        for(int i=0 ; i<arr.length ; i++)
            arr[i]=scan.nextInt();
        
        for(int i=0 ; i<arr.length-1 ; i++){
            for(int j=1 ; j<arr.length ; j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
        for(int i=0 ; i<arr.length ; i++)
            System.out.println(arr[i]);
        
    }
}