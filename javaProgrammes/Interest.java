public class Interest{
    public static void main(String[] args) {
        double P = Double.parseDouble(args[0]);
        double T = Double.parseDouble(args[1]);
        double R = Double.parseDouble(args[2]);
        double amount,SI,CI;
        SI = (P*R*T)/100;
        amount = P * Math.pow(1+R/100,T);
        CI = amount - P;
        System.out.println("Your simiple Interest is " + SI);
        System.out.println("Your Compound Interst is " + CI);
        







    }
}