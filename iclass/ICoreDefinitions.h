#pragma once

#include <vector>
#include <CryptoNote.h>
#include <CryptoTypes.h>
//#include <Serialization/ISerializer.h>

namespace CryptoNote {

struct BlockFullInfo : public RawBlock {
  Crypto::Hash block_id;
};

struct TransactionPrefixInfo {
  Crypto::Hash txHash;
  TransactionPrefix txPrefix;
};

struct BlockShortInfo {
  Crypto::Hash blockId;
  BinaryArray block;
  std::vector<TransactionPrefixInfo> txPrefixes;
};

void serialize(BlockFullInfo&, ISerializer&);
void serialize(TransactionPrefixInfo&, ISerializer&);
void serialize(BlockShortInfo&, ISerializer&);

}
