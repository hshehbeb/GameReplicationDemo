#pragma once

typedef char byte;

class InputStream {
 public:
  InputStream(const byte* data) : data_(data), readPtr_(0) {}

  template<class TRet> TRet read();

 private:
  const byte* data_;
  int readPtr_;
};

template <class TInput, class TOutput>
class TypeAliaser {
 public:
  TypeAliaser(TInput input) : input_(input) {}
  TOutput get() { return output_; }

  union {
    TInput  input_;
    TOutput output_;
  };
};
