#include "OutputStream.h"

void OutputStream::write(const char *str) {
  content_.append(str);
}

void OutputStream::write(const int num) {
  content_.append(std::to_string(num));
}
