#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char names[5][20];
    int marks[5][3];
    double totals[5];
    double averages[5];
    int big=totals[0];
    string stud;
 
    cout<<"Enter Name of the students: "<<endl;
    for (int i = 0; i<5; i++) {
        cout<<"Enter name:";
        cin.getline(names[i], 20);
    }

    
    cout<<"\nEnter Student Mark: "<<endl;
    for (int i = 0; i <5; i++) {
        totals[i] = 0;
        cout<<"Enter 3 marks for " << names[i] << endl;
        for (int j = 0; j <3; j++) {
            cout<<"Mark: ";
            cin>>marks[i][j];
            totals[i] += marks[i][j]; 
        }

      averages[i] =((totals[i])/3);

    }

  
    cout<<setw(20)<<"Name";
    cout<<setw(6)<<"M1";
    cout<<setw(6)<<"M2";
    cout<<setw(6)<<"M3";
    cout<<setw(6)<<"Total";
    cout<<setw(10)<<"Avg"<<endl;
    

    for (int i = 0; i<5; i++) {
        cout<<setw(20)<<names[i];
        cout<<setw(6)<<marks[i][0];
        cout<<setw(6)<<marks[i][1];
        cout<<setw(6)<<marks[i][2];
        cout<<setw(6)<<totals[i];
        cout<<setw(10)<<averages[i]<<endl;
    }


     for(int i=0;i<5;i++){
         if(totals[i]>big){
             big=totals[i];
             stud=names[i];
         }
     }

cout<<"Top student: "<<stud;
    
    return 0;
}

