/*
Pattern 6:  Pyramid II.

	*
   * *
  * * *
 * * * *
* * * * *	
		
*/

import java.util.*;

public class pattern6{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);

		System.out.println("How many rows do you want to print? ");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
			boolean k=true;
			for(int j=1;j<=2*n-1;j++){
				if( j>=n+1-i && j<=n+i-1 && k ){
					System.out.print("*");
					k=false;
				}
				else{
					System.out.print(" ");
					k=true;
				}
			}
			System.out.println();
		}

	}
}













