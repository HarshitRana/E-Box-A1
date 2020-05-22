#include <iostream>
#include <stdlib.h>
#include "Exhibition.cpp"
#include "StageEvent.cpp"
using namespace std;
int main(){
    int choice;
    Exhibition e;
    
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
    string token;
    string exhibitionDetail, stageEventDetail,str;
    string* arr = new string[25]; string *str1;
    cout<<"Choose Event type\n";
    cout<<"1.Exhibition\n";
    cout<<"2.Stage Event\n";
    cin>>choice;
    switch(choice){
        case 1:
        {
            cout<<"Enter the details of Exhibition in CSV format"<<endl; 
    getline(cin>>ws,exhibitionDetail); str=exhibitionDetail;
	str+=","; 
    while ((pos = str.find(delimiter)) != string::npos) {
    token = str.substr(0, pos);
    arr[i]=token;
    str.erase(0, pos + delimiter.length());
    i++;
    }
    
    Exhibition ex(arr[0],arr[1],arr[2],arr[3],stoi(arr[4]));
        ex.display();} break;    
        
        case 2:
        {
            
             cout<<"Enter the details of Stage Event in CSV format"<<endl;
    	 getline(cin>>ws,stageEventDetail); str=stageEventDetail;
         str+=","; 
    while ((pos = str.find(delimiter)) != string::npos) {
    token = str.substr(0, pos);
    arr[i]=token;
    str.erase(0, pos + delimiter.length());
    i++;
    }
    
    StageEvent se(arr[0],arr[1],arr[2],arr[3],stoi(arr[4]));
         se.display();} break; 
         
        default:
            cout<<"Invalid choice\n";
            break;
    }
    return 0;
}
