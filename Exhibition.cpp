#include <iostream>
#include "Event.h"
using namespace std;
class Exhibition : public Event{
    private:
        int noOfStalls;
    public:
    
    Exhibition(){}
     Exhibition(string name, string detail, string type, string  organiser , int noOfStalls):Event(name,detail,type,organiser){
            setNoOfStalls(noOfStalls);
        }
    
        void setNoOfStalls(int noOfStalls){
            this->noOfStalls = noOfStalls;
        }
        int getNoOfStalls(){
            return this->noOfStalls;
        }
        void display(){
             
             cout<<"Name : "<<getName()<<endl; cout<<"Detail : "<<getDetail()<<endl; cout<<"Type : "<<getType()<<endl; cout<<"Organiser : "<<getOrganiser()<<endl; cout<<"No of Stalls : "<<noOfStalls<<endl;
        }
};
