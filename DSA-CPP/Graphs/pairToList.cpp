#include <iostream>
#include <list>
#include <vector>
#include<map>
using namespace std;

map<int, list<int>> prepareAdjList(vector<pair<int, int>>& adjacency){
    map<int, list<int>> adjList;
    for(pair adj : adjacency){
        adjList[adj.first].push_back(adj.second);
        adjList[adj.second].push_back(adj.first);
    }

    return adjList;
}

int main()
{
    vector<pair<int, int>> adjacency;
    adjacency.push_back({1, 2});
    adjacency.push_back({1, 3});
    adjacency.push_back({2, 4});
    adjacency.push_back({3, 5});
    adjacency.push_back({5, 6});
    adjacency.push_back({5, 7});
    adjacency.push_back({6, 8});

    cout<<endl;
    for(pair adj : adjacency){
        cout<<adj.first<<" <-> "<<adj.second<<endl;
    }
    cout<<endl<<endl;
    map<int, list<int>> adjList = prepareAdjList(adjacency);
    for (auto [node, neighbors] : adjList) {
        cout << node << " -> ";
        for (auto neighbor : neighbors) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
}