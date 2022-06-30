#include "Node.h"

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
    if(n2.clone().getid() == n2.getid() && n2.clone().getweight() == n2.getweight())
        cout << " clone test pass\n ";
}
int main(){
    //testgetset();
    testclone();
    return 0;
}

