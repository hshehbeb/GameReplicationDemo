cmake_minimum_required(VERSION 3.22)
project(GameReplicationDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameReplicationDemo main.cpp Netwrok/Socket/Connection.cpp Netwrok/Socket/Connection.h Netwrok/Stream/OutputStream.cpp Netwrok/Stream/OutputStream.h GameObject/SimpleObject.h Netwrok/Stream/InputStream.cpp Netwrok/Stream/InputStream.h)
