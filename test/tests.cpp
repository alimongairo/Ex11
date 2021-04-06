// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(Train, test_1) {
  Train tr;
  size_t expected = 0;
  size_t result = tr.get_length();
  EXPECT_EQ(expected, result);
}

TEST(Train, test_2) {
  Train tr;
  for (int i = 0; i < 10; i++) {
    Cage* cg = new Cage();
    tr.add_cage(cg);
  }
  size_t expected = 10;
  size_t result = tr.get_length();
  EXPECT_EQ(expected, result);
}

TEST(Train, test_3) {
  Train tr;
  for (int i = 0; i < 10; i++) {
    Cage* cg = new Cage();
    tr.add_cage(cg);
  }
  Cage* cg_2 = new Cage();
  tr.add_cage(cg_2);
  size_t expected = 11;
  size_t result = tr.get_length();
  EXPECT_EQ(expected, result);
}
