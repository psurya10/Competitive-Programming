#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct paira{
	int connection;
	double time;
	paira(int c, double t){
		connection=c;
		time=t;
	}
};

int BFS(vector <vector<paira>> &connections,unordered_map<int, int> &visited, queue<paira> &q){
	int count=0;
	while(!q.empty()){
		paira x=q.front();
		q.pop();
		for(int j=0;j<connections[x.connection].size();j++){
			if(visited.count(connections[x.connection][j].connection)==0){
				if(x.time<(connections[x.connection][j].time)){
					visited[connections[x.connection][j].connection]++;
					q.push(connections[x.connection][j]);
					count++;
				}
			}
		}	
	}
	return count;
}

int main(){
	int t;
	cin>>t;
 
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i=1;i<n+1;i++){
			cin>>a[i];
		}
		vector <vector<paira>> connections(n+1);
		for(int i=1;i<n+1;i++){
			for(int j=1;j<n+1;j++){
				if(i!=j){
					if(i-j>0 && a[i]-a[j]<0){
						connections[i].push_back(paira(j, (double)(i-j)/(a[j]-a[i])));	
					}
					if(i-j<0 && a[i]-a[j]>0){
						connections[i].push_back(paira(j, (double)(j-i)/(a[i]-a[j])));	
					}
				}
			}
		}
		int min=INT_MAX;
		int max=INT_MIN;
		for(int i=1;i<n+1;i++){
			unordered_map<int,int> visited;
			queue<paira> q;
			int count=1;
			visited[i]++;
			for(int j=0;j<connections[i].size();j++){
					visited[connections[i][j].connection]++;
					q.push(connections[i][j]);
					count++;
			}
			count+=BFS(connections, visited, q);
			if(count>max)
				max=count;
			if(count<min)
				min=count;
		}
		cout<<min<<" "<<max<<endl;
	}
}




