#ifndef LIST_H
#define LIST_H
#include<iostream>
#include<fstream>
#include<string>
// #include<stdio.h>
// #include<stdlib.h>
using namespace std;
class node{
    string name,depcity,arrcity,time,flighttitle;
    int seatid;
    node* next;
    public:
    node(string n,string dcity,string arcity,string t);
    string getname();
    void setname(string n);
    int getseatid();
    void setseatid(int id);
    string getdepcity();
    void setdepcity(string dcity);
    string getarrcity();
    void setarrcity(string arcity);
    string gettime();
    void settime(string t);
    node* getnext();
    void setnext(node* nt);
    void display();
};
class list{
    node *head;
    int count;
    string flightTitle;
    string departureCity;
    string arrivalCity;
public:
    list(string ft,string d,string a);
    void addatlast(string n,string dcity,string arcity,string t);
    void addatlast1(string n,string dcity,string arcity,string t,int seatid);
    int getcount();
    string getflightTitle();
    node* gethead();
    string getdepartureCity();
    string getarrivalCity();
    void removenode(int key);
};
class bf{
    int size;
    int* array;
    list* listofseats;
public:
    bf();
    int hash(int n);
    void insert(node* n);
    bool filter(node* n);
    void addlistofilter(list* l);
};
void writedata(list& l1,list& l2,list& l3);
void checkandadd(list& l1,list& l2,list& l3,string n,string dcity,string arcity,string t);
void loadlists(list& l1,list& l2,list& l3);
void checkandconfirm(list& l1,list& l2,list& l3,string dcity,string arcity,int si);
void checkandcancel(list& l1,list& l2,list& l3,string dcity,string arcity,int si);
#endif