#include <iostream>
#include "graph.h"

using namespace std;

    Graph::Graph(int maxVertices, int nullEdges){
        
        this->numVertices = 0;
        this->maxVertices = maxVertices;
        this->nullEdges = nullEdges;

        vertex = new TypeItem[maxVertices];

        adjacentMatrix = new int*[maxVertices];
        for (int i = 0; i < maxVertices; i++){
            adjacentMatrix[i] = new int[maxVertices];
        }
        for (int i = 0; i < maxVertices; i++){
            for (int j = 0; j < maxVertices; j++)
            {
                adjacentMatrix[i][j] = nullEdges;
            }
        }
        


    }
    Graph::~Graph(){
        delete [] vertex;
        for (int i = 0; i < maxVertices; i++){
            delete [] adjacentMatrix[i];
        }
        delete [] adjacentMatrix;
    }
    int Graph::getIndex(TypeItem item){
        int index = 0;
        while (item != vertex[index] && index < maxVertices)
        {
            index++;
        }
        if (index >= maxVertices)
        {
            throw "Vertex was not found.";
        }else{
        return index;
        }
    }
    bool Graph::isFull(){
        return (numVertices == maxVertices);
    }
    void Graph::insertVertex(TypeItem item){
        if (!isFull())
        {
            vertex[numVertices] = item;
            numVertices++;
        }
        throw "Vertex is full.";
    }
    void Graph::insertEdge(TypeItem end, TypeItem start, int weight){
        int row  = getIndex(end);
        int column  = getIndex(start);

        adjacentMatrix[row][column] = weight;
        adjacentMatrix[column][row] = weight;

    }
    int Graph::getWeight(TypeItem end, TypeItem start){
        int row  = getIndex(end);
        int column  = getIndex(start);
        return adjacentMatrix[row][column];
    }
    int Graph::getGrade(TypeItem item){
        int row = getIndex(item);
        int grade = 0;
        for (int i = 0; i < maxVertices; i++){
            if (adjacentMatrix[row][i] != nullEdges)
            {
                grade++;
            }
        return grade;
        }
    }
    void Graph::printMatrix(){
        for (int i = 0; i < maxVertices; i++)
        {
            for (int j = 0; j < maxVertices; j++)
            {
                cout<< adjacentMatrix[i][j] << " ";
            }
            cout << endl;
        }
        
    }
    void Graph::printVertex(){
        cout<< "vertices:\n";
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << ": " << vertex[i] << endl;
        }
        

    }