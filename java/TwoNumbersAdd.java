import java.util.Scanner;

public class TwoNumbersAdd {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int a = sc.nextInt();
        System.out.println("Enter Second number: ");
        int b = sc.nextInt();
        int c = a+b;
        System.out.println("Sum of two numbers is: "+c);
        sc.close();
    }        
}