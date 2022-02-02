#include<iostream>
#include<string>
using namespace std;
class node{
    string name,seatid,depcity,arrcity,time;
    node* next;
    public:
    node(string n,string id,string dcity,string arcity,string t){
        name = n;
        seatid = id;
        depcity = dcity;
        arrcity = arcity;
        time = t;
    }
    string getname(){
        return name;
    }
    void setname(string n){
        name = n;
    }
    string getseatid(){
        return seatid;
    }
    void setseatid(string id){
        seatid = id;
    }
    string getdepcity(){
        return depcity;
    }
    void setdepcity(string dcity){
        depcity = dcity;
    }
    string getarrcity(){
        return arrcity;
    }
    void setarrcity(string arcity){
        arrcity = arcity;
    }
    string gettime(){
        return time;
    }
    void settime(string t){
        time = t;
    }
    node* getnext(){
        return next;
    }
    void setnext(node* nt){
        next = nt;
    }
}
class list{

}
int main(){
    int select1,cnic;
    string name,seatid,depcity,arrcity,time;
    cout<<"Welcome to Airline\n";
    cout<<"Press 1,2 or 3\n";
    cout<<"1. Book your Seat\n";
    cout<<"2. Cancel your Seat\n";
    cout<<"3. Confirm your Seat\n";
    cin>>select1;
    if(select1==1){
        cout<<"Seat Cancellation Process\n";
        cout<<"Depature Timings\n";
        cout<<"Lahore to Islamabad  -  9AM,  12PM , 3PM\n";
        cout<<"Islamabad to Lahore  -  10AM,  1PM , 4PM\n";
        cout<<"Karachi to Lahore    -  11AM,  2PM , 5PM\n";
        cout<<"Enter your information\n";
        cout<<"Enter your Name ";
        cin>>name;
        cin.ignore();
        cout<<"Enter your CNIC ";
        cin>>cnic;
        cin.ignore();
        cout<<"Enter your City of Departure ";
        cin>>arrcity;
        cin.ignore();
        cout<<"Enter your City of Arrival ";
        cin>>depcity;
        cout<<"Enter your Time of Departure ";
        cin>>time;
        cout<<"Your seat have been Booked!";
    }
    if(select1==2){
        cout<<"Seat Cancellation Process\n";
        cout<<"Enter your Seat ID ";
        cin>>seatid;
        cout<<"Enter your Name ";
        cin>>name;
        cout<<"Enter your CNIC ";
        cin>>cnic;
    }
    if(select1==3){
        cout<<"Seat Confirmation Process\n";
        cout<<"Enter your Seat ID ";
        cin>>seatid;
        cout<<"Enter your Name ";
        cin>>name;
        cout<<"Enter your CNIC ";
        cin>>cnic;
    }
    return 0;
}