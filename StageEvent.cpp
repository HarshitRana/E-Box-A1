#include <iostream>
#include "Event.h"
using namespace std;
class StageEvent :  public Event{
    private:
        int noOfSeats;
    public:
         
         StageEvent(){}
         StageEvent(string name, string detail, string type, string organiser , int noOfSeats):Event(name,detail,type,organiser){
             setNoOfSeats(noOfSeats);
         }
        void setNoOfSeats(int noOfSeats){
            this->noOfSeats = noOfSeats;
        }
        int getNoOfSeats(){
            return this->noOfSeats;
        }
        void display(){
             
             cout<<"Name : "<<getName()<<endl; cout<<"Detail : "<<getDetail()<<endl; cout<<"Type : "<<getType()<<endl; cout<<"Organiser : "<<getOrganiser()<<endl; 
    		cout<<"No of Seats : "<<noOfSeats<<endl;
        }
};
