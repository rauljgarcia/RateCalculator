#include <iostream>
#include "RateCalc.h" 

using namespace std;

RateCalc::RateCalc(){
}

RateCalc::~RateCalc(){
}

int RateCalc::BaseRate(int parties){
    int fullDays, halfDays;
    float photoFeeFull, totalPhFeeFull, asstFeeFull, totalAsstFull, 
    photoFeeHalf, totalPhFeeHalf, asstFeeHalf, totalAsstHalf, 
    travelCosts, baseRate, mrate, mratep, markup;

    if(parties > 1){
    cout<<"\nEnter the percentage increase for each additional party"<<endl;
    cin>>mrate;
    mratep = mrate/100; 
    markup = (parties - 1) * mratep;
    } else {
        markup = 0;
    }

    cout<<"\nEnter number of full shoot days:"<<endl;
    cin>>fullDays;
    if(fullDays != 0){
        cout<<"\nEnter Photo Fee for full-day:"<<endl;
        cin>>photoFeeFull;
        totalPhFeeFull = fullDays * (photoFeeFull + (photoFeeFull * markup));
        cout<<totalPhFeeFull;

        cout<<"\nEnter the Assistant Fee per full day:"<<endl;
        cin>>asstFeeFull;
        totalAsstFull = fullDays * asstFeeFull;

        } else {
            totalPhFeeFull = 0;
            totalAsstFull = 0;
        }

    cout<<"\nEnter number of half-shoot days:"<<endl;
    cin>>halfDays;
    if(halfDays !=0){
        cout<<"\nEnter Photo Fee for half-day:"<<endl;
        cin>>photoFeeHalf;
        totalPhFeeHalf = halfDays * (photoFeeHalf + (photoFeeHalf * markup));

        cout<<"\nEnter the Assistant Fee per half day:"<<endl;
        cin>>asstFeeHalf;
        totalAsstHalf = halfDays * asstFeeHalf;

        } else {
            totalPhFeeHalf = 0;
            totalAsstHalf = 0;
        }

    cout<<"\nEnter the Travel Costs:"<<endl;
    cin>>travelCosts;
    
    baseRate = (totalPhFeeFull + totalAsstFull + totalPhFeeHalf + totalAsstHalf + travelCosts);
    cout<<baseRate<<endl;

    cout<<endl;
    return baseRate;
}

int RateCalc::PoProdFee(){
    double hourate, hours, pproduction;
    int images;

    cout<<"\nEnter hourly post-production rate:"<<endl;
    cin>>hourate;
    cout<<"\nEnter estimated hours per image:"<<endl;
    cin>>hours;
    cout<<"\nEnter number of images for project:"<<endl;
    cin>>images;
    pproduction = (hourate * hours) * images;
    cout<<endl;
    return pproduction;
}

int RateCalc::TotalCost(){
    int parties;
    double p1, p2, total;

    cout<<"\nEnter number of parties receiving all images"<<endl;
    cin>>parties;

    p1 = BaseRate(parties);
    p2 = PoProdFee();
    total = (p1 + p2)/parties;
    
    if(parties == 1){
        cout<<"Total shoot cost (with no cost-sharing partners) is: $"<<total<<endl;
    } else {
        cout<<"Total shoot cost ("<<parties<<" + parties sharing all images) is: $"<<total<<" /per party"<<endl;
    }
    return total;
}