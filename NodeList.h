#include <iostream>
using namespace std;

class Node{
private:
    int id;
    double weight;
public:
    Node();
    Node(int, double);
    int getid();
    double getweight();
    void setid(int);
    void setweight(double);
    Node clone();
};
