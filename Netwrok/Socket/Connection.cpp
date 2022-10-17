#include "Connection.h"

Connection::Connection() {
  socket_ = socket(PF_INET, SOCK_DGRAM, 0);
}

void Connection::listenPort(const char *port) const {
  addrinfo *addrinfo;
  getaddrinfo(LOCAL_HOST, port, nullptr, &addrinfo);
  if ( !bind(socket_, addrinfo->ai_addr, addrinfo->ai_addrlen) ) {
    throw std::runtime_error("failed to bind to port " + std::string(port));
  }

  if ( !listen(socket_, BACKLOG) ) {
    throw std::runtime_error("failed to listen to port " + std::string(port));
  }

  std::cout << "start listening at port " + std::string(port) + "..." << std::endl;
}

void Connection::sendMessage(const char *msg) const {
  if ( !send(socket_, msg, strlen(msg), 0) ) {
    throw std::runtime_error("failed to send message " + std::string(msg));
  }

  std::cout << "start sending message..." << std::endl;
}


