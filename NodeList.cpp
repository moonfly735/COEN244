#include "NodeList.h"

NodeList::NodeList(){
    items = new Node[LIST_SIZE];
}

NodeList::NodeList(const NodeList& copy){
    items = copy.items;
}

