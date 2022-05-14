package Java;

import java.util.Scanner;

public class uthrowdcatch {
    public static void main(String[] args) {
        Scanner o=new Scanner(System.in);
        try {
            int a=o.nextInt();
            int b=o.nextInt();
            if(b==0)
                throw new ArithmeticException("Division by zero");
            System.out.println(a/b);
        } 
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
        finally{
            o.close();
        }
    }
}
