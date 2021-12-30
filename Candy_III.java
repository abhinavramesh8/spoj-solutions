import java.util.*;
import java.lang.*;
import java.math.BigInteger;
 
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt(), n;
		BigInteger sum;
		for(int i=0; i<t; i++) {
			sum = BigInteger.ZERO;
			sc.nextLine();
			n = sc.nextInt();
			for(int j=0; j<n; j++) sum = sum.add(sc.nextBigInteger());
			if(sum.mod(BigInteger.valueOf(n)) == BigInteger.ZERO) System.out.println("YES");
			else System.out.println("NO");
		}
	}
}
