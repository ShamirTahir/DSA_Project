#include "list.h"
node::node(string n,int c,string dcity,string arcity,string t){
        name = n;
        cnic = c;
        depcity = dcity;
        arrcity = arcity;
        time = t;
        seatid=nullptr;
    }
    string node::getname(){
        return name;
    }
    void node::setname(string n){
        name = n;
    }
    string node::getseatid(){
        return seatid;
    }
    void node::setseatid(string id){
        seatid = id;
    }
    string node::getdepcity(){
        return depcity;
    }
    void node::setdepcity(string dcity){
        depcity = dcity;
    }
    string node::getarrcity(){
        return arrcity;
    }
    void node::setarrcity(string arcity){
        arrcity = arcity;
    }
    string node::gettime(){
        return time;
    }
    void node::settime(string t){
        time = t;
    }
    node* node::getnext(){
        return next;
    }
    void node::setnext(node* nt){
        next = nt;
    }

list::list(string ft)
{
    flightTitle = ft;
    head = nullptr;
    count = 0;
}
string list::getflightTitle(){
    return flightTitle;
}
void list::addatlast(string n,int c,string dcity,string arcity,string t)
{

    node *temp = new node( n, c, dcity, arcity, t);
    //temp->setseatid(generateseatid());
    node *tlist = head;
    if (head == nullptr)
    {
        head = temp;
        return;
    }
    while (tlist->getnext() != nullptr)
    {
        tlist = tlist->getnext();
    }
    tlist->setnext(temp);
    count++;
    
    return;
}
void list::display(){
    node *temp = head;
    while (temp != nullptr)
    {
        cout<<"\nName: "<<temp->getname();
        cout<<"City of Departure: "<<temp->getdepcity();
        cout<<"City of Arrival: "<<temp->getarrcity();
        cout<<"Time of Departure: "<<temp->gettime();
        cout<<"\n \n";
        temp = temp->getnext();
    }
    
}
string list::generateseatid(){
    return getflightTitle() + to_string(count);
}
node* list::gethead()
{
    return head;
}
void writedata(list *L)
{
    // ofstream theFile;
    // theFile.open("lahtoisl.txt");
    // node *tlist = l->gethead();
    // if(theFile.is_open()){
    //     cout<<"Your file is loaded\n";
    // }
    // while (tlist != nullptr)
    // {
    //     theFile << tlist->getseatid() << " " << tlist->getname() << " " << tlist->getarrcity() << " " << tlist->getdepcity() << " " << tlist->gettime() << endl;
    //     tlist = tlist->getnext();       
    // }
    // theFile.close();
    ofstream os("linkedList.txt",ios::binary);  
    L->display();  
    return ;  
}