using namespace std;
class Room{ //rooms ka bnay
      customer *C;
      int TotalRoomsAvailable[50];
      int RoomCheck;
      int roomTobeBooked;
			int roomType;// it will represent type of room that needed
			int roomIndex;// room index
      int roomNum; // got from user to checkin a room
      public:
      Room();
        int  gettingAvailibilityOfRoom(int i);
        void spaceInRooms1(int a,int b /*b will be acording to floor number*/);
        void  setCheckin1(int f);
        void spaceInRooms2(int a,int b /*b will be acording to floor number*/);

           virtual void emptyRoomCheck(){
           }
           virtual void reservedRoomCheck(){
            }



 };
Room::Room(){
     for(int i=0;i<50;i++){ //value 1 will represent that rooms are avalialable
       TotalRoomsAvailable[i]=1;
       RoomCheck=0;
       C= new customer[i];// for customer object
     }
 }
int  Room::gettingAvailibilityOfRoom(int i){
       return TotalRoomsAvailable[i];
 }
   void Room::spaceInRooms1(int a,int b /*b will be acording to floor number*/){ // A will represent type of room needed
     roomType=a;// saving it....will be helpful while calculating bill
    //  cout<<"  lllllllll        "<<roomType<<"      qqqqqqqqq         "<<endl;
     int start,end,roomCount;
     roomCount=0;
     if(a==1){
       start=0;
       end=10;
     }
     else if(a==2){
       start=10;
       end=20;
     }
     else if(a==3){
       start=20;
       end=30;
     }
     else if(a==4){
       start=30;
       end=40;
     }
     else if(a==5){
       start=40;
       end=50;
     }
       cout<<"Following Room Numbers are Present\n";
     for(int i=start;i<end;i++){  //value 1 will represent that rooms are avalialable
       if(TotalRoomsAvailable[i]==1){
         cout<<b+i+1<<endl;//Hunderd is used to set room number authentic
         roomCount++;
         //i AM USING ONE SO MY ROOM NUMBERS WILL START FROM FIRST FLOOR AS101
       //  RoomCheck++;
         // make funtion to display that which rooms are available
       }
     }

     cout<<"PLease Enter which room number do you want to Reserve";
     cin>>roomTobeBooked;
     // for(int i=start;i<end;i++){ // now i will store index of room booked so it will helpful for calculations in customer class
     // 	if(TotalRoomsAvailable[i]==roomTobeBooked){
     // 		cout<<endl<<"room to be booked is"<<roomTobeBooked<<" on index"<<i<<endl;
     // 	}
     // }
     int *storingAvailableRooms,j=0;
     storingAvailableRooms=new int[roomCount];
     for(int i=start;i<end;i++){ // storing Room NUMBERS so  when user will BookRoom we can check that either he is booking correct or not
       if(TotalRoomsAvailable[i]==1){
         if(j<roomCount)
       {
         storingAvailableRooms[j]=b+i+1;
         if(storingAvailableRooms[j]==roomTobeBooked){
         roomIndex=i;
         cout<<endl<<endl<<i<<endl<<endl;
         }
         j++;
       }
     }
   }
     int check=0;
     for(int i=0;i<roomCount;i++){ // storing Room NUMBERS so  when user will BookRoom we can check that either he is booking correct or not
       if(storingAvailableRooms[i]==roomTobeBooked){
       //  roomIndex=i
       check=1;
       }
     }

       storingAvailableRooms[roomTobeBooked-b-1]=0;
       if(check==1){
       cout<<"Getting Customer Data";
       C[roomIndex].GetInput(roomIndex,b/100,roomType);// a represent room type
     }
     else if(check==0){
         cout<<"You Enterd Incorret room Number";
     }

     // cout<<"available number of required Rooms is="<<RoomCheck<<endl;
     // cout<<" ";
     //

   }
   void  Room::setCheckin1(int f){
     cout<<"Please Enter Room Number You have booked\n";
     cin>>roomNum;
     roomNum-=f*100+1;
      if(TotalRoomsAvailable[roomNum]==0)// equal to zero ,means room is Reserved
      {
        TotalRoomsAvailable[roomNum]=2;
        cout<<"Room Number have been cheked in\n";
      }
      else if(TotalRoomsAvailable[roomNum]==1||TotalRoomsAvailable[roomNum]==2)
         cout<<"You Enterd Incorrect Room Number\n";
         else
         cout<<"you You Enterd Incorrect Room Number\n";
     }
   void Room::spaceInRooms2(int a,int b /*b will be acording to floor number*/){ // A will represent type of room needed
     roomType=a;// saving it....will be helpful while calculating bill
   //  cout<<"  lllllllll        "<<roomType<<"      qqqqqqqqq         "<<endl;
     int start,end,roomCount;
     roomCount=0;
     if(a==1){
       start=0;
       end=10;
     }
     else if(a==2){
       start=10;
       end=20;
     }
     else if(a==3){
       start=20;
       end=30;
     }
     else if(a==4){
       start=30;
       end=40;
     }
     else if(a==5){
       start=40;
       end=50;
     }
       cout<<"Following Room Numbers are Present\n";
     for(int i=start;i<end;i++){  //value 1 will represent that rooms are avalialable
       if(TotalRoomsAvailable[i]==1){
         cout<<b+i+1<<endl;//Hunderd is used to set room number authentic
         roomCount++;
         //i AM USING ONE SO MY ROOM NUMBERS WILL START FROM FIRST FLOOR AS101
       //  RoomCheck++;
         // make funtion to display that which rooms are available
       }
     }

     cout<<"PLease Enter which room number do you want to Book";
     cin>>roomTobeBooked;
     // for(int i=start;i<end;i++){ // now i will store index of room booked so it will helpful for calculations in customer class
     // 	if(TotalRoomsAvailable[i]==roomTobeBooked){
     // 		cout<<endl<<"room to be booked is"<<roomTobeBooked<<" on index"<<i<<endl;
     // 	}
     // }
     int *storingAvailableRooms,j=0;
     storingAvailableRooms=new int[roomCount];
     for(int i=start;i<end;i++){ // storing Room NUMBERS so  when user will BookRoom we can check that either he is booking correct or not
       if(TotalRoomsAvailable[i]==1){
         if(j<roomCount)
       {
         storingAvailableRooms[j]=b+i+1;
         if(storingAvailableRooms[j]==roomTobeBooked){
         roomIndex=i;
         cout<<endl<<endl<<i<<endl<<endl;
         }
         j++;
       }
     }
   }
     int check=0;
     for(int i=0;i<roomCount;i++){ // storing Room NUMBERS so  when user will BookRoom we can check that either he is booking correct or not
       if(storingAvailableRooms[i]==roomTobeBooked){
       //  roomIndex=i
       check=1;
       }
     }

       storingAvailableRooms[roomTobeBooked-b-1]=2;
       if(check==1){
       cout<<"Getting Customer Data";
       C[roomIndex].GetInput5(roomIndex,b/100,roomType);// a represent room type
     }
     else if(check==0){
         cout<<"You Enterd Incorret room Number";
     }

     // cout<<"available number of required Rooms is="<<RoomCheck<<endl;
     // cout<<" ";
     //

   }