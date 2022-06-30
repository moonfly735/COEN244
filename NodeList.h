#ifndef NodeList_h
#define NodeList_h


#endif /* NodeList_h */
#include "Node.h"
#include <iostream>
using namespace std;

class NodeList{
private:
    static const size_t LIST_SIZE = 500;
    Node *items;
    size_t numItems;
public:
    NodeList();
    NodeList(const NodeList&);
    void NodePrint();
    void NodeCheck();
    virtual ~NodeList();
};
