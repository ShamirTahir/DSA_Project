
#include "list.cpp"

int main(){
    int select1;
    string name,depcity,arrcity,time;
    int seatid;
    list LahoreToIslamabad("LahoreToIslamabad","Lahore","Islamabad");
    list IslamabadToLahore("IslamabadToLahore","Islamabad","Lahore");
    list KarachiToLahore("KarachiToLahore","Karachi","Lahore");
    loadlists(LahoreToIslamabad,IslamabadToLahore,KarachiToLahore);
    cout<<"\nWelcome to Airline\n";
    cout<<"\n";
    t:
    cout<<"\nPress 1,2,3 or 4\n";
    cout<<"1. Book your Seat\n";
    cout<<"2. Cancel your Seat\n";
    cout<<"3. Confirm your Seat\n";
    cout<<"4. Exit\n";
    cin>>select1;
    if(select1==1){
        cout<<"Seat Booking Process\n";
        cout<<"Depature Timings\n";
        cout<<"Lahore to Islamabad  -  9AM\n";
        cout<<"Islamabad to Lahore  -  10AM\n";
        cout<<"Karachi to Lahore    -  11AM\n";
        cout<<"Enter your information\n";
        cout<<"Enter your Name ";
        cin>>name;
        cin.ignore();
        cout<<"Enter your City of Departure ";
        cin>>arrcity;
        cin.ignore();
        cout<<"Enter your City of Arrival ";
        cin>>depcity;
        cout<<"Enter your Time of Departure ";
        cin>>time;
        cin.ignore();
        checkandadd(LahoreToIslamabad,IslamabadToLahore,KarachiToLahore,name,arrcity,depcity,time);
    }
    if(select1==2){
        cout<<"Seat Cancellation Process\n";
        cout<<"Enter your Seat ID ";
        cin>>seatid;
        cin.ignore();
        cout<<"Enter your Name ";
        cin>>name;
        cin.ignore();
        cout<<"Enter your City of Departure ";
        cin>>arrcity;
        cin.ignore();
        cout<<"Enter your City of Arrival ";
        cin>>depcity;
        checkandcancel(LahoreToIslamabad,IslamabadToLahore,KarachiToLahore,arrcity,depcity,seatid);
    }
    if(select1==3){
        cout<<"Seat Confirmation Process\n";
        cout<<"Enter your Seat ID ";
        cin>>seatid;
        cin.ignore();
        cout<<"Enter your City of Departure ";
        cin>>arrcity;
        cin.ignore();
        cout<<"Enter your City of Arrival ";
        cin>>depcity;
        checkandconfirm(LahoreToIslamabad,IslamabadToLahore,KarachiToLahore,arrcity,depcity,seatid);
    }
    if(select1==4){
        writedata(LahoreToIslamabad,IslamabadToLahore,KarachiToLahore);
        return 0;
    }
    goto t;
    return 0;
}