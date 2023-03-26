using namespace std;
class Moderate:public Room
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
 void Moderate::spaceInRooms(int RoomType,int f){
     RoomTYPE=RoomType;
     Floor=f;
     Room::spaceInRooms1(RoomTYPE,Floor);
 }
 void Moderate::spaceInRoomss(int RoomType,int f){
     RoomTYPE=RoomType;
     Floor=f;
     Room::spaceInRooms2(RoomTYPE,Floor);
 }
 void Moderate::emptyRoomCheck(){
     totalAvailRoom=0;
     for(int i=0;i<10;i++){
         if(gettingAvailibilityOfRoom(i)==1)
         totalAvailRoom++;
     }
     cout<<"\nTotal Number of Moderate Available Rooms is"<<totalAvailRoom<<endl;
 }
 void Moderate::reservedRoomCheck(){
   totalAvailRoom=0;
   for(int i=0;i<10;i++){
       if(gettingAvailibilityOfRoom(i)==0) // reserved rooms are equal to zero
       totalAvailRoom++;
   }
   cout<<"\nTotal Number of Moderate Reserved Rooms is"<<totalAvailRoom<<endl;
  }