#include<stdio.h>

int main()
{
	int n, edg, i, j, origin, distin, count, graph_type,mount,even;
	  printf("Choice Section:\n");	
	  printf("\nEnter 1 for Undirected graph\nEnter 2 for Directed graph\n");
      printf("\nEnter your choice : ");
      scanf("%d",&graph_type);
      
      printf("\nEnter the number of vertices : ");
      scanf("%d",&n);
        
      printf("\nEnter the number of Edges : ");
      scanf("%d",&edg);
      
 	  
	int incidentMatrix[n][edg] ;
	//initialize the adj matrix to 0
	for(i=0; i<n; i++)
		for(j=0; j<edg; j++)
			incidentMatrix	[i][j] = 0 ;	
	
	printf("\nEnter the edges in the following format:(Where O stands for origin and D stands for destination vertex)\n");
	printf("O D\n");
	  for ( i = 0; i < edg; i++) 
	  {
        scanf("%d %d", &origin, &distin);
		
		if(graph_type == 1)
		{
		
			incidentMatrix[distin] [i] = 1;
			incidentMatrix[origin] [i] = 1;
		}
		else if(graph_type == 2)
		{
		
	        incidentMatrix[origin][i] = 1; // Vertex incident to edge (outgoing edge)
	        incidentMatrix[distin][i] = -1; // Vertex incident to edge (incoming edge)
	
        }
        
        else
        printf( "Please choose The Valid Graph type !!!");
    }
    
    // print Incident Matrix
    printf("\nIncident Matrix of the above graph is:\n");
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < edg; j++) 
		{
            printf("%d\t", incidentMatrix[i][j]);
        }
        printf("\n");
    }
	
	// calculation of even vertex
	printf("The Vertices with even Degree are:");
	for(i=0; i<n; i++)
	{
		count = 0;
		mount = 0;
		for(j=0; j<edg; j++)
			{
				if(incidentMatrix[i][j] == 1 ) //count degree of each node
					count++;
				else if ( incidentMatrix[i][j] == -1)
						mount++;
			}  
			
				if((count - mount) % 2 == 0)
				printf("\n%d ",i);
	}
		
}
