import java.util.*;
import java.lang.*;
import java.math.BigInteger;
 
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		BigInteger total, more, klaud;
		for(int i=0; i<10; i++) {
			total = new BigInteger(sc.nextLine());
			more = new BigInteger(sc.nextLine());
			klaud = (total.add(more)).divide(BigInteger.valueOf(2));
			System.out.println(klaud);
			System.out.println(total.subtract(klaud));
		}
	}
}
