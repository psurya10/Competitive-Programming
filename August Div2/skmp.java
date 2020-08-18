/*
  	https://www.codechef.com/AUG20B/problems/SKMP
  
  	August long Challenge Division - 2

*/

import java.util.*;

public class skmp{
    
    public static String sortString(String inputString) { 
        char tempArray[] = inputString.toCharArray(); 
        Arrays.sort(tempArray); 
        return new String(tempArray); 
    }
    
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			String s=sc.next();
			String p=sc.next();
			char c1=' ';
			int[] a=new int[26];
			int[] b=new int[26];
			s=sortString(s);
			for(int i=0;i<s.length();i++){
			    a[s.charAt(i)-97]+=1;
			}
			for(int i=0;i<p.length();i++){
			    b[p.charAt(i)-97]+=1;
			}
			
			s="";
			for(int i=0;i<26;i++){
			    a[i]=a[i]-b[i];
			    for(int j=1;j<=a[i];j++){
			        char c=(char)(97+i);
			        s=s+c;
			    }
			}
			
			for(int i=0;i<s.length();i++){
			    c1=s.charAt(i);
			    if(c1>p.charAt(0)){
			        p=s.substring(0,i)+p+s.substring(i,s.length());
			        break;
			    }
			}
			System.out.println(p);
		}
	}
}


