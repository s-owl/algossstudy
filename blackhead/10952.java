import java.util.*;

public class Main{
    public static void main(String[] args){
        
        Scanner scan = new Scanner(System.in);
        int a,b=0;
        
        while(scan.hasNextInt()){
            a = scan.nextInt();
            b = scan.nextInt();
            if(a == 0 && b == 0 ){
                break;
            }else
                System.out.println(a+b);
        }
        System.exit(0);
    }
}