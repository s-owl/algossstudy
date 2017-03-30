import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a=scan.nextInt();
        int b,c=0;
        int sum=0;
        for(int i=0 ; i<a ; i++){
            b=scan.nextInt();
            c=scan.nextInt();
            sum = b+c;
            System.out.println("Case #"+(i+1)+": "+ sum);
        }
    }
}