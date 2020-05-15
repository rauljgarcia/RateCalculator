#include <iostream>
#include "../code/RateCalc.h"
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main(){
RateCalc myCalc;

int choice;


do {
    for (int i=0; i<20; i++){
        cout<<"\n";
    }
    cout<<UNDERLINE<<"Co-Funder Cost Sharing Calculator"<<CLOSEUNDERLINE<<endl;
    cout<<"\n";
    cout<<"0. Quit."<<endl;
    cout<<"1. Calculate one-funder shoot."<<endl;

    cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"Ending."<<endl;
        return  0;

    case 1:
        myCalc.BaseRate();
        return 0;
    }
}
while(choice != 0);

return 0;
}