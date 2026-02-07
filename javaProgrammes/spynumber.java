import java.util.Scanner;

public class spynumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please Enter a number ");
        int num = sc.nextInt();
        int temp = num;
        int sum = 0;
        int product = 1;
        while(temp > 0) {
            int digit = temp % 10;
            sum = sum + digit;
            product = product * digit;
            temp = temp / 10;
        }
        if (sum == product ) {
            System.out.println("The given number is Spy number ");

        }
        else {
            System.out.println("This number is not spy number ");
        }
      sc.close();


    }
    
}
