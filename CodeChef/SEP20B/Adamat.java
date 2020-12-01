/*
	CodeChef div-2 
	https://www.codechef.com/SEPT20B/problems/TREE2
*/



import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
			int n = sc.nextInt();
			int count=0;
			int[][] x=new int[n][n];

			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					x[i][j] = sc.nextInt();		
				}
			}

			for(int i=n-1;i>0;i--){
				int a = x[i][i-1] + 1;
				if(a != x[i][i]){
					count+=1;
					int k=i+1;
					for(int q=0;q<k;q++){
						for(int w=q;w<k;w++){
							int temp=x[q][w];
							x[q][w]=x[w][q];
							x[w][q]=temp;
						}		
					}
				}
			}	
			System.out.println(count);	
		}
	}
}







