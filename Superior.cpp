using namespace std;
class Superior:public Room
 {
   int Price;
   int RoomTYPE;
   int Floor;
   int totalAvailRoom;
   public:
   void spaceInRooms(int RoomType,int f);
   void spaceInRoomss(int RoomType,int f);
   void emptyRoomCheck();
   void reservedRoomCheck();
 };
 void Superior::spaceInRooms(int RoomType,int f){
     RoomTYPE=RoomType;
     Floor=f;
     Room::spaceInRooms1(RoomTYPE,Floor);
 }
 void Superior::spaceInRoomss(int RoomType,int f){
     RoomTYPE=RoomType;
     Floor=f;
     Room::spaceInRooms2(RoomTYPE,Floor);
 }
 void Superior::emptyRoomCheck(){
     totalAvailRoom=0;
     for(int i=0;i<10;i++){
         if(gettingAvailibilityOfRoom(i)==1)
         totalAvailRoom++;
     }
     cout<<"\nTotal Number of Superior Available Rooms is"<<totalAvailRoom<<endl;
 }
 void Superior::reservedRoomCheck(){
   totalAvailRoom=0;
   for(int i=0;i<10;i++){
       if(gettingAvailibilityOfRoom(i)==0) // reserved rooms are equal to zero
       totalAvailRoom++;
   }
   cout<<"\nTotal Number of Superior Reserved Rooms is"<<totalAvailRoom<<endl;
  }