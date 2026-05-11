#include<stdio.h>
#define MAX 20
int main()
{
    int graph[MAX][MAX];
    int indeg[MAX] = {0};
    int queue[MAX], topo[MAX];
    int front = 0, rear = -1;

    int n, i, j, v;
    int count = 0;


    printf("Enter number of vertices: ");
    scanf("%d", &n);


    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(graph[i][j] == 1)
            {
                indeg[j]++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(indeg[i] == 0)
        {
            queue[++rear] = i;
        }
    }

    while(front <= rear)
    {

        v = queue[front++];


        topo[count++] = v;


        for(j = 0; j < n; j++)
        {
            if(graph[v][j] == 1)
            {
                indeg[j]--;


                if(indeg[j] == 0)
                {
                    queue[++rear] = j;
                }
            }
        }
    }


    if(count == n)
    {
        printf("\nTopological Order:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", topo[i]);
        }
    }
    else
    {
        printf("\nGraph has cycle");
        printf("\nTopological ordering not possible");
    }

    return 0;
}
