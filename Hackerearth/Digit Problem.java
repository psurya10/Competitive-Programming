import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc=new Scanner(System.in);
        String x=sc.next();
        int n=x.length();
        int k=sc.nextInt();
        for(int i=0;i<n;i++){
            if(k==0){
                System.out.println(x);
                break;
            }
            if(x.charAt(i)!='9'){
                x=x.substring(0,i) + '9' + x.substring(i+1);
                k--;
            }
        }
    }
}


