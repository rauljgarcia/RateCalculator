#include <iostream>
#include "RateCalc.h" 

using namespace std;

RateCalc::RateCalc(){
}

RateCalc::~RateCalc(){
}

int RateCalc::BaseRate(){
    int photofee, asstfee, travelcosts, baserate;
    
    cout<<"\nEnter Photo Fee:"<<endl;
    cin>>photofee;
    cout<<"Enter the Assistant Fee:"<<endl;
    cin>>asstfee;
    cout<<"Enter the Travel Costs:"<<endl;
    cin>>travelcosts;
    baserate = photofee + asstfee + travelcosts;
    // cout<<"\nBase cost is: $"<<baserate<<endl;
    cout<<endl;
    return baserate;
}

int RateCalc::PoProdFee(){
    float hourate, hours, pproduction;
    int images;

    cout<<"\nEnter hourly post-production rate:"<<endl;
    cin>>hourate;
    cout<<"\nEnter estimated hours per image:"<<endl;
    cin>>hours;
    cout<<"\nEnter number of images for project:"<<endl;
    cin>>images;
    pproduction = (hourate * hours) * images;
    // cout<<"\nPost-production fee is: $"<<pproduction<<endl;
    cout<<endl;
    return pproduction;
}

int RateCalc::TotalCost1(){
    float p1, p2, total;


    p1 = BaseRate();
    p2 = PoProdFee();
    total = p1 + p2;
    
    return total;
}