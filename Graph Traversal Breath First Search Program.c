#include <stdio.h>

void bfs(int);

int a[20][20], q[20], visited[20], n, f=0, r=-1, i, j;

int main(){

    int v;

    printf("Graph Traversal Breadth First Search\n");

    printf("\nEnter the number of vertices: ");
    scanf(" %d", &n);

    for(i=1; i<=n; i++){
        q[i] = 0;
        visited[i] = 0;
    }

    printf("\nEnter the graph in matrix form:\n");
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            scanf(" %d", &a[i][j]);
        }
    }

    printf("\nEnter the starting vertex: ");
    scanf(" %d", &v);

    bfs(v);

    printf("\nThe nodes which are reachable are:\n\n");

    for(i=1; i<=n; i++){
        if(visited[i]){
            printf(" %d\t", i);
        }else{
            printf("\nBFS is not possible");
        }
    }

    printf("\n");


    return 0;

}

void bfs(int v){

    int i;

    for(i=1; i<=n; i++){
        if(a[v][i] && !visited[i]){
            q[++r] = i;
        }
        if(f<=r){
            visited[q[f]] = 1;
            bfs(q[f++]);
        }
    }

}
