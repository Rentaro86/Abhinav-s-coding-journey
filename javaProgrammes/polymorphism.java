public class polymorphism{
    int a;
    polymorphism(int a) {
        this.a = a;
    }
    void display() {
        System.out.println("Value of a from base class " + a);
    }
    
}
class derived extends polymorphism{
    int b;
    derived(int a,int b) {
        super(a);
        this.b = b;
    }
    void display() {
        super.display();
        System.out.println("Value of a and b from Derived " + a +" " + b);
    }
}
class overitentest{
    public static void main(String[] args) {
        polymorphism ob1 = new polymorphism(5);
        ob1.display();
        derived ob2 = new derived(10,20);
        ob2.display();
        

    }
}  

