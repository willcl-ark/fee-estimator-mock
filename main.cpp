#include <iostream>
#include <memory>

#include "dummy_forcaster.h"
#include "estimator.h"

int main() {
    FeeEstimator estimator;
    std::shared_ptr<Forcaster> simpleForcaster = std::make_shared<SimpleForcaster>();

    estimator.registerForcaster(simpleForcaster);
    auto feeRate = estimator.calculateFee(250, 6);

    std::cout << "Estimated Fee Rate: " << feeRate << " sat/vbyte" << std::endl;

    return 0;
}

