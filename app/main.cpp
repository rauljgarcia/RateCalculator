#include <iostream>
#include "../code/RateCalc.h"
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main(){

int choice;

do {
    for (int i=0; i<20; i++){
        cout<<"\n";
    }
    cout<<UNDERLINE<<"Co-Funder Cost Sharing Calculator"<<CLOSEUNDERLINE<<endl;
    cout<<"\n";
    cout<<"0. To quit."<<endl;
    cout<<"1. To start."<<endl;

    cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"Ending."<<endl;
        return  0;

    case 1:
        cout<<"let's go"<<endl;
        break;
    }
}
while(choice != 0);
}