#include<iostream>
using namespace std;

void showMenu() {

   cout << "***********MENU**************"<<endl;
    cout<<"1. CHECK balance "<<endl;
    cout<<"2.DEPOSITE "<<endl;
    cout<<"3.Withdrw "<<endl;
    cout<<"4. EXit  "<<endl;
    cout<<"******************************"<<endl;

}

int main(){

    //check balance,deposite , withdraw, showmenu//
    int option;
    double balance=500;

do{
    showMenu() ;
    cout<<"Option:"<<endl;
    cin>>option;

    switch (option)
    
    {
    case 1:cout<< "Balance is:"<< balance<<  endl;
     break;
    case 2:"DepositeAmount:";
    double depositAmount;
    cin>>depositAmount;
    balance +=depositAmount;
    break;
case 3:"WithdrawAmount:";
    double WithdrawAmount;
    cin>>WithdrawAmount;
    balance -=WithdrawAmount;
    break;
if(WithdrawAmount<balance)
 balance -=WithdrawAmount;
 else
     cout << " Not enough Money:"<<endl;
     break;

    }
}while(option !=4);




return 0;
// system("pause>0");

}