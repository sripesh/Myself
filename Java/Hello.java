package Java;
import java.util.*;
class Hello {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int num1,num2,num3=0;
        System.out.println("Enter data : ");
        num1=scan.nextInt();
        num2=scan.nextInt();
        System.out.println("Enter operator : ");
        char symbol=scan.next().charAt(0);
        scan.close();
        switch(symbol)
        {
            case '+':
            {
                num3=num1+num2;
                break;
            }
            case '-':
            {
                num3=num1>num2?num1-num2:num2-num1;
                break;
            }
            case '*':
            {
                num3=num1*num2;
                break;
            }
            case '/':
            {
                num3=num1/num2;
                break;
            }
            case '%':
            {
                num3=num1%num2;
                break;
            }
        }
        System.out.println("Output : "+num3);
    }
}