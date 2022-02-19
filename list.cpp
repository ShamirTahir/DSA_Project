#include "list.h"

node::node(string n,string dcity,string arcity,string t)
{
    name = n;
    depcity = dcity;
    arrcity = arcity;
    time = t;
    next = nullptr;
}
string node::getname(){
        return name;
    }
void node::setname(string n){
        name = n;
    }
int node::getseatid(){
        return seatid;
    }
void node::setseatid(int id){
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
list::list(string ft,string d,string a)
{
    flightTitle = ft;
    head = nullptr;
    count = 0;
    departureCity = d;
    arrivalCity = a;
}
string list::getflightTitle(){
    return flightTitle;
}
void list::addatlast(string n,string dcity,string arcity,string t)
{
    node *temp = new node(n, dcity, arcity, t);
    node *tlist = head;
    temp->setseatid(count);
    if (head == nullptr)
    {
        head = temp;
        count++;
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
void list::addatlast1(string n,string dcity,string arcity,string t,int seatid)
{
    node *temp = new node(n, dcity, arcity, t);
    node *tlist = head;
    temp->setseatid(seatid);
    
    if (head == nullptr)
    {
        head = temp;
        count++;
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
void node::display(){
    cout<<"\nSeat ID: "<<getseatid();
    cout<<"\nName: "<<getname();
    cout<<"\nCity of Departure: "<<getdepcity();
    cout<<"\nCity of Arrival: "<<getarrcity();
    cout<<"\nTime of Departure: "<<gettime();
    cout<<"\n \n";
}
node* list::gethead()
{
    return head;
}
string list::getdepartureCity(){
    return departureCity;
}
string list::getarrivalCity(){
    return arrivalCity;
}
void list::removenode(int key){
    node *temp = gethead();
    bf check;
    while (temp != nullptr)
    {
        if(temp->getnext()->getseatid() == key)
        {
         break;
        }
        temp = temp->getnext();
    }
    temp->setnext(temp->getnext()->getnext());
}
void loadlists(list& l1,list& l2,list& l3)
{
    ifstream theFile("LahoreToIslamabad");
    string name,depcity,arrcity,time;
    int seatid;
    if(theFile.is_open()){
        cout<<"LahoreToIslamabad file is loaded\n";
    }
    while (theFile >> seatid >> name >> arrcity >> depcity >> time)
    {
        l1.addatlast1(name,depcity,arrcity,time,seatid);
    }
    theFile.close();
    theFile.open("IslamabadToLahore");
    if(theFile.is_open()){
        cout<<"IslamabadToLahore file is loaded\n";
    }
    while (theFile >> seatid >> name >> arrcity >> depcity >> time)
    {
        l2.addatlast1(name,depcity,arrcity,time,seatid); 
    }
    theFile.close();  
    theFile.open("KarachiToLahore");
    if(theFile.is_open()){
        cout<<"KarachiToLahore file is loaded\n";
    }
    while (theFile >> seatid >> name >> arrcity >> depcity >> time)
    {
        l3.addatlast1(name,depcity,arrcity,time,seatid);
    }
    theFile.close();  
    return ;  
}
void writedata(list& l1,list& l2,list& l3)
{
    ofstream theFile("LahoreToIslamabad");
    node *tlist1 = l1.gethead();
    node *tlist2 = l2.gethead();
    node *tlist3 = l3.gethead();
    if(theFile.is_open()){
        cout<<"LahoreToIslamabad file is updated\n";
    }
    while (tlist1 != nullptr)
    {
        theFile << tlist1->getseatid() << " " << tlist1->getname() << " " << tlist1->getarrcity() << " " << tlist1->getdepcity() << " " << tlist1->gettime() << endl;
        tlist1 = tlist1->getnext();       
    }
    theFile.close();
    theFile.open("IslamabadToLahore");
    if(theFile.is_open()){
        cout<<"IslamabadToLahore file is updated\n";
    }
    while (tlist2 != nullptr)
    {
        theFile << tlist2->getseatid() << " " << tlist2->getname() << " " << tlist2->getarrcity() << " " << tlist2->getdepcity() << " " << tlist2->gettime() << endl;
        tlist2 = tlist2->getnext();       
    }
    theFile.close();  
    theFile.open("KarachiToLahore");
    if(theFile.is_open()){
        cout<<"KarachiToLahore file is updated\n";
    }
    while (tlist3 != nullptr)
    {
        theFile << tlist3->getseatid() << " " << tlist3->getname() << " " << tlist3->getarrcity() << " " << tlist3->getdepcity() << " " << tlist3->gettime() << endl;
        tlist3 = tlist3->getnext();       
    }
    theFile.close();  
    return ;  
}
void checkandadd(list& l1,list& l2,list& l3,string n,string dcity,string arcity,string t)
{
    if(l1.getdepartureCity()== dcity &&  l1.getarrivalCity()== arcity){
        l1.addatlast(n,dcity,arcity,t);
        cout<<"\nYour seat have been Booked!";
        return;
    }
    else if(l2.getdepartureCity()== dcity &&  l2.getarrivalCity()== arcity){
        l2.addatlast(n,dcity,arcity,t);
        cout<<"\nYour seat have been Booked!";
        return;
    }
    else if(l3.getdepartureCity()== dcity &&  l3.getarrivalCity()== arcity){
        l3.addatlast(n,dcity,arcity,t);
        cout<<"\nYour seat have been Booked!";
        return;
    }
    cout<<"\nYour added information is wrong\n";
    return;
}
bf::bf()
{
    size = 20;
    array = new int[size]; 
    for(int i=0;i<20;i++){
        array[i]=0;
    }
}
int bf:: hash(int n){
    return n*3 % size;
}
void bf::insert(node* n){
    int index = hash(n->getseatid());
    array[index]=1;
}
bool bf::filter(node* n){
    int index = hash(n->getseatid());
    if(array[index]==1){
        return 1;
    }
    return -1;
}
void bf::addlistofilter(list* l){
    node *temp = l->gethead();
    while (temp != nullptr)
    {
        insert(temp);
        temp = temp->getnext();
    }
}
void checkandconfirm(list& l1,list& l2,list& l3,string dcity,string arcity,int si)
{
    bf check1,check2,check3;
    if(l1.getdepartureCity()== dcity &&  l1.getarrivalCity()== arcity){
        check1.addlistofilter(&l1);
        node* temp = l1.gethead();
        while (temp != nullptr)
        {
            if (check1.filter(temp)==1 && temp->getseatid()==si)
            {
            cout<<"\nYour seat details are \n";
            temp->display();
            return;
            }
            temp = temp->getnext();
        }
    }
    else if(l2.getdepartureCity()== dcity &&  l2.getarrivalCity()== arcity){
    check2.addlistofilter(&l2);
    node* temp = l2.gethead();
    while (temp != nullptr)
    {
        if (check2.filter(temp)==1 && temp->getseatid()==si)
        {
            cout<<"\nYour seat details are \n";
           temp->display();
           return;
        }
        temp = temp->getnext();
    }
    }
    else if(l3.getdepartureCity()== dcity &&  l3.getarrivalCity()== arcity){
    check3.addlistofilter(&l3);
    node* temp = l3.gethead();
    while (temp != nullptr)
    {
        if (check3.filter(temp)==1 && temp->getseatid()==si)
        {
            cout<<"\nYour seat details are \n";
           temp->display();
           return;
        }
        temp = temp->getnext();
    }
    }
    cout<<"\nYour added information is wrong\n";
    return;
}
void checkandcancel(list& l1,list& l2,list& l3,string dcity,string arcity,int si){
     
    if(l1.getdepartureCity()== dcity &&  l1.getarrivalCity()== arcity){
       l1.removenode(si);
       cout<<"\nYour seat is sucessfully cancelled!\n";
       return;
    }
    else if(l2.getdepartureCity()== dcity &&  l2.getarrivalCity()== arcity){
        l2.removenode(si);
        cout<<"\nYour seat is sucessfully cancelled!\n";
       return;
    }
    else if(l3.getdepartureCity()== dcity &&  l3.getarrivalCity()== arcity){
        l3.removenode(si);
        cout<<"\nYour seat is sucessfully cancelled!\n";
       return;
    }
    cout<<"\nYour added information is wrong\n";
    return;
}