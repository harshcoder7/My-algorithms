#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>

class graph{

    public:
      unordered_map<int,list<int>>adj;
      void addEdge(int u,int v,bool direction)
      {
        //direction=0->undirected
        //direction=1->directed

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);

        }
      }
      void printadjlist()
      {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j: i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
      }
};
      int main()
      {
        int n;
        cout<<"enter the number of nodes"<<endl;
        cin>>n;
        int m;
        cout<<"enter the number id edges"<<endl;
        cin>>m;
        
        graph g;

        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            //creating an undirected graph
            g.addEdge(u,v,0);

        }
        //printing the graph
        g.printadjlist();


      }

      /*

      //generic banae k liye taki hamko int define na krna pade aur graph ka
      //type asani sai assign hojaye
#include<iostream>
using namespace std;
#include<unordered_map>
#include<list>
<template<typename t>>
class graph{

    public:
      unordered_map<t,list<t>>adj;
      void addEdge(int u,int v,bool direction)
      {
        //direction=0->undirected
        //direction=1->directed

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);

        }
      }
      void printadjlist()
      {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j: i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
      }
};
      int main()
      {
        int n;
        cout<<"enter the number of nodes"<<endl;
        cin>>n;
        int m;
        cout<<"enter the number id edges"<<endl;
        cin>>m;
        
        graph<int> g;

        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            //creating an undirected graph
            g.addEdge(u,v,0);

        }
        //printing the graph
        g.printadjlist();


      }

    */
   
