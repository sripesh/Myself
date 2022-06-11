package Myself.Java;
import java.util.*;
/**
 * defaultthrowcatch
 */
public class dthrowucatch {

    public static void main(String[] args) {
        Scanner o=new Scanner(System.in);
        try {
            
            int a[]={1,2,3,4,5,6,8,9};
            int b=o.nextInt();
            System.out.println(a[b]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array out of bound");
        }
        finally{
            o.close();
        }
    }
}