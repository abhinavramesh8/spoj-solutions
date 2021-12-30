import java.util.*;
import java.lang.*;
import java.math.BigInteger;
 
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t, n;
		t = sc.nextInt();
		for(int j=0; j<t; j++) {
			n = sc.nextInt();
			BigInteger f = BigInteger.ONE;
			for(int i=2; i<=n; i++) {
				f = f.multiply(BigInteger.valueOf(i));	
			}
			System.out.println(f);
		}
	}
}
