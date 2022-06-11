package Myself.Java;
import java.util.*;
/**
 * defaultthrowcatch
 */
public class uthrowucatch {

    public static void main(String[] args) {
        Scanner o=new Scanner(System.in);
        try {
            
            int a[]={1,2,3,4,5,6,8,9};
            int b=o.nextInt();
            if(a.length-1>b)
                throw new ArrayIndexOutOfBoundsException("Array out of bound.");
            System.out.println(a[b]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
        finally{
            o.close();
        }
    }
}