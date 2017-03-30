import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b,c,sum = 0;
        
        for(int i=0 ; i<a ; i++){
            b = sc.nextInt();
            c = sc.nextInt();
            sum = b+c;
            System.out.println("Case #"+(i+1)+": "+ b + " + " + c + " = " + sum);
        }
    }
}