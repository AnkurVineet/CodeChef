/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ankur;

/**
 *
 * @author DELL
 */
import java.util.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class CodeChef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int T;
		Scanner sc = new Scanner(System.in);
		T = sc.nextInt();
		while(T-- != 0){
		    String A = sc.next();
		    String B = sc.next();
		    String N = sc.next();
		    BigInteger ba = new BigInteger(A);
		    BigInteger bb = new BigInteger(B);
		    BigInteger bn = new BigInteger(N);
                    BigInteger mod = new BigInteger(1000000007+"");
                    BigInteger second = ba.subtract(bb);
                    if(second.longValue() != 0)
                    {
                        BigInteger first = ba.modPow(bn,second).add(bb.modPow(bn,second));
                        System.out.println(first.gcd(second));
                    }
                    else{
                        BigInteger first = ba.modPow(bn,mod).add(bb.modPow(bn,mod));
                        System.out.println(first+":"+second);
                        System.out.println(first.gcd(second).mod(mod));
                    }
		}
	}
}
