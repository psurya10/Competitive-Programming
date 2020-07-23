/*
Pattern 8:  Numbered Pyramid .

    1
   121
  12321
 1234321
123454321
		
*/

import java.util.*;

public class pattern8{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println("How many rows do you want to print? ");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
			int k=1;
			for(int j=1;j<=2*n-1;j++){
				if( j>=n+1-i && j<=n+i-1 ){
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













