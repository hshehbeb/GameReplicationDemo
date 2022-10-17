#include <sys/socket.h>
#include <string>
#include <netdb.h>
#include <stdexcept>
#include <iostream>

#pragma once

#define BACKLOG 10
#define LOCAL_HOST "127.0.0.1"

class Connection {
 public:
  Connection();

 public:
  void listenPort(const char* port) const; // move to constcor ???
  void sendMessage(const char* msg) const;

 private:
  int socket_;
};
