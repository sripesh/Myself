package Java;
import java.util.*;
class Pattern {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter Choice (1-7) :");
        int l=scan.nextInt();
        scan.close();
        switch(l)
        {
            case 1:
            {
                for(int i=0;i<5;i++)
                {   for(int j=0;j<5;j++)
                    {
                        System.out.print("* ");
                    }
                    System.out.print("\n");
                }
                break;
            }
            case 2:
            {
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<5;j++)
                    {
                        if(i==0||i==4||j==0||j==4)
                        System.out.print("* ");
                        else
                        System.out.print("  ");
                    }
                    System.out.print("\n");
                }
                break;
            }
            case 3:
            {
                for(int i=0;i<5;i++)
                {
                    for(int j=5-i;j>0;j--)
                    {
                        System.out.print("* ");
                    }
                    System.out.println();
                }
                break;
            }
            case 4:
            {
                for(int i=0;i<5;i++)
                {
                    for(int j=5-(i+1);j>0;--j)
                    System.out.print("  ");
                    for(int j=0;j<=i;j++)
                    System.out.print("* ");
                    System.out.println();
                }
                break;
            }
            case 5:
            {
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<=i;j++)
                    System.out.print("* ");
                    for(int j=0;j<2*(5-i-1);j++)
                    {
                        System.out.print("  ");
                    }
                    for(int j=0;j<=i;j++)
                    System.out.print("* ");
                    System.out.print("\n");
                }
                for(int i=4;i>=0;i--)
                {
                    for(int j=0;j<=i;j++)
                    System.out.print("* ");
                    for(int j=0;j<2*(5-i-1);j++)
                    {
                        System.out.print("  ");
                    }
                    for(int j=0;j<=i;j++)
                    System.out.print("* ");
                    System.out.print("\n");
                }
                break;
            }
            case 6:
            {
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<=i;j++)
                    {
                        System.out.print((i+j+1)%2+" ");
                    }
                    System.out.print("\n");
                }
                break;
            }
            case 7:
            {
                for(int i=1;i<4;i++)
                {
                    for(int j=1;j<28;j++)
                    {
                        if((i+j)%4==0||(i==2)&&j%4==0)
                        {
                            System.out.print("* ");
                        }
                        else
                        {
                            System.out.print("  ");
                        }
                    }
                    System.out.println();
                }
                break;
            }
            default:
            {
                System.out.println("Invalid Input.");
            }
        }

    }
}