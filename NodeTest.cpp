#include "NodeList.h"

void testgetset(){
    Node n1;
    cout <<"n1 id was "<< n1.getid() << endl;
    cout <<"n1 weight was "<< n1.getweight() << endl;
    n1.setid(2);
    n1.setweight(2.5);
    cout <<"n1 id has been set to "<< n1.getid() << endl;
    cout <<"n1 weight has been set to "<< n1.getweight() << endl;
}
void testclone(){
    Node n2(3,3.5);
    cout << "clone of n2 has id = "<< n2.clone().getid() << endl;
    cout << "clone of n2 has weight = "<< n2.clone().getweight() << endl;
}
int main(){
    //testgetset();
    //testclone();
    return 0;
}

