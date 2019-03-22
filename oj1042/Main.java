import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n;
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            n = scanner.nextInt();
            BigInteger num = new BigInteger("1");
            for (int k = 1; k <= n; k++) {
                num = num.multiply(BigInteger.valueOf(k));
            }
            System.out.println(num);
        }
    }
}
