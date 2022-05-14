package Java;

import java.util.Scanner;

public class multiplecatch {
    public static void main(String[] args) {
        Scanner o=new Scanner(System.in);
        try {
            int a=Integer.parseInt(o.next());
            int b=Integer.parseInt(o.next());
            System.out.println(a/b);
        } 
        catch (NumberFormatException e)
        {
            System.out.println("Enter valid Input.");
        } 
        catch (ArithmeticException e)
        {
            System.out.println("Division by zero.");
        }
        finally{
            o.close();
        }
    }
    
}
