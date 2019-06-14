import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            boolean firstIn = true;

            int n = sc.nextInt();

            for (int i = 0; i < n; i++) {
                if (firstIn) {
                    firstIn = false;
                } else {
                    System.out.println();
                }
                BigInteger sum = new BigInteger("0");
                while (sc.hasNext()) {
                    BigInteger k = sc.nextBigInteger();
                    if (k.equals(BigInteger.ZERO)) {
                        break;
                    } else {
                        sum = sum.add(k);
                    }
                }
                System.out.println(sum);
            }

        }

    }

}