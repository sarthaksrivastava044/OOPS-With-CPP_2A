#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int acnum;
    string name;
    int balance;
    public:
    BankAccount(int num,string n,int b){
        acnum=num;
        name=n;
        balance=b;
    }
    friend void CompareBalance(const BankAccount b1, const BankAccount b2);
};
void CompareBalance(const BankAccount b1, const BankAccount b2){
    if(b1.balance>b2.balance)
    {
    cout<<"Account holder details ->"<<endl;
    cout<<"Account number"<<b1.acnum<<" Name"<<b1.name;
    }else
    {
         cout<<"Account holder details ->"<<endl;
    cout<<"Account number"<<b2.acnum<<" Name"<<b2.name;
    }

}
int main(){
    BankAccount b1(123,"Tanishque",1200);
    BankAccount b2(21,"Sarthak",1000);
    CompareBalance(b1,b2);
}