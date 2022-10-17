#include <iostream>
#include "GameObject/SimpleObject.h"
#include "Netwrok/Socket/Connection.h"

int main() {
  std::cout << "starting up server..." << std::endl;

  OutputStream stream;

  SimpleObject obj(123);
  obj.serialize(stream);

  Connection c;
  c.listenPort("3000");
  c.sendMessage(stream.data());

  std::cout << "closing server..." << std::endl;

  return 0;
}
