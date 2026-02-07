import java.util.Scanner;

public class FloydTraingle {
    public static void main(String[] args) {
        int rows;
        int number = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please Enter the number of rows you want in the Traingle ");
        rows = sc.nextInt();
        for(int i = 1;i <= rows;i++) {
            for(int j = 1;j<=i;j++) {
                System.out.print(number + " ");
                number++;
            }
            System.out.println();
        }
     sc.close();
    }
}