#include "NodeList.h"

Node::Node(){
    id = 0;
    weight = 0.0;
}

Node::Node(int i, double d){
    id = i;
    weight = d;
}

int Node::getid(){
    return id;
}

double Node::getweight(){
    return weight;
}

void Node::setid(int i){
    id = i;
}

void Node::setweight(double d){
    weight = d;
}

Node Node::clone(){
    Node n;
    n.setid(id);
    n.setweight(weight);
    return n;
}
