#include <iostream>
#include "../code/RateCalc.h"
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main(){
RateCalc myCalc;

int choice;
float total1, total2, total3;


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

    cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"Ending."<<endl;
        return  0;

    case 1:
        cout<<"Calculating base rate."<<endl;
        total1 = myCalc.BaseRate();
        cout<<"Base rate is: $"<<total1<<endl;
        return 0;

    case 2:
        cout<<"Calculating post-production costs."<<endl;
        total2 = myCalc.PoProdFee();
        cout<<"Post-production costs are: $"<<total2<<endl;
        return 0;

    case 3:
        cout<<"Calculating total shoot costs."<<endl;
        total3 = myCalc.TotalCost1();
        cout<<"Total shoot costs (with no cost-sharing partners) are: $"<<total3<<endl;
        return 0;
    
    default:
        cout<<"Please enter choice or 0 to quit"<<endl;
        break;
    }
}
while(choice != 0);

return 0;
}