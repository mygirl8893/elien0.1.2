#include "AddBlockErrorCondition.h"

namespace CryptoNote {
namespace error {

AddBlockErrorConditionCategory AddBlockErrorConditionCategory::INSTANCE;
//------------------------------------------------------------- Seperator Code -------------------------------------------------------------//
std::error_condition make_error_condition(AddBlockErrorCondition e) {
  return std::error_condition(
      static_cast<int>(e),
      AddBlockErrorConditionCategory::INSTANCE);
}
//------------------------------------------------------------- Seperator Code -------------------------------------------------------------//
}
}
