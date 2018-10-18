import java.math.BigInteger;

public class Main {
    public static BigInteger powb2(int n) {
        BigInteger bn = BigInteger.ONE;
        for (int i = 0; i < n; ++i) {
            bn = bn.mutiply(new BigInteger("2"));
        }
        return bn;
    }

    public static void main(String[] args) {
        int n;
        Scanner cin = new Scanner(System.in);
        n = cin.nextInt();
        while (cin.hasNext()) {
            a = cin.nextInt();
            b = cin.nextInt();
            BigInteger bn = powb2(a - b);
            System.out.println(bn);
        }
    }
}
