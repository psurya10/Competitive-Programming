/*
Pattern 7:  Bridge .

ABCDCBA
ABC CBA
AB   BA
A     A


*/

import java.util.*;

public class pattern9{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);

		System.out.println("How many rows do you want to print? ");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
			char k='A';
			for(int j=1;j<=2*n-1;j++){
				if( j<=n+1-i || j>=n+i-1 ){
					System.out.print(k);
					k=(j<n)?++k:--k;
				}
				else{
					System.out.print(" ");
				}
			}
			System.out.println();
		}

	}
}













