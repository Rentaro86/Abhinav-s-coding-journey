
import java.util.Scanner;

class student {
    int roll;
    String name;
    
    student(String n,int r) {
        name = n;
        roll = r;
        
    }
   
}
 class Result extends student{
    int marks;
    Result(int m, String n, int r) {
        super(n,r);
        marks = m;
    }

     void display() {
        System.out.println("Name of the Student is " + name);
        System.out.println("Roll no of the student is " + roll);
        System.out.println("marks of the student is " + marks);
    }
      
}
public class marksheet{
    
    public static void main(String[] args) {
        String n;
    int r;
    int m;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please Enter your name");
        n = sc.nextLine();
        System.out.println("Please Enter your roll no");
        r = sc.nextInt();
        System.out.println("Please Enter your marks");
        m = sc.nextInt();
        
        Result obj = new Result(m,n,r);
        obj.display();
        sc.close();
    }
}