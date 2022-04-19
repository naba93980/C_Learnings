#include<stdio.h>
#include<stdlib.h>

#define MAX 100
#define infinity 9999
#define NIL -1
#define initial 1
#define waiting 2
#define visited 3

int n;
int adj[MAX][MAX];
int state[MAX];
int label[MAX];
int distance[MAX];
int predecessor[MAX];
void create_graph();
void BF_Traversal();
void BFS(int v,int component_num);

int queue[MAX], front = -1,rear = -1;
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();

int main()
{
int u,v,i,count,path[MAX];
create_graph();
BF_Traversal();
while(1)
{
	printf("enter destination vertex:\n");
	scanf("%d",&v);

	if(v<-1 || v>n-1){
		printf("Destination vertex doesnot exist\n");
		continue;
	}
	if(v==-1)
	{
		break;
	}
	count=0;
	while(v!= NIL)
	{
		count++;
		path[count]=v;
		u=predecessor[v];
		v=u;
	}
	printf("shortest path is:\t");
	for(i=count;i>1;i--)
	{
		printf("%d->",path[i]);
	}
	printf("%d",path[i]);
	printf("\n");

}

}

void BF_Traversal()
{
int v,components=0;
for(v=0; v<n; v++)
{
	state[v] = initial;
	predecessor[v]=NIL;
	distance[v]=infinity;
}
components++;
printf("Enter Start Vertex for BFS: \n");
scanf("%d", &v);
BFS(v,components);
for (v=0;v<n;v++)
{
	if(state[v]==initial)
	{
		components++;
		BFS(v,components);
	}
}
printf("Number of connected components is: %d\n",components);
if(components==1)
printf("connected graph\n");
else
printf("not a connected graph\n");
printf("\n");
}

void BFS(int v,int component_num)
{
int i;
insert_queue(v);
state[v] = waiting;
while(!isEmpty_queue())
{
v = delete_queue( );
printf("vertex %d visited\n ",v);
state[v] = visited;
label[v]= component_num;
printf("vertex %d componet= %d\n",v,label[v]);
for(i=0; i<n; i++)
{
if(adj[v][i] == 1 && state[i] == initial)
{
insert_queue(i);
state[i] = waiting;
predecessor[i]=v;
distance[i]=distance[v]+1;
}
}
}
printf("\n");
}

void insert_queue(int vertex)
{
if(rear == MAX-1)
printf("Queue Overflow\n");
else
{
if(front == -1)
front = 0;
rear = rear+1;
queue[rear] = vertex ;
}
}

int isEmpty_queue()
{
if(front == -1 || front > rear)
return 1;
else
return 0;
}

int delete_queue()
{
int delete_item;
if(front == -1 || front > rear)
{
printf("Queue Underflow\n");
exit(1);
}
delete_item = queue[front];
front = front+1;
return delete_item;
}

void create_graph()
{
int count,max_edge,origin,destin;

printf("Enter total number of vertices :\n ");
scanf("%d",&n);
max_edge = n*(n-1);

for(count=1; count<=max_edge; count++)
{
printf("Enter edge %d(origin,destination)( -1,-1 to quit ) : ",count);
scanf("%d,%d",&origin,&destin);

if((origin == -1) && (destin == -1))
break;

if(origin>=n || destin>=n || origin<0 || destin<0)
{
printf("Invalid edge!\n");
count--;
}
else
{
adj[origin][destin] = 1;
}
}
}
