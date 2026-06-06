/*#include<stdio.h>
void topologicalSort(int V,int adj[V][V]){
    int indegree[V];
    int queue[V];
    int front=0,rear=-1;
    for(int i=0;i<V;i++){
        indegree[i]=0;
    }
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(adj[i][j]==1){
                indegree[j]++;
            }
        }
    }
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            queue[++rear]=i;
        }
    }
    printf("\nTopological order:");
    while(front<=rear){
        int node=queue[front++];
        printf("%d ",node);
        for(int i=0;i<V;i++){
            if(adj[node][i]==1){
                indegree[i]--;
                if(indegree[i]==0){
                    queue[++rear]=i;
                }
            }
        }
    }
}
int main(){
    int V;
    printf("\nEnter the number of vertices:");
    scanf("%d",&V);
    int adj[V][V];
    printf("\nEnter the adjacency matrix:");
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            scanf("%d",&adj[i][j]);
        }
    }
    topologicalSort(V,adj);
    return 0;
}
*/
