public class printnumber {
    static void print(int n) {
        if (n < 0) {
            return;
        }
        else {
            System.out.println(n);
        print(n -1);
        }
    }

    static public void main(String[] args) {
        print(10);
    }
    
}
