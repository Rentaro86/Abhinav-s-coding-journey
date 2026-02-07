import java.util.Scanner;
public class Find_Factorial {
    static long nonrecursive(int n)
    {
        long fact = 1;
        for(int i = 1;i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
    static long recursive(int n) {
        if(n == 0 || n == 1) 
            return 1;
        
        else 
            return n * recursive(n -1);
        
    }


    static public void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         System.out.println("Please Enter a number you want to find factorial for");
         int n = sc.nextInt();
         System.out.println("Value of opeation using a static method non recursive version " + nonrecursive(n));
         System.out.println("Value of operation using a static method recursive version " + recursive(n));
         sc.close();
    }
}
