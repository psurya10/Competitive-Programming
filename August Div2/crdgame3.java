/*
  	https://www.codechef.com/AUG20B/problems/CRDGAME3
  
  	August long Challenge Division - 2

*/


import java.util.*;

public class crdgame3{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int chef=sc.nextInt();
			int rick=sc.nextInt();
			int c=0,r=0,ans=0;
			int i=0;
			
			i=chef/9;
			if(chef%9==0){
			    c=i;
			}
			else{
			    c=i+1;
			}
			
			i=rick/9;
			if(rick%9==0){
			    r=i;
			}
			else{
			    r=i+1;
			}
			
			if(c<r){
				System.out.println("0 "+c);
			}
			else{
				System.out.println("1 "+r);	
			}
		}
	}
}




