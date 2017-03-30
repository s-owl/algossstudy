import java.util.*;
//hasNext = 옆의 인자가 있는지 유무를 알려 준다.
public class Main{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int a,b = 0;
        while(scan.hasNextInt()){
            a = scan.nextInt();
            b = scan.nextInt();
            System.out.println(a+b);
        }
    }
}