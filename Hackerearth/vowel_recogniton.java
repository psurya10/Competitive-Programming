//  Logic: the total occurence of each index in all the substrings  is given by the formula: (string_size - index) * (index + 1)


import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int t=s.nextInt();
        while(t-->0){
            String x = s.next();
            int n=x.length();
            x=x.toLowerCase();
            long ans=0; 
            for(int k=0;k<n;k++){
                if(x.charAt(k)=='a' || x.charAt(k)=='e' || x.charAt(k)=='i'||x.charAt(k)=='o'||x.charAt(k)=='u'){
                    ans+=(long)(n-k)*(k+1);
                }
            }
            System.out.println(ans);
        }   
    }
}



/*

Brute Force Approach

import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int t=s.nextInt();
        while(t-->0){
            String name = s.next(); 
            int ans=SubString(name, name.length());
            System.out.println(ans);
        }   
    }

    public static int SubString(String str, int n) 	{ 
	    int count=0;
        for (int i = 0; i < n; i++) 
		    for (int j = i+1; j <= n; j++){ 
				String x= str.substring(i, j);
                x=x.toLowerCase();
                for(int k=0;k<x.length();k++){
                    if(x.charAt(k)=='a' || x.charAt(k)=='e' || x.charAt(k)=='i'||x.charAt(k)=='o'||x.charAt(k)=='u'){
                        count+=1;
                    }
                }
            }
        return count;
    }

}

*/