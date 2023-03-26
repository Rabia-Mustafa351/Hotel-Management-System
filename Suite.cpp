using namespace std;
class Suite:public Room
 {
   int Price;
   int RoomTYPE;
   int Floor;
   int totalAvailRoom;
   public:
     void spaceInRoomss(int RoomType,int f);
   void spaceInRooms(int RoomType,int f);
   void emptyRoomCheck();
   void reservedRoomCheck();

 };
 void Suite::spaceInRoomss(int RoomType,int f){
     RoomTYPE=RoomType;
     Floor=f;
     Room::spaceInRooms2(RoomTYPE,Floor);
 }
void Suite::spaceInRooms(int RoomType,int f){
   RoomTYPE=RoomType;
   Floor=f;
   Room::spaceInRooms1(RoomTYPE,Floor);
}
void Suite::emptyRoomCheck(){
   totalAvailRoom=0;
   for(int i=0;i<10;i++){
       if(gettingAvailibilityOfRoom(i)==1)// available rooms are equal to 1
       totalAvailRoom++;
   }
   cout<<"\nTotal Number of Suite Available Rooms is"<<totalAvailRoom<<endl;
}
void Suite::reservedRoomCheck(){
 totalAvailRoom=0;
 for(int i=0;i<10;i++){
     if(gettingAvailibilityOfRoom(i)==0) // reserved rooms are equal to zero
     totalAvailRoom++;
 }
 cout<<"\nTotal Number of Suite Reserved Rooms is"<<totalAvailRoom<<endl;
}
