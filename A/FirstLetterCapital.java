import java.util.*;

class FirstLetterCapital{
	static String capitalize(final String line) {
   		return Character.toUpperCase(line.charAt(0)) + line.substring(1);
	}
	public static void main(String [] args){
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		System.out.print(capitalize(str));
	}
}