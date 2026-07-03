import java.util.Scanner;

public class TwoNumbersSubtract {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        System.out.println("Enter First number: ");
        int x = s.nextInt();
        System.out.println("Enter Second number: ");
        int y = s.nextInt();
        int z = x-y;
        System.out.println("Difference between two numbers is: "+z);
        s.close();        
    }
}
