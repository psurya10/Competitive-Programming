import java.util.*;

class Codechef {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        int[] a=new int[t];
        for(int i=0;i<t;i++){
           a[i]=scan.nextInt();
        }
        Arrays.sort(a);
        for(int i=0;i<t;i++){
           System.out.println(a[i]);
        }
    }
}
