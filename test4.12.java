import java.util.*;
import java.math.BigInteger;
 
public class test1 {
 
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()){
		BigInteger a = cin.nextBigInteger();
		BigInteger ans=BigInteger.valueOf(1);
		BigInteger d=BigInteger.valueOf(1);
for(long i=0;i<100000000;i++)
{
    d=d.add(BigInteger.valueOf(1));
	ans=ans.multiply(d);
	int t = d.compareTo(a);
	System.out.println(ans) ;
    if(t==0)
    	break;
}
		System.out.println(ans) ;
		}
	}
}

//System.out.println("加法操作：" + a.add(b)) ;	// 加法操作
//System.out.println("减法操作：" + a.subtract(b)) ;	// 减法操作
//System.out.println("乘法操作：" + a.multiply(b)) ;	// 乘法操作
//System.out.println("除法操作：" + a.divide(b)) ;	// 除法操作
//System.out.println("最大数：" + a.max(b)) ;	 // 求出最大数
//System.out.println("最小数：" + a.min(b)) ;	 // 求出最小数
//BigInteger t = a.remainder(b) ;	// 求出余数的除法操作
