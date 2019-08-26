import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
			
		Scanner sc = new Scanner(System.in);
		String line;
		while (sc.hasNext()) {
			line = sc.nextLine();
			String[] nums = line.split("5");
			List<Integer> list = new ArrayList();
			for (String num: nums) {
				if (num.isEmpty()) {
					continue;
				}
				list.add(Integer.valueOf(num));
			}
			Collections.sort(list);
			
			boolean firstIn = true;
			for (Integer i : list) {
				if (firstIn)
					firstIn = false;
				else
					System.out.print(" ");
				System.out.print(i);
			}
			System.out.println();
		}	
	}
}
