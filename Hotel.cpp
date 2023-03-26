using namespace std;
class Hotel{
	int NumberOfFloors;
	Floor *F;
  int infoNeeded;
  int whichfloor;
	public:
	Hotel();
	Hotel(int i);
	void bookRoom();
  void bookRoom1();
  void CheckinRoom();
  void detailReport();
  void CheckingforResevedRoom();
};
Hotel::Hotel(){
	cout<<"How many floors do you want to create";
	cin>>NumberOfFloors;
	F=new Floor[NumberOfFloors];
	}
	Hotel::Hotel(int i){
		F=new Floor[i];
		}
void Hotel::CheckingforResevedRoom(){
  cout<<"Press 1 if you want to get Information of all the Floors\n";
          cout<<"Press 2 if you want to get Information of specifc Floor\n";
          cin>>whichfloor;
          if(whichfloor==1){
          for(int i=0;i<NumberOfFloors;i++){
            F[i].reservedroomschecking(i+1);
          }
        }
          else if(whichfloor==2){
            cout<<"Please Enter of which floor you want to get info";
            cin>>whichfloor;
          //  if(whichfloor>1&&whichfloor<)
              F[whichfloor].reservedroomschecking(whichfloor);
          }
          else
            cout<<"You enterd incorrect Number";

}


void Hotel::detailReport(){
    cout<<"Which Information You want to Get\n";
    cout<<"1)How many customers have checked in today\n";
    cout<<"2)How many have checked out today\n";
    cout<<"3)How many rooms have been reserved and their types\n";
    cout<<"4)How many rooms are empty and their types\n";
    cin>>infoNeeded;
    switch(infoNeeded){
    case 4: cout<<"Press 1 if you want to get Information of all the Floors\n";
            cout<<"Press 2 if you want to get Information of specifc Floor\n";
            cin>>whichfloor;
            if(whichfloor==1){
            for(int i=0;i<NumberOfFloors;i++){
              F[i].emptyroomschecking(i+1);
            }
          }
            else if(whichfloor==2){
              cout<<"Please Enter of which floor you want to get info";
              cin>>whichfloor;
                F[whichfloor].emptyroomschecking(whichfloor);
            }
            else
              cout<<"You enterd incorrect Number";

  }
  }

void Hotel::bookRoom(){ // to reserve rooms

int FloorNumber;
	cout<<"On which Floor Do you want to Reserve Room";
	cin>>FloorNumber;
    if(FloorNumber<=NumberOfFloors&&FloorNumber>0)
    F[FloorNumber-1].getRoom(FloorNumber*100);// as firts floor will be on zeroth Index
    else
    cout<<"Floor Number is Incorrect";
}
void Hotel::bookRoom1(){ // to reserve rooms

int FloorNumber;
	cout<<"On which Floor Do you want to Book Your Room";
	cin>>FloorNumber;

			F[FloorNumber-1].getRoom1(FloorNumber*100);// as firts floor will be on zeroth Index
}

void Hotel::CheckinRoom(){
  int checkin;
  int floornumber;
  cout<<"Press 1 if your Room has already been rerved and you want to checkin\n";
  cout<<"Press 2 to book Room\n";
  cin>>checkin;
  if(checkin==2){
    bookRoom1();
  }
  if(checkin==1){
    cout<<"On which floor you have reserved the room\n";
    cin>>floornumber;
    F[floornumber-1].SetCheckin(floornumber);// it means room is reserved we have to just check in
  }
