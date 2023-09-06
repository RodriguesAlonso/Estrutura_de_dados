// Simple graph not directed weighted

#include <iostream>

using namespace std;

typedef string TypeItem;

class Graph
{ 
    private:
    int nullEdges;
    int maxVertices;
    int numVertices;
    TypeItem* vertex;
    int** adjacentMatrix;

    public:
    Graph(int maxVertices, int nullEdges);
    ~Graph();
    int getIndex(TypeItem item);
    bool isFull();
    void insertVertex(TypeItem item);
    void insertEdge(TypeItem end, TypeItem start, int weight);
    int getWeight(TypeItem end, TypeItem start);
    int getGrade(TypeItem item);
    void printMatrix();
    void printVertex();



};