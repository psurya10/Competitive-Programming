// Logic: Using Array

import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        String x=s.nextLine();
        int n=x.length();
        int[] arr=new int[10];
        for(int i=0;i<n;i++){
            int a=Character.getNumericValue(x.charAt(i));
            arr[a]+=1;
        }
        for(int i=0;i<10;i++){
            System.out.println(i+" "+arr[i]);
        }
    }
}
