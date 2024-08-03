#include "pls.h"

PLS_IMPORT("trivial_cmake_lib", "https://github.com/dkorolev/trivial_cmake_lib");

#include "trivial_cmake_lib_b.h"
#include "trivial_cmake_lib.h"

int trivial_cmake_lib_b() {
  return trivial_cmake_lib_add(100, 100);
}
