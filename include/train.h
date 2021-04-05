#pragma once
// Copyright 2021 by idpas
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
  bool light;  // Свет (вкл/выкл)
 public:
  Cage* next;  // следующий вагон
  Cage* prev;  // предыдущий вагон
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
};

class Train {
  Cage* first;  // указатель на первый вагон
  Cage* last;   // указатель на последний вагон
 public:
  Train();
  void get_state();
  void add_cage(Cage*);
  int get_length();
};

#endif  // INCLUDE_TRAIN_H_
