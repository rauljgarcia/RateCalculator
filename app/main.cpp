#include <iostream>
#include "../code/RateCalc.h"
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main(){
RateCalc myCalc;
bool quit = false;
int choice;
double phFee, postFee, total;

while (!quit){

    cout<<UNDERLINE<<"Please choose from options below"<<CLOSEUNDERLINE<<endl;
    cout<<"\n";
    cout<<"0. Quit."<<endl;
    cout<<"1. Calculate base rate for one-funder shoot."<<endl;
    cout<<"2. Calculate post-production costs."<<endl;
    cout<<"3. Calculate total shoot costs - 1+ cost-sharing partners, equal split."<<endl;
    cout<<"4. Calculate total shoot costs - 2+ cost-sharing partners, unequal split."<<endl;

    cin>>choice;

    switch (choice)
    {
    case 0: quit = true;
        cout<<"Ending."<<endl;
        break;

    case 1:
        cout<<UNDERLINE<<"Calculating Base Rate:"<<CLOSEUNDERLINE<<endl;
        cout<<"How many parties are equally cost-sharing the shoot?"<<endl;
        int parties;
        cin>>parties;
        phFee = myCalc.BaseRate(parties);
        cout<<"Base rate is: $"<<phFee<<endl;
        break;

    case 2:
        cout<<UNDERLINE<<"Calculating Post-Production Costs:"<<CLOSEUNDERLINE<<endl;
        postFee = myCalc.PoProdFee();
        cout<<"Post-production costs are: $"<<postFee<<endl;
        break;

    case 3:
        cout<<UNDERLINE<<"Calculating Total Shoot Costs:"<<CLOSEUNDERLINE<<endl;
        total = myCalc.TotalCost();
        break;

    case 4:
        cout<<UNDERLINE<<"Calculating Total Shoot Costs:"<<CLOSEUNDERLINE<<endl;
        total = myCalc.TotalCost2();
        break;

    default:
        cout<<"Please enter choice or 0 to quit"<<endl;
        break;
    }
    }
}