/*
	https://www.codechef.com/AUG20B/problems/LINCHESS

	August long Challenge Division - 2

*/

import java.util.*;

public class linchess{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int n=sc.nextInt();
			int k=sc.nextInt();
			int[] a=new int[n];
			for(int i=0;i<n;i++){
				a[i]=sc.nextInt();
			}
			int ans=Integer.MAX_VALUE,count=0,index=0;
			for(int i=0;i<n;i++){
				int x=a[i];
				count=0;
				while(a[i]<=k){
					a[i]+=x;
					count++;
					if(a[i]==k){
						if (ans>count){
						    index=x;
						    ans=count;
						}
						break;	
					}
				}
			}
			if(ans==Integer.MAX_VALUE){
				System.out.println("-1");
			}
			else{
				System.out.println(index);
			}
		}
	}
}
	







