#pragma once

#include <vector>

#include "ITransactionPool.h"

namespace Crypto {
struct Hash;
}

namespace CryptoNote {

class ITransactionPoolCleanWrapper: public ITransactionPool {

public:

  virtual ~ITransactionPoolCleanWrapper() {}

  virtual std::vector<Crypto::Hash> clean() = 0;
};

} //namespace CryptoNote
