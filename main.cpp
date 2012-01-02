#include <iostream>
#include "include/Core.h"
//#include "gtest/gtest.h"

using namespace std;

int main(int argc, char **argv) {
  //testing::InitGoogleTest(&argc, argv);
  //RUN_ALL_TESTS();

  Core *core = new Core();
  core->startGame();
  delete core;

  return 0;
}
