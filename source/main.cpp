#include "fx-collection-rs_bindings.h"

using namespace ha::fx_collection_rs::trance_gate;

int main() {
  auto tg = tg_create();
  tg_destroy(tg);

  return 0;
}