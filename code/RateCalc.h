#ifndef RATECALC_H__
#define RATECALC_H__

#include <memory>
using namespace std;

class RateCalc {
    private:

    public:
    RateCalc();

    ~RateCalc();

    //calculate baserate single funder, no post-prod fees
    int BaseRate(int parties);
    
    //calculate post-production fee
    int PoProdFee();

    //calculate total shoot costs, not cost-shared
    int TotalCost();

};

#endif // RATECALC
