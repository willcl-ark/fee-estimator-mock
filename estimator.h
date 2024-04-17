#ifndef BITCOIN_ESTIMATOR_H
#define BITCOIN_ESTIMATOR_H

#include <vector>
#include <memory>
#include "forcaster.h"

class FeeEstimator {
private:
    std::vector<std::shared_ptr<Forcaster>> forecasters;

public:
    void registerForcaster(std::shared_ptr<Forcaster> forcaster);
    double calculateFee(int transactionSize, int targetBlocks);
};

#endif // BITCOIN_ESTIMATOR_H
