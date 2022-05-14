package Java;
import java.util.*;
/**
 * defaultthrowcatch
 */
public class dthrowdcatch {

    public static void main(String[] args) {
        Scanner o=new Scanner(System.in);
        try {
            
            int a=o.nextInt();
            int b=o.nextInt();
            System.out.println(a/b);
        } catch (Exception e) {
            System.out.println("x");
        }
        finally{
            o.close();
        }
    }
}