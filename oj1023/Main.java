import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int n;
		Scanner scanner = new Scanner(System.in);
		while (scanner.hasNext()) {
			n = scanner.nextInt();
			BigInteger res = new BigInteger("1");
			for (int i = 0; i < n; i++) {
				res = res.multiply(BigInteger.valueOf(2 * n - i));
				res = res.divide(BigInteger.valueOf(i + 1));
			}
			System.out.println(res.divide(BigInteger.valueOf(n + 1)));
		}

	}

}
