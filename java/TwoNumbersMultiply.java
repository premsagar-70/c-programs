import java.util.Scanner;

public class TwoNumbersMultiply {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        System.out.println("Enter First number: ");
        int m=s.nextInt();
        System.out.println("Enter Second number: ");
        int n=s.nextInt();
        int o=m*n;
        System.out.println("Multiplication of two numbers is: "+o);
        s.close();
    }
}
