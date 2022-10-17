#include "../Netwrok/Stream/OutputStream.h"
#include "../Netwrok/Stream/InputStream.h"

#pragma once

class SimpleObject {
 public:
  SimpleObject(int value) : value_(value) {}

 public:
  void serialize(OutputStream& stream) const {
    stream.write(value_);
  }
  static void deserialize(InputStream& stream) {
    value_ = stream.read<int>();
  }

 private:
  int value_;
};
