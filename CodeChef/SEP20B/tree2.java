import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int n = sc.nextInt();
			HashSet<Integer> hs = new HashSet<Integer>();
			int x;
		    for(int i=0;i<n;i++){
		        x=sc.nextInt();
		        if(x!=0)
		            hs.add(x);   
		    }
			System.out.println(hs.size());
		}
	}
}