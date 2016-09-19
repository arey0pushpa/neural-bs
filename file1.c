/*
Project for the neuron B.s to be implrmented shortly .
We have only rough idea that we are working on it.
*/

#include <stdio.h>
#include <stdlib.h>
       
#define N 10   // Total Number of nodes present
#define len 20 // Fix total number of edges you want in a graph

_Bool nondet_bool();
unsigned int nondet_uint();

typedef unsigned __CPROVER_bitvector[N] bitvector; 
 
//Constrine the value between 0 and 1
unsigned int  nondet (){  
  unsigned int num = nondet_uint();
  __CPROVER_assume( num>= 0 && num  <= 1);
   return num;
};



int main (int argc, char** argv)

{    

    unsigned  int i, j, k , edgeCount = 0; 
    _Bool C0, C1, OnOff[N];   // Onoff represents whethere ith node is on or off. 
    

    bitvector nodes[N];

  
    // Neuron Circuit will be represented as a Graph. 
    // We might be Intersted in the structure of the graphs 
    unsigned int graph[N][N];
    
    //  Pre-calculate the total required length(#edges) in the graph.
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
	   if(i != j) {
	       __CPROVER_assume(graph[i][j] >= 0 && graph[i][j] <=2);
	       if (graph[i][j] == 1)
                    edgeCount += 1;	
               else if (graph[i][j] == 2) 
		    edgeCount += 2;
            }
             else
		__CPROVER_assume(graph[i][j] == 0); 

         } 
    }

    // Fix the Total number of edges in the graph
     __CPROVER_assume(edgeCount == len);

 // assert(0);
  __CPROVER_assert(!(C0 && C1) , "Neural Bullshit Holds");   
  return 0; 
}



