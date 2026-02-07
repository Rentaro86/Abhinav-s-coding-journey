import java.util.Scanner;

class SmartFormPrice {
    public static void main(String[] args) {
        System.out.println("Please Enter the MRP of the product");
        Scanner sc = new Scanner(System.in);
        double printedPrice = sc.nextDouble();
        double discountedPrice = printedPrice - (printedPrice * 0.10);
        double finalPrice = discountedPrice + (discountedPrice * 0.09);
        System.out.println(finalPrice);
        sc.close();
    }
}
