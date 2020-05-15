#include <iostream>
#include "RateCalc.h" 

using namespace std;

RateCalc::RateCalc(){
}

RateCalc::~RateCalc(){
}

void RateCalc::BaseRate(){
    int photofee, asstfee, travelcosts;

    cout<<"\nEnter Photo Fee:"<<endl;
    cin>>photofee;
    cout<<"Enter the Assistant Fee:"<<endl;
    cin>>asstfee;
    cout<<"Enter the Travel Costs:"<<endl;
    cin>>travelcosts;
    int baserate = photofee + asstfee + travelcosts;
    cout<<"\nBase rate is: $"<<baserate<<endl;
    cout<<endl;
    return;
}
