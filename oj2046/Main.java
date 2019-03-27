import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		ArrayList facts = new ArrayList<BigInteger>();
		facts.add(BigInteger.valueOf(1));
		BigInteger fact = new BigInteger("1");
		for (int i = 1; i <= 50; i++) {
			fact = fact.multiply(BigInteger.valueOf(i));
			facts.add(fact);
		}

		int n;
		Scanner scanner = new Scanner(System.in);
		while (scanner.hasNext()) {
			n = scanner.nextInt();
			BigInteger res = new BigInteger("0");
			for (int i = 0; i * 2 <= n; i++) {
				BigInteger item = new BigInteger("1");
				item = item.multiply((BigInteger) facts.toArray()[n - i]);
				item = item.divide((BigInteger) facts.toArray()[i]);
				item = item.divide((BigInteger) facts.toArray()[n - 2 * i]);
				res = res.add(item);
//				System.out.println("item = " + item);
			}
			System.out.println(res);
		}
	}

}
