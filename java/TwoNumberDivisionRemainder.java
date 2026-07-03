import java.util.Scanner;

public class TwoNumberDivisionRemainder{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter two numbers");
        int a=s.nextInt();
        int b=s.nextInt();
        System.out.println("The Remainder of "+a+" and "+b+" is "+a%b);
        s.close();
    }
}