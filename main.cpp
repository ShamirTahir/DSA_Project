
#include "list.cpp"

int main(){
    int select1,cnic;
    string name,seatid,depcity,arrcity,time;
    list lahToisl("LtoI");
    cout<<"Welcome to Airline\n";
    cout<<"\n";
    t:
   
    cout<<"\nPress 1,2,3 or 4\n";
    cout<<"1. Book your Seat\n";
    cout<<"2. Cancel your Seat\n";
    cout<<"3. Confirm your Seat\n";
    cout<<"4. Exit\n";
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
        cin.ignore();
        cout<<"\nYour seat have been Booked!";
    
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
    if(select1==4){
        
        writedata(&lahToisl);
        return 0;
    }
    goto t;
    return 0;
}