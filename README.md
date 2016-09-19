Informal Spec :

Neural circuit will be represented by a directed graph.
Each node be either onn or off.

That will be dependent on the input signal and the current state of the node.


Questions can be asked :

1. Fix the graph and vary truth table at each node.
2. Fix the truth table and vary the graph. 


Not sure about :

1. Should parallel edges allowed ?
2. What edge represents ? A edge will represent a signal
   beeen sent from source to target. Should be 0 or 1 to make it discrete ?
3. Why the at each node input is a bitstring ? Why not just 0 or one comming from each connected directed node ?
  and then the decision will be made based(for onn or off) on those incoming bits ?
4. Using Arbitary boolean function is not a problem but using it has a danger the Model will be easily satisfiable if there is 
   not deep constraints on the rules. coz there are lots of Boolean functions there for a fixed n. 
5. What will be the output of the Model ?
6. What table at every node be intretepreted as ?  its not clear? 
