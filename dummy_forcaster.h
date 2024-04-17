#ifndef BITCOIN_DUMMY_FORCASTER_H
#define BITCOIN_DUMMY_FORCASTER_H

#include <utility>
#include "forcaster.h"

class SimpleForcaster : public Forcaster {
public:
    std::pair<double, double> estimate(int transactionSize, int targetBlocks) override;
};

#endif // BITCOIN_DUMMY_FORCASTER_H
