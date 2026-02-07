import java.util.Scanner;
import java.util.InputMismatchException;

public class Numbertest{
    int a,b,c;
    Numbertest(int a,int b,int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    int greatest() {
        int max =a;
        if (b > max) {
            max = b;
        }
        if(c > max) {
            max = c;
        }
        return max;
    }
    void Checknature() {
        if (a < 0 && b < 0 && c < 0) {
          System.out.println("All number are Negative ");
        }
        else if (a > 0 && b > 0 && c > 0) {
            System.out.println("All numbers are Positive ");
        }
        else {
            System.out.println("Numbers are mixed ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0,b = 0,c = 0;
        while(true) {
        try {
        System.out.println("Enter 3 numbers");
         a = sc.nextInt();
         b = sc.nextInt();
         c = sc.nextInt();
         break;
        }
        catch (InputMismatchException e) {
             System.out.println("Invalid input! Please enter only integers (negative, zero, or positive).");
             sc.nextLine();
              
        }
    }
        Numbertest obj = new Numbertest(a,b,c);
        obj.Checknature();
        if(a == b && b == c) {
            System.out.print("The number that you entered are the same hence the largest number is " + a);
        }
        else {
            System.out.print("The largest number is " + obj.greatest());
        }
         sc.close();

    }
}
