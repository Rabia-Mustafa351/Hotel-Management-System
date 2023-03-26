using namespace std;
class Floor{
	//Room TotalRoomONFloor;
  int specificRoom;
  int whichRoom;// that of which room user want to check Data
  StandardRoom SD;
  Superior  SP;
  Moderate M;
  Suite S;
  JuniorSuite JS;

public:
	Floor();
  void SetCheckin( int floornumber);
	void getRoom(int f/* f will tell us about floor*/);
  void getRoom1(int f/* f will tell us about floor*/);
     void   reservedroomschecking(int floorNumber );
      void emptyroomschecking(int floorNumber);

};
Floor::Floor(){

}
void Floor::SetCheckin( int floornumber){
  int f=floornumber;
  int type;
  cout<<"Please Enter which type of room Number You have booked";
  cin>>type;
  if(type==1){
    SD.setCheckin1(f);
  }
  if(type==2){
    M.setCheckin1(f);
  }
  if(type==3){
    SP.setCheckin1(f);
  }
  if(type==4){
    JS.setCheckin1(f);
  }
  if(type==5){
    S.setCheckin1(f);
  }

}
void Floor::getRoom(int f/* f will tell us about floor*/){
  int RoomType;
  cout<<"which TYpe Of Room Do you want";
  cout<<"\n1)Standard\n2)Moderate\n3)Superior\n4)JuniorSuite\n5)Suite";
  cin>>RoomType;
  if(RoomType==1){
  SD.spaceInRooms(RoomType,f);
}
else if(RoomType==2)
{	M.spaceInRooms(RoomType,f);
}
else  if(RoomType==3){
SP.spaceInRooms(RoomType,f);
}
else if(RoomType==4)
{
JS.spaceInRooms(RoomType,f);
}
else if(RoomType==5)
{
S.spaceInRooms(RoomType,f);
}

}

void Floor::getRoom1(int f/* f will tell us about floor*/){
  int RoomType;
  cout<<"which TYpe Of Room Do you want";
  cout<<"\n1)Standard\n2)Moderate\n3)Superior\n4)JuniorSuite\n5)Suite";
  cin>>RoomType;
  if(RoomType==1){
  SD.spaceInRoomss(RoomType,f);
}
else if(RoomType==2)
{	M.spaceInRoomss(RoomType,f);
}
else  if(RoomType==3){
SP.spaceInRoomss(RoomType,f);
}
else if(RoomType==4)
{
JS.spaceInRoomss(RoomType,f);
}
else if(RoomType==5)
{
S.spaceInRoomss(RoomType,f);
}

}
   void   Floor::reservedroomschecking(int floorNumber )
     {
         cout<<"\nPress 1 if you want to check data of all the rooms of floor "<<floorNumber<<" \n";
         cout<<"press 2 if you want to check data of specific Room of floor "<<floorNumber<<"\n";
         cin>>whichRoom;
           cout<<"\n Required Data of Floor "<<floorNumber<<" is:\n";
         if(whichRoom==1){

                 SD.reservedRoomCheck();
                 M.reservedRoomCheck();
                 SP.reservedRoomCheck();
                 JS.reservedRoomCheck();
                 S.reservedRoomCheck();
         }
         else if(whichRoom==2){
           cout<<"\n Required Data of Floor "<<floorNumber<<"is:\n";
           cout<<"Enter 1 if you want to check Data Of Standard Room\n";
           cout<<"Enter 2 if you want to check Data Of Moderate\n";
           cout<<"Enter 3 if you want to check Data Of Superior Room\n";
           cout<<"Enter 4 if you want to check Data Of JuniorSuite Room\n";
           cout<<"Enter 5 if you want to check Data Of Suit Room\n";
           cin>>specificRoom;
           if(specificRoom==1){
             SD.reservedRoomCheck();

           }
           if(specificRoom==2){
             M.reservedRoomCheck();
           }
           if(specificRoom==3){
             SP.reservedRoomCheck();
           }
           if(specificRoom==4){
             JS.reservedRoomCheck();
           }
           if(specificRoom==5){
             S.reservedRoomCheck();
           }
         }

   }
    void Floor::emptyroomschecking(int floorNumber){
        cout<<"\nPress 1 if you want to check data of all the rooms of floor "<<floorNumber<<" \n";
        cout<<"press 2 if you want to check data of specific Room of floor "<<floorNumber<<"\n";
        cin>>whichRoom;
          cout<<"\n Required Data of Floor "<<floorNumber<<" is:\n";
        if(whichRoom==1){
        //  for(int i=0;i<5;i++){

                SD.emptyRoomCheck();
                M.emptyRoomCheck();
                SP.emptyRoomCheck();
                JS.emptyRoomCheck();
                S.emptyRoomCheck();

        //  }


        }
        else if(whichRoom==2){
          cout<<"\n Required Data of Floor "<<floorNumber<<"is:\n";
          cout<<"Enter 1 if you want to check Data Of Standard Room\n";
          cout<<"Enter 2 if you want to check Data Of Moderate\n";
          cout<<"Enter 3 if you want to check Data Of Superior Room\n";
          cout<<"Enter 4 if you want to check Data Of JuniorSuite Room\n";
          cout<<"Enter 5 if you want to check Data Of Suit Room\n";
          cin>>specificRoom;
          if(specificRoom==1){
            SD.emptyRoomCheck();

          }
          if(specificRoom==2){
            M.emptyRoomCheck();
          }
          if(specificRoom==3){
            SP.emptyRoomCheck();
          }
          if(specificRoom==4){
            JS.emptyRoomCheck();
          }
          if(specificRoom==5){
            S.emptyRoomCheck();
          }
        }

    }