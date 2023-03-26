using namespace std;
class customer{
    int bill;
    string name;
    int age;
    string gender;
    char IdCardNumber[13];
    char checkinIdNumber[13]; // it will be used  while comparing data from file
    int Balance;
    int totalReserveDays;
    int FloorNumber;
    int roomNeeded;
    int roomNumber;
    // for checking date
    int checkinday;
    int checkinMonth;
    int checkinYear;
    // for checking time
    int checkinHour;
    int checkinMinutes;
    int newOld;
    int paymentStatus;
    void RemainingTimeinHotel();
  protected:
    static int i;
    public:
        customer();
        void findDataOfCustomer();

        void GetInput(int roomIndex, int f ,int roomType);
         void GetInput1(int roomIndex, int floorNumber ,int roomType);
          void Payment();
          void GetInput5(int roomIndex, int f ,int roomType);
           void GetInput6(int roomIndex, int floorNumber ,int roomType);

          void Payment1();
            void SavingDataForRoomsBooked();
            void SavingDataForRoomsReserved();
        void StoringData();
};
customer::customer(){
    name=" ";
    age=0;
    gender=" ";
    Balance=0;
    totalReserveDays=0;
    FloorNumber=0;
  //  roomNeeded=0;

}

void customer::findDataOfCustomer(){
  string data;
  cout<<"Please Enter Your Id Card Number ";
  for(int i=0;i<13;i++){
  cin>>checkinIdNumber[i];
  }
  ifstream checkingData;
  checkingData.open("customerdata.txt");
  // while(checkingData){
  //   getline(checkingData, data);
  //   if(checkinIdNumber[i])
  //    cout <<data<<"hy"<< endl;
  // }
  if(!checkingData) { // file couldn't be opened
    cout << "File can't opened" << endl;

 }
  while(!checkingData.eof())
  {
      getline(checkingData, data,'$');

      if(data==checkinIdNumber)
      {     cout <<data<<"1"<< endl;
          getline(checkingData, data);
            cout <<data<<"2"<< endl;
      }


  }
  // checkingData.open("customerdata",ios::in);
  // checkingData.getline(IdCardNumber,13);
  checkingData.close();
}

void customer::GetInput(int roomIndex, int f ,int roomType){
  cout<<"\nPlease Ennter 1 if you are a new customer\n";
  cout<<"PLease Enter 2 if you are old customer\n";
  cin>>newOld;
   FloorNumber=f;
   roomNeeded=roomType;
    roomNumber=roomIndex;// it is array index room number according to array add (100*floornumber+1) to room index to check actual room number given to user
  if(newOld==1){
    GetInput1( roomNumber,  FloorNumber , roomNeeded);
  }
  if(newOld==2){
    //GetInput1( roomNumber,  FloorNumber , roomNeeded);
    findDataOfCustomer();
  }

}
 void customer::GetInput1(int roomIndex, int floorNumber ,int roomType)
{
    cout<<"\nPlease Enter Your name:";
    cin.ignore();
    getline(cin,name);
    cout<<"\nPlease Enter Your age:";
    cin>>age;
    cout<<"\nPlease Enter Your Gender:";
    cin.ignore();
    getline(cin,gender);
    cout<<"\nPlease Enter Your CNIC:";
    for(int i=0;i<13;i++){
      cin>>IdCardNumber[i];
    }
    cout<<"\nHow many days you want to stay:";
    cin>>totalReserveDays;
    cout<<"\n Date Of Reservation\n";
    cout<<"Please Enter DAy";
    cin>>checkinday;
    cout<<"\nPlease Enter Month";
    cin>> checkinMonth;
    cout<<"\nPlease Enter Year";
    cin>> checkinYear;
    // for checking time
    cout<<"\n Time Of Reservation\n";
    cout<<"Please Enter Hours";
    cin>>checkinHour;
    cout<<"\nPlease Enter Minutes";
    cin>>checkinMinutes;
    StoringData();
    Payment();

}
  void customer::Payment(){
    // cout<<"Rom                 needed     "<<roomNeeded<<endl;
    switch(roomNeeded){
      case 1: bill= 300*totalReserveDays;
                break;
      case 2: bill= 500*totalReserveDays;
                break;
      case 3: bill= 1000*totalReserveDays;
                break;
      case 4: bill= 2000*totalReserveDays;
                break;
      case 5: bill= 5000*totalReserveDays;
                break;
    }
    cout<<"Your Total Bill is="<<bill<<endl;
    cout<<"Press 1 if you want to pay bill NOW\n";
    cout<<"Press 2 if you want to pay bill Latter";
    cin>>paymentStatus;
    cout<<"Your Room have been Reserved\n";
    SavingDataForRoomsReserved();
  }
  void customer::GetInput5(int roomIndex, int f ,int roomType){
    cout<<"\nPlease Enter 1 if you are a new customer\n";
    cout<<"PLease Enter 2 if you are old customer\n";
    cin>>newOld;
     FloorNumber=f;
     roomNeeded=roomType;
      roomNumber=roomIndex;// it is array index room number according to array add (100*floornumber+1) to room index to check actual room number given to user
    if(newOld==1){
      GetInput6( roomNumber,  FloorNumber , roomNeeded);
    }
    if(newOld==2){
      //GetInput1( roomNumber,  FloorNumber , roomNeeded);
      findDataOfCustomer();
    }

  }
   void customer::GetInput6(int roomIndex, int floorNumber ,int roomType)
  {
      cout<<"\nPlease Enter Your name:";
      cin.ignore();
      getline(cin,name);
      cout<<"\nPlease Enter Your age:";
      cin>>age;
      cout<<"\nPlease Enter Your Gender:";
      cin.ignore();
      getline(cin,gender);
      cout<<"\nPlease Enter Your CNIC : ";
      for(int i=0;i<13;i++){
        cin>>IdCardNumber[i];
      }
      cout<<"\nHow many days you want to stayy:";
      cin>>totalReserveDays;
        cout<<"\n Date Of Reservation\n";
      cout<<"Please Enter DAy";
      cin>>checkinday;
      cout<<"\nPlease Enter Month";
      cin>> checkinMonth;
      cout<<"\nPlease Enter Year";
      cin>> checkinYear;
      // for checking time
      cout<<"\n Time Of Reservation\n";
      cout<<"Please Enter Hours";
      cin>>checkinHour;
      cout<<"\nPlease Enter Minutes";
      cin>>checkinMinutes;
      StoringData();
      Payment1();
  }
  void customer::Payment1(){
    // cout<<"Rom                 needed     "<<roomNeeded<<endl;
    switch(roomNeeded){
      case 1: bill= 300*totalReserveDays;
                break;
      case 2: bill= 500*totalReserveDays;
                break;
      case 3: bill= 1000*totalReserveDays;
                break;
      case 4: bill= 2000*totalReserveDays;
                break;
      case 5: bill= 5000*totalReserveDays;
                break;
    }
    cout<<"Your Total Bill is="<<bill<<endl;
    cout<<"Press 1 if you want to pay bill NOW\n";
    cout<<"Press 2 if you want to pay bill Latter";
    cin>>paymentStatus;
    cout<<"Your Room have been booked\n";
    SavingDataForRoomsBooked();
  }
    void customer::SavingDataForRoomsBooked(){
      fstream storingDataInFileforRoom;
      storingDataInFileforRoom.open("Roomdata.txt",ios::out|ios::in|ios::app);
      storingDataInFileforRoom<<"A room has been booked:";
      storingDataInFileforRoom<<"Its customer name is:"<<name;
      storingDataInFileforRoom<<"$totalReserveDays:";
      storingDataInFileforRoom<<totalReserveDays;
      storingDataInFileforRoom<<"FloorNumber:";
      storingDataInFileforRoom<<FloorNumber;
      storingDataInFileforRoom<<"Room Type:";
      if (roomNeeded==1) {
        storingDataInFileforRoom<<"Standard";
      }
      else if (roomNeeded==2) {
        storingDataInFileforRoom<<"Moderate";
      }
      else if (roomNeeded==3) {
        storingDataInFileforRoom<<"Superior";
      }
      else if (roomNeeded==4) {
        storingDataInFileforRoom<<"Junior Suite";
      }
      else if (roomNeeded==5) {
        storingDataInFileforRoom<<"Suite";
      }
      storingDataInFileforRoom<<"roomNumber:";
      storingDataInFileforRoom<<roomNumber+1+FloorNumber*100;
      storingDataInFileforRoom<<endl;
      storingDataInFileforRoom.close();
      cout<<"Data For rooms have been Added\n";
    }
    void customer::SavingDataForRoomsReserved(){
      fstream storingDataInFileforRoom;
      storingDataInFileforRoom.open("Roomdata.txt",ios::out|ios::in|ios::app);
      storingDataInFileforRoom<<"A room has been Reserved:";
      storingDataInFileforRoom<<"Its customer name is:"<<name;
      storingDataInFileforRoom<<"$totalReserveDays:";
      storingDataInFileforRoom<<totalReserveDays;
      storingDataInFileforRoom<<"FloorNumber:";
      storingDataInFileforRoom<<FloorNumber;
      storingDataInFileforRoom<<"Room Type:";
      if (roomNeeded==1) {
        storingDataInFileforRoom<<"Standard";
      }
      else if (roomNeeded==2) {
        storingDataInFileforRoom<<"Moderate";
      }
      else if (roomNeeded==3) {
        storingDataInFileforRoom<<"Superior";
      }
      else if (roomNeeded==4) {
        storingDataInFileforRoom<<"Junior Suite";
      }
      else if (roomNeeded==5) {
        storingDataInFileforRoom<<"Suite";
      }
      storingDataInFileforRoom<<"roomNumber:";
      storingDataInFileforRoom<<roomNumber+1+FloorNumber*100;
      storingDataInFileforRoom<<endl;
      storingDataInFileforRoom.close();
      cout<<"Data For rooms have been Added\n";
    }

void customer::StoringData(){

  ofstream storingDataInFile;
  storingDataInFile.open("customerdata.txt",ios::out|ios::in|ios::app);
  //while()
  for(int i=0;i<13;i++){
      storingDataInFile<<IdCardNumber[i];
  }
  storingDataInFile<<"$";
  storingDataInFile<<name;
  storingDataInFile<<"$";
  storingDataInFile<<age;
  storingDataInFile<<"$";
  storingDataInFile<<gender;
  storingDataInFile<<"$";
  storingDataInFile<<totalReserveDays;
  storingDataInFile<<"$";
  storingDataInFile<<checkinday;
  storingDataInFile<<"$";
  storingDataInFile<<checkinMonth;
  storingDataInFile<<"$";
  storingDataInFile<<checkinYear;
  storingDataInFile<<"$";
  storingDataInFile<<checkinHour;
  storingDataInFile<<"$";
  storingDataInFile<<checkinMinutes;
  storingDataInFile<<"$";
  storingDataInFile<<checkinHour;
  storingDataInFile<<endl;
  storingDataInFile.close();
  cout<<"written";
}
