// Copyright 2021 by idpas
#include <iostream>
#include "train.h"

int main() {
  Train tr;
  int r = std::rand() % 10;
  for (int i = 0; i < r; i++) {
    Cage* cg = new Cage();
    tr.add_cage(cg);
  }
  tr.get_state();
  std::cout << tr.get_length();
  return 0;
}
