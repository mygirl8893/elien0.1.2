#pragma once

#include <cstdint>

namespace CryptoNote {

class IUpgradeManager {

public:

  virtual ~IUpgradeManager() {}

  virtual void addMajorBlockVersion(uint8_t targetVersion, uint32_t upgradeHeight) = 0;
  virtual uint8_t getBlockMajorVersion(uint32_t blockIndex) const = 0;
};

}
