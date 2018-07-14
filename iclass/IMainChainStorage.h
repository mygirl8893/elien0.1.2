#pragma once 

#include <CryptoNote.h>

namespace CryptoNote {

class IMainChainStorage {

public:

  virtual ~IMainChainStorage() { }

  virtual void pushBlock(const RawBlock& rawBlock) = 0;
  virtual void popBlock() = 0;

  virtual RawBlock getBlockByIndex(uint32_t index) const = 0;
  virtual uint32_t getBlockCount() const = 0;

  virtual void clear() = 0;
};

}
