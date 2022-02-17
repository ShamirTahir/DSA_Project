#ifndef LIST_H
#define LIST_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class node{
    string name,seatid,depcity,arrcity,time;
    int cnic;
    node* next;
    public:
    node(string n,int c,string dcity,string arcity,string t);
    string getname();
    void setname(string n);
    string getseatid();
    void setseatid(string id);
    string getdepcity();
    void setdepcity(string dcity);
    string getarrcity();
    void setarrcity(string arcity);
    string gettime();
    void settime(string t);
    node* getnext();
    void setnext(node* nt);
};
class list{
private:
    node *head;
    int count;
    string flightTitle;
public:
    list(string ft);
    void addatlast(string n,int c,string dcity,string arcity,string t);
    string generateseatid();
    string getflightTitle();
    node* gethead();
    void display();
};
void loaddata(list *l);
#endif