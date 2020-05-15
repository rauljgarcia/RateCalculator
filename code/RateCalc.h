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
    void BaseRate();
};

#endif // RATECALC
