//-----Airline Management System-----

#include<bits/stdc++.h>
using namespace std;

void airmenu();

class air{

    public:

        air(){
            airmenu();
        }
};




class details{

    public:

    static string name, gender;
    int phonenumber;
    int age;
    string address;
    static int cID;
    char arr[100];

    void information(){
            cout<<"Enter the Customer ID : ";
            cin>>cID;
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter thr age : ";
            cin>>age;
            cout<<"Address : ";
            cin>>address;
            cout<<"Gender : ";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
    }

};


int details::cID;
string details::name;
string details::gender;


class registration{

    public:

    static int choice;
    int C1;
    int back;
    static float charges;


    void flight(){

        string flightN[] = {"Berlin", "Dusseldorf", "Frankfurt", "Toronto"};

            for(int i=0; i<4; i++){
                cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
            }
            cout<<"\nWelcome to the Lufthansa Airline "<<endl;
            cout<<"Please select your destination to book the flight ticket: ";
            cin>>choice;
            cout<<endl;

                switch(choice){

                 case 1:{
                    cout<<"_______Welcome to Berlin_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. BER - 498"<<endl;
                    cout<<"\t08-01-2022 10:00PM 14 Days Rs 54,241"<<endl;
                    cout<<"2. BER - 658"<<endl;
                    cout<<"\t10-01-2022 10:00PM 11 Days Rs 98,549"<<endl;
                    cout<<"3. BER - 543"<<endl;
                    cout<<"\t12-01-2022 10:00PM 7 Days Rs 111,318"<<endl;

                    cout<<"\nSelect your flight ticket : ";
                    cin>>C1;

                        if(C1==1){
                            charges=54241;
                            cout<<"\nYou have successfully booked the flight BER - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(C1==2){
                            charges=98549;
                            cout<<"\nYou have successfully booked the flight BER - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(C1==3){
                            charges=111318;
                            cout<<"\nYou have successfully booked the flight BER - 543"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid input, Shifting to the previous menu"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to Main Menu";
                        cin>>back;

                        if(back==1){
                            airmenu();
                        }
                        else{
                            airmenu();
                        }
                 }
                 case 2:{
                    cout<<"_______Welcome to Dusseldorf_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. DUS - 408"<<endl;
                    cout<<"\t02-01-2022 10:00PM 15 Days Rs 60,033"<<endl;
                    cout<<"2. DUS - 558"<<endl;
                    cout<<"\t10-01-2022 03:30PM 13 Days Rs 98,900"<<endl;
                    cout<<"3. DUS - 591"<<endl;
                    cout<<"\t10-01-2022 06:00AM 8 Days Rs 103,175"<<endl;

                    cout<<"\nSelect your flight ticket : ";
                    cin>>C1;

                        if(C1==1){
                            charges=60033;
                            cout<<"\nYou have successfully booked the flight  DUS - 408"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(C1==2){
                            charges=98900;
                            cout<<"\nYou have successfully booked the flight DUS - 558"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(C1==3){
                            charges=103175;
                            cout<<"\nYou have successfully booked the flight DUS - 591"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"Invalid input, Shifting to the previous menu"<<endl;
                            flight();
                        }

                        cout<<"Press any key to go back to Main Menu";
                        cin>>back;

                        if(back==1){
                            airmenu();
                        }
                        else{
                            airmenu();
                        }
                 }
                 case 3:{
                    cout<<"_______Welcome to Frankfurt_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. FRA - 448"<<endl;
                    cout<<"\t20-03-2022 11:00PM 15 Days Rs 45,750"<<endl;
                    cout<<"2. FRA - 508"<<endl;
                    cout<<"\t11-02-2022 10:00AM 12 Days Rs 72,300"<<endl;
                    cout<<"3. FRA - 791"<<endl;
                    cout<<"\t3-01-2022 02:30AM 6 Days Rs 99,475"<<endl;

                    cout<<"\nSelect your flight ticket : ";
                    cin>>C1;

                    if(C1==1){
                        charges=45750;
                        cout<<"\nYou have successfully booked the flight  FRA - 448"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(C1==2){
                        charges=72300;
                        cout<<"\nYou have successfully booked the flight FRA - 508"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(C1==3){
                        charges=99475;
                        cout<<"\nYou have successfully booked the flight FRA - 791"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, Shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any key to go back to Main Menu";
                    cin>>back;

                    if(back==1){
                        airmenu();
                    }
                    else{
                        airmenu();
                    }
                 }
                 case 4:{
                    cout<<"_______Welcome to Toronto_______\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journey\n"<<endl;
                    cout<<"Following are the flights\n"<<endl;

                    cout<<"1. YTO - 208"<<endl;
                    cout<<"\t2-01-2022 10:00PM 15 Days Rs 89,655"<<endl;
                    cout<<"2. YTO - 518"<<endl;
                    cout<<"\t10-02-2022 01:30AM 12 Days Rs 113,000"<<endl;
                    cout<<"3. YTO - 555"<<endl;
                    cout<<"\t11-01-2022 09:30PM 6 Days Rs 129,000"<<endl;

                    cout<<"\nSelect your flight ticket : ";
                    cin>>C1;

                    if(C1==1){
                        charges=89655;
                        cout<<"\nYou have successfully booked the flight  YTO - 208"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(C1==2){
                        charges=113000;
                        cout<<"\nYou have successfully booked the flight YTO - 518"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(C1==3){
                        charges=129000;
                        cout<<"\nYou have successfully booked the flight YTO - 555"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, Shifting to the previous menu"<<endl;
                        flight();
                    }

                    cout<<"Press any key to go back to Main Menu";
                    cin>>back;

                    if(back==1){
                        airmenu();
                    }
                    else{
                        airmenu();
                    }
                 }
                 default:{
                    cout<<"Invalid input, Shifting to the previous menu"<<endl;
                    airmenu();
                    break;
                 }
                
                 
              }
    }
};


float registration::charges;
int registration::choice;

class ticket : public registration, details{

    public:

    void bill(){

        string destination=" ";
        ofstream outf("records.txt");
        {
            outf<<"---------------Lufthansa Airline---------------"<<endl;
            outf<<"---------------      Ticket     ---------------"<<endl;
            outf<<"-----------------------------------------------"<<endl;

            outf<<"Customer ID"<<details::cID<<endl;
            outf<<"Customer Name"<<details::name<<endl;
            outf<<"Customer Gender"<<details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;


            if(registration::choice==1){
                destination="Berlin";                
            }
            else if(registration::choice==2){
                destination="Dusseldorf";                
            }
            else if(registration::choice==3){
                destination="Frankfurt";                
            }
            else if(registration::choice==4){
                destination="Toronto";                
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
    }

    void display(){
        ifstream ifs("record.txt");
        {
            if(ifs){
                cout<<"File error!"<<endl;
            }
            while(ifs.eof()){
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};




void airmenu(){
    int A;
    int B;
    int back;

    cout<<"---------------Lufthansa Airline---------------"<<endl;
    cout<<"                   Main Menu                   "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"                                               "<<endl;
    cout<<"     Press 1 to register Passenger details     "<<endl;
    cout<<"     Press 2 for flight Registration           "<<endl;
    cout<<"     Press 3 for our Ticket details            "<<endl;
    cout<<"     Press 4 to exit                           "<<endl;
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Enter the choice : ";
    cin>>A;

    details d;
    registration r;
    ticket t;


    switch(A){

        case 1 :{
            cout<<"_____Customers_____\n"<<endl;
            d.information();
            cout<<"Press any key to go back to Main Menu";
            cin>>back;

            if(back==1){
                airmenu();
            }
            else{
                airmenu();
            }
            break;

        }
        case 2:{
            cout<<"_____Book a flight_____\n"<<endl;
            r.flight();
            break;

        }
        case 3:{
            cout<<"_____Get your Ticket_____\n"<<endl;
            t.bill();
            cout<<"Your Ticket\n"<<endl;
            cout<<"Press 1 to display your ticket ";
            cin>>back;

            if(back==1){
                t.display();
                cout<<"Press any key to go back to Main Menu";
                cin>>back;

                if(back==1){
                    airmenu();
                }
                else{
                    airmenu();
                }
            }
            else{
                airmenu();
            }
            break;
        }
        case 4:{
            cout<<"_______Thank-You_______"<<endl;
            break;
        }
        default:{
            cout<<"Invalid Input...Please try again...\n"<<endl;
            airmenu();
            break;
        }
    }
}

int main(){
    air AMS;
    return 0;
}