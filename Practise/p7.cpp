#include <bits/stdc++.h>
using namespace std;
class Patient{
    public:
    int id;
    string name;
    static int activePatient;
    Patient(string n,int ID){
        activePatient++;
        name=n;
        id=ID;
    }
    static void ShowActivePatients(){
     cout<<"cuurent patient"<<activePatient<<endl;
    }
    ~Patient(){
        cout<<activePatient--<<endl;
    }

};
int Patient::activePatient=0;
int main(){
    Patient pt("Tanishque",123);
    Patient p("Sarthak",100);
    Patient::ShowActivePatients();

}