#include<iostream>
#include<fstream>
#include "customer.cpp"
#include "room.cpp"
#include "StandardRoom.cpp"
#include "Moderate.cpp"
#include "Superior.cpp"
#include "JuniorSuite.cpp"
#include "Suite.cpp"
#include "Floor.cpp"
#include "Hotel.cpp"
using namespace std;
}
int main(){
    // customer c;
    // c.findDataOfCustomer();
    // customer C;
  //  cout<<"How many Rooms do you want to book";l
  int floornumber=0,input;
  cout<<"{             For Manager             }\n";
  // cout<<"How many Floors do you want to create";
  // cin>>floornumber;
  Hotel H;

     start:
    cout<<"\n{             HOTEL MANAGEMsENT SYSYTEM             }\n";
    cout<<"Press 1 to Reserve a room\n";
    cout<<"Press 2 to checkin/customer visitor\n";
    cout<<"Press 3 to view Reserved Rooms\n";
    cout<<"Press 4 to see detail Reports\n";
    cout<<"Press 5 to EXIT\n";

    cin>>input;
    switch(input){
      case 1:
              H.bookRoom();
              break;
      case 2:
              H.CheckinRoom();
              break;
      case 3:
              H.CheckingforResevedRoom();
              break;
      case 4:
              H.detailReport();
              break;
              goto  start;
      case 5:
              exit;

    }

    return 0;
}
