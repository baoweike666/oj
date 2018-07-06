import java.util.*;
import java.math.BigInteger;
 
public class test1 {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
		BigInteger m = cin.nextBigInteger();
		BigInteger n = cin.nextBigInteger();
		BigInteger a = cin.nextBigInteger();
		BigInteger ans1=BigInteger.valueOf(0);
		int[] r = new int[1000];
		int i=1;
while(true)
{
BigInteger r1 = a.remainder(m);
ans1=ans1.add(r1.multiply(BigInteger.valueOf(i)));
i=i*m.intValue();
a=a.divide(m);
int t=a.compareTo(BigInteger.valueOf(0));
    if(t==0)
    	break;
}
i=0;
while(true)
{
	r[i] = ans1.remainder(n).intValue();
	i++;
ans1=ans1.divide(n);
int t=ans1.compareTo(BigInteger.valueOf(0));
    if(t==0)
    	break;
}
for(int j=i-1;j>=0;j--)
		System.out.print(r[j]) ;
		}
	}
}
//BigInteger d=BigInteger.valueOf(1);
//System.out.println("加法操作：" + a.add(b)) ;	// 加法操作
//System.out.println("减法操作：" + a.subtract(b)) ;	// 减法操作
//System.out.println("乘法操作：" + a.multiply(b)) ;	// 乘法操作
//System.out.println("除法操作：" + a.divide(b)) ;	// 除法操作
//System.out.println("最大数：" + a.max(b)) ;	 // 求出最大数
//System.out.println("最小数：" + a.min(b)) ;	 // 求出最小数
//BigInteger t = a.remainder(b) ;	// 求出余数的除法操作
