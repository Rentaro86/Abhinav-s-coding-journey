import java.util.Scanner;
public class Student {
    int rollno;
    String name;
    int marks;
    void getdata(Scanner sc) {
        
        System.out.println("Please Enter the name of the Student ");
        name = sc.nextLine();
        System.out.println("Please Enter the Roll no of the student ");
        rollno = sc.nextInt();
        System.out.println("Pleaase Enter the marks of the student ");
        marks = sc.nextInt();
        sc.nextLine();

    }
     void display()
    {
        System.out.println("Roll No: " + rollno);
        System.out.println("Name   : " + name);
        System.out.println("Marks : " + marks);
        System.out.println("-------------------");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student[] arr = new Student[2];
        for(int i = 0; i < arr.length;i++) {
            arr[i] = new Student();
            arr[i].getdata(sc);

        }
        for(int i = 0;i < arr.length;i++) {
            arr[i].display();
        }
        sc.close();
    }

    
}
