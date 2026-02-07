import java.util.Scanner;
public class StudentConstructor {
    String name;
    int roll;
    StudentConstructor(String name,int roll) {
        this.name = name;
        this.roll = roll;
    }
    void display()
    {
        System.out.println("Roll No: " + roll);
        System.out.println("Name   : " + name);
    }
    static public void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of student ");
        String name = sc.nextLine();
        System.out.println("Enter the roll no of Student ");
        int roll = sc.nextInt();
        StudentConstructor obj = new StudentConstructor(name,roll);
        obj.display();
        sc.close();
    } 
    
}
