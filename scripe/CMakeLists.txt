cmake_minimum_required(VERSION 3.6)
project(scripe)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wpedantic")

set(SOURCE_FILES
        main.c
        libsafe/safe.h
        libsafe/safeAlloc.c libsafe/safeAlloc.h
        libsafe/safeIO.c libsafe/safeIO.h
        liblinkedlist/linkedList.c liblinkedlist/linkedList.h
        libhashmap/hashMap.c libhashmap/hashMap.h)

add_executable(scripe ${SOURCE_FILES})

#add_executable(environTester environTester.c)
#
#add_executable(timeLimitTester timeLimitTester.c)
