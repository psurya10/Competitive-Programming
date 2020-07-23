/*
Pattern 1:  Left Sided Triangle.

    *
   **
  ***
 ****
*****

*/

import java.util.*;

public class pattern2{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);

		System.out.println("How many rows do you want to print?");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j>=n+1-i){
					System.out.print("*");
				}
				else{
					System.out.print(" ");
				}
			}
			System.out.println();
		}

	}
}



















