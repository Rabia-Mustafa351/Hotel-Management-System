using namespace std;
 class StandardRoom:public Room
 {
        int Price;
        int RoomTYPE;
        int Floor;
        int totalAvailRoom;
        public:
        void spaceInRooms(int RoomType,int f){
            RoomTYPE=RoomType;
            Floor=f;
            Room::spaceInRooms1(RoomTYPE,Floor);
        }
      virtual void  setCheckin1(int f){
        }

        void emptyRoomCheck(){
            totalAvailRoom=0;
            for(int i=0;i<10;i++){
                if(gettingAvailibilityOfRoom(i)==1)
                totalAvailRoom++;
            }
            cout<<"\nTotal Number of Standard Available Rooms is"<<totalAvailRoom<<endl;
        }
        void spaceInRoomss(int RoomType,int f){
            RoomTYPE=RoomType;
            Floor=f;
            Room::spaceInRooms2(RoomTYPE,Floor);
        }
        void reservedRoomCheck(){
          totalAvailRoom=0;
          for(int i=0;i<10;i++){
              if(gettingAvailibilityOfRoom(i)==0) // reserved rooms are equal to zero
              totalAvailRoom++;
          }
          cout<<"\nTotal Number of Standard Reserved Rooms is"<<totalAvailRoom<<endl;
         }

 };