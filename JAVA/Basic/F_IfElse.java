
//Ashik_S

package Basic;

public class F_IfElse {
	public static void main(String[] args) {
		int a = 20;
		int b = 25;

		if (a < b) {
			System.out.println("a is getter then b");
		} else {
			System.out.println("a is less then b");
		}

		// Try another operation
		if (a < 10) {
			System.out.println("GO");
		} else if (a < 20) {
			System.out.println("TO");
		} else
			System.out.println("HELL");

		// Try another operation
		String result;
		result = (a > b) ? "HI" : "BYE";
		System.out.println(result);
	}

}
