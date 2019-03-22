import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int n = scanner.nextInt();
            if (n == 0)
                break;
            for (int i = 0; i < n; ++i) {
                long a = scanner.nextLong();
                long b = scanner.nextLong();
                if (a % b == 0) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }

}
