#include <stdio.h>
#include <stdlib.h>
int G[100][100];
int visited[100];
int q[100];
int n;
int f=0,r=-1;

void bfs(int v)
{
    int i;
    for(i=0;i<n;i++)
  if((G[v][i]==1) && (visited[i]==0))
     {
     q[++r]=i;
     }
if(f<=r)
  {
  visited[q[f]]=1;
  bfs(q[f++]);
  }
}
void BFS(int v)
{
int i;
for(i=0;i<n;i++)
   {
        q[i]=0;
        visited[i]=0;
    }
printf("\nBFS(%i)\n%i ",v,v);
f=0; r=-1;
bfs(v-1);
int reached[100]={0};

reached[v-1]=1;

for(i=0;i<f;i++)

if(reached[q[i]]==0)
{
        printf("%d ",q[i]+1);

    reached[q[i]]=1; }
printf("\n");
}

int main()
{
   int e, o,t,w, i,j,d;
    scanf("%i",&d);
scanf("%i %i",&n,&e); // On saisit n et e
for(i=0;i<n;i++)
    {    for(j=0;j<n;j++)
          G[i][j]=0;
    }
for(i=0; i<e ;i ++)
    {    scanf("%i %i %i",&o,&t,&w);
        G[o-1][t-1]=w;
        if(d==0) G[t-1][o-1]=w;
    }
    BFS(1);
    BFS(n);
    return 0;

    return 0;
}
