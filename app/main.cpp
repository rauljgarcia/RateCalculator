#include <iostream>
#include "../code/RateCalc.h"
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main(){
RateCalc myCalc;

int choice;
double phFee, postFee, total;

do {
    for (int i=0; i<20; i++){
        cout<<"\n";
    }
    cout<<UNDERLINE<<"Co-Funder Cost Sharing Calculator"<<CLOSEUNDERLINE<<endl;
    cout<<"\n";
    cout<<"0. Quit."<<endl;
    cout<<"1. Calculate base rate for one-funder shoot."<<endl;
    cout<<"2. Calculate post-production costs."<<endl;
    cout<<"3. Calculate total shoot costs."<<endl;
    cout<<"4. Calculate total shoot costs - Multi-funder unequal split."<<endl;

    cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"Ending."<<endl;
        return  0;

    case 1:
        cout<<UNDERLINE<<"Calculating Base Rate:"<<CLOSEUNDERLINE<<endl;
        cout<<"How many parties are equally cost-sharing the shoot?"<<endl;
        int parties;
        cin>>parties;
        phFee = myCalc.BaseRate(parties);
        cout<<"Base rate is: $"<<phFee<<endl;
        return 0;

    case 2:
        cout<<UNDERLINE<<"Calculating Post-Production Costs:"<<CLOSEUNDERLINE<<endl;
        postFee = myCalc.PoProdFee();
        cout<<"Post-production costs are: $"<<postFee<<endl;
        return 0;

    case 3:
        cout<<UNDERLINE<<"Calculating Total Shoot Costs:"<<CLOSEUNDERLINE<<endl;
        total = myCalc.TotalCost();
        return 0;

    case 4:
        cout<<UNDERLINE<<"Calculating Total Shoot Costs - Multi-funded:"<<CLOSEUNDERLINE<<endl;
        total = myCalc.TotalCost();
        return 0;

    default:
        cout<<"Please enter choice or 0 to quit"<<endl;
        break;
    }
}
while(choice != 0);

return 0;
}