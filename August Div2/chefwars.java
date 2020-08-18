/*
	https://www.codechef.com/AUG20B/problems/CHEFWARS

	August long Challenge Division - 2

*/
import java.util.*;


public class CHEFWARS{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			int h=sc.nextInt();
			int p=sc.nextInt();

			while(p>0 && h>0){
				h=h-p;
				p=(int)Math.floor(p/2);
			}
			if(h>0){
				System.out.println("0");
			}
			else{
				System.out.println("1");	
			}
		}
	}
}








