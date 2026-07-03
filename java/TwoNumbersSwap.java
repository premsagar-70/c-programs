import java.util.Scanner;

public class TwoNumbersSwap{
    public static void main(String args[]){

        Scanner s=new Scanner(System.in);

        System.out.println("Enter two numbers: ");

        int a=s.nextInt();
        int b=s.nextInt();

        System.out.println("Before Swapping: ");
        System.out.println("a: "+a+" b: "+b);

        a=a+b;
        b=a-b;
        a=a-b;

        System.out.println("After Swapping: ");
        System.out.println("a: "+a+" b: "+b);

        s.close();
    }
}