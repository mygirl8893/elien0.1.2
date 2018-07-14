#pragma once

#include <vector>
#include <string>
#include <utility>

namespace CryptoNote {

class IReadBatch {

public:

  virtual std::vector<std::string> getRawKeys() const = 0; 
  virtual void submitRawResult(const std::vector<std::string>& values, const std::vector<bool>& resultStates) = 0;
};

} //namespace CryptoNote
