#ifndef RATECALC_H__
#define RATECALC_H__

#include <memory>
#include <map>
#include <string>
#include <sstream>
#include "Node.h"

using namespace std;

class RateCalc {
    private:

    public:
    RateCalc();

    ~RateCalc();

    shared_ptr<node> InitNode(string client, int shots);

    //calculate baserate single funder, no post-prod fees
    int BaseRate(int parties);

    //calculate baserate single funder, no post-prod fees
    int BaseRate2(int parties);
    
    //calculate post-production fee
    int PoProdFee();

    //calculate total shoot costs, equal split
    int TotalCost();

    //calculate total shoot costs, non-equal split
    int TotalCost2();

};

#endif // RATECALC
