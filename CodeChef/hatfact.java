/*
	CodeChef Large factorial problem.

	Procedure: Store the number in an array, each digit is stored a location if there is carry it is propagated
	then finally put in the farthest location.

*/
import java.util.*;
import java.lang.*;

public class hatfact{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			factorial(n);
			System.out.println();
		
		}
	}

	public static void factorial(int n){
		int[] op=new int[500];
		op[0]=1;
		int op_size=1;

		for(int x=2;x<=n;x++){
			op_size=mul(x, op, op_size);
		}

		for(int i=op_size-1;i>=0;i--){
			System.out.print(op[i]);
		}
	} 

	public static int mul(int x, int[] op, int op_size) {
		int carry=0;

		for(int i=0;i<op_size;i++){
			int prod=op[i]*x+carry;
			op[i]=prod%10;
			carry=prod/10;
		}		

		while(carry!=0){
			op[op_size]=carry%10;
			carry=carry/10;
			op_size++;
		}

		return op_size;
	}
}
