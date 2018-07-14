#pragma once
#include <cstdint>

namespace CryptoNote {

class ICoreInformation {

public:

  virtual ~ICoreInformation() {}

  virtual size_t getPoolTransactionCount() const = 0;
  virtual size_t getBlockchainTransactionCount() const = 0;
  virtual size_t getAlternativeBlockCount() const = 0;
  virtual uint64_t getTotalGeneratedAmount() const = 0;
  virtual std::vector<BlockTemplate> getAlternativeBlocks() const = 0;
  virtual std::vector<Transaction> getPoolTransactions() const = 0;
};

}
