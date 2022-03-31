//Graph in C++
//Edited By; Het Shah


#include<iostream>
#include<vector>
// #include<graph>
using namespace std;

struct Edge
    {
        int src,dest,weight;

    };
typedef pair<int,int> Pair;

class Graph
    {
        public:

        vector<vector<Pair>> adjList;
        Graph(vector<Edge>* edges,int n)
            {
                struct Edge* p;
                p=(struct Edge*)edges;
                adjList.resize(n);
               // Edge *obj;
                
                for(int i=0;i<n;i++)
                    {
                       // p=edges;
                        int src= p->src;
                        int dest=p->dest;
                        int weight=p->weight;

                        adjList[src].push_back(make_pair(dest,weight));
                        p++;
                    }
            }
    };

void printGraph(Graph *graph, int n)
    {
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        cout << "(" << i << "," << v.first << "," << v.second << ")";
                    }
                    cout << endl;
            }
    }

    int main()
        {
            vector<Edge> edges={
                    {0,1,6},{1,2,7},{2,0,5},{2,1,4},{3,2,10},{5,4,1},{4,5,3}};
                

            
            int n=6;
                Graph graph(edges,n);

                printGraph(graph,n);

                return 0;
        }