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
  if(first == nullptr) {
    first = cg;
    last = cg;
    cg->next = cg;
    cg->prev = cg;
    return;
  }
  last->next = cg;
  first->prev = cg;
  cg->prev = last;
  cg->next = first;
  last = cg;
}

int Train::get_length() {
  if (first != nullptr) {
    int len;
    int count = 1;
    Cage* tmp = first;
    bool start_state = first->get();
    while (true) {
      if (tmp->get() != start_state) {
        len = count;
        tmp->change();
        for (int i = 0; i < count; i++) {
          tmp = tmp->prev;
        }
        count = 1;
        if (tmp->get() != start_state) return len;
      } else {
        count++;
        tmp = tmp->next;
      }
    }
  }
  return 0;
}
