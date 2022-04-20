package Java;
import java.util.Scanner;
public class Prime {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n=scan.nextInt();
        scan.close();
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0)
            {
                System.out.println("Number "+n+" is a composite number.");
                return;
            }
        }
        System.out.println("Number "+n+" is a prime number.");
        return;
    }
}
