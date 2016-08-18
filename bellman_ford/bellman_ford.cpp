#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define INF INT_MAX  // Infinity
#define V_num 100    // Number of vertices

const int sz = 10001;  // Maximum possible number of vertices. Preallocating space for DataStructures accordingly
vector< pair<int, int> > a[sz];  // Adjacency list
int dis[sz];  // Stores shortest distance
bool vis[sz] = {0};  // Determines whether the node has been visited or not
int predecessor[sz];
int graph[V_num][V_num];

void bellmanFord(int source, int target){
    //Initialization of vertices
    int i = 0;
    for(i=0;i<sz;i++){
        dis[sz] = INF_MAX;
        predecessor[i] = NULL;
        vis[sz] = False;
    }
    dis[source] = 0;
    //loop for all vertices with all edges
    int j,k = 0,0;
    for(i=0;i<V_num;i++){
        for(j=0;j<V_num;j++){
            if(graph[j][i]){     // works since if(-1) is True, which is cheked by python3 lol

                if(dis[j] > dis[i] + graph[j][i]){
                    dis[j] = dis[i] + graph[j][i];
                    predecessor[j] = i;
                }
            }
        }
    }
    //check negative-weight cycles:
    for(i=0;i<V_num;i++){
        for(j=1;j<V_num;j++){
            if((dis[i] + graph[i][j]) < dis[j]){
                cout<<"Graph contains a negative-weight cycle"<<endl;

            }
        }
    }
}

int main(){

    int i,j = 0, 0;
    for(i;i<V_num;i++){
        for(j;j<V_num;j++){
            graph[i][j] = 1; //read a graph with edges of length 1
        }
    }
    int vertex1, vertex2 = 1,2;
    bellmanFord(vertex1, vertex2);
    cout<<"the shortest path between vertex 1 and vertex 2 is: "<<dis[vertex2]<<endl;

    return 0;
}
