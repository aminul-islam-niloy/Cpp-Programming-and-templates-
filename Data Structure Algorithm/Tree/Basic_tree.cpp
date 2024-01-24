#include<bits/stdc++.h>
using namespace std;

 void addEdge(int x, int y, vector<vector<int>> & adj)
 {
       adj[x].push_back(y);
       adj[y].push_back(x);

}

void printParents(int node, vector<vector<int> >& adj,
				int parent)
{
	// current node is Root, thus, has no parent
	if (parent == 0)
		cout << node << "->Root" << endl;
	else
		cout << node << "->" << parent << endl;
	// Using DFS
	for (auto cur : adj[node])
		if (cur != parent)
			printParents(cur, adj, node);
}


int main(){
   
   int n=7;
   int Root=1;

   //Adjacent list to store the tree

   vector<vector<int>> adj (n+1,vector<int>());

   //creating a tree
   addEdge(1,2,adj);
}