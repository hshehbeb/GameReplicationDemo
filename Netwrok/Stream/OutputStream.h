#include <string>

#pragma once

class OutputStream {
 public:
  void write(const char* str);
  void write(int num);

  const char* data() { return content_.data(); }

 private:
  std::string content_; // todo: string is too excessive for bandwidth
};

