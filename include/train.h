// Copyright 2021 by idpas
#pragma once
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
  bool light;
 public:
  Cage* next;
  Cage* prev;
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
  void change() { light = !light; }
};

class Train {
  Cage* first;
  Cage* last;
 public:
  Train();
  void get_state();
  void add_cage(Cage*);
  int get_length();
};

#endif  // INCLUDE_TRAIN_H_
