import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String num = scan.next();
        int result = 0;
        for (int i = 0; i < n; i++) {
            result += (num.charAt(i) - '0');
        }
        System.out.println(result);
    }
}