#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph {

    public:

        unordered_map<int , list<int> > adj;
        bool direction;

        graph(bool direction){
            this -> direction = direction;
            //direction = 0 -> undriected graph
            //direction = 1 -> directed graph
        }

        void addEdge(int u, int v){
            //direction = 0 -> undriected graph
            //direction = 1 -> directed graph

            adj[u].push_back(v);
            if(!direction){
                adj[v].push_back(u);
            }

        }

        void printAdjList(){
            for(auto i : adj){
                cout<<i.first<<" -> ";
                for(auto j : i.second){
                    cout<<j<<" , ";
                }
                cout<<endl;
            }
        }
};

int main(){

    graph g(0); //undirected graph

    int n;
    cout<<endl<<"Enter number of nodes: ";
    cin >> n;

    int m;
    cout<<endl<<"Enter number of edges: ";
    cin >> m;

    int i = 0;

    while(i<m){
        int u,v;
        cout<<"Enter edge:" <<endl;
        cin>>u>>v;
        g.addEdge(u,v);
        i++;
    }

    g.printAdjList();

    return 0;
}