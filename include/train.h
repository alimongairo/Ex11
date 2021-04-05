#pragma once
// Copyright 2021 by idpas
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
  bool light;  // ���� (���/����)
 public:
  Cage* next;  // ��������� �����
  Cage* prev;  // ���������� �����
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
};

class Train {
  Cage* first;  // ��������� �� ������ �����
  Cage* last;   // ��������� �� ��������� �����
};

#endif  // INCLUDE_TRAIN_H_
