// Copyright 2021 by idpas
#include "train.h"
#include <iostream>

Train::Train() {
  first = nullptr;
  last = nullptr;
}

void Train::get_state() {
  Cage* tmp = first;
  int counter = 1;
  std::cout << "Cage's states:   \n";
  while (tmp != last) {
    std::cout << counter << "-" << tmp->get() << "\n";
    tmp = tmp->next;
    counter++;
  }
  std::cout << counter << "-" << tmp->get() << "\n";
}

void Train::add_cage(Cage* cg) {
  last->next = cg;
  first->prev = cg;
  cg->prev = last;
  cg->next = first;
  last = cg;
}

int Train::get_length() {}  // TODO
