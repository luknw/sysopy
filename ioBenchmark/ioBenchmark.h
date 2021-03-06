//
// Created by luknw on 3/18/17.
//

#ifndef IOBENCHMARK_MAIN_H
#define IOBENCHMARK_MAIN_H

typedef struct argp argp;
typedef struct argp_option argp_option;
typedef struct argp_state argp_state;

typedef struct Arguments Arguments;


typedef enum Action {
    GENERATE,
    SHUFFLE,
    SORT
} Action;

typedef enum ActionProvider {
    LIBRARY,
    SYSTEM
} ActionProvider;


struct Arguments {
    Action action;
    ActionProvider provider;
    size_t recordCount;
    size_t recordSize;
    char *filePath;
};


void generate(size_t recordCount, size_t recordSize, char *filePath);

void libShuffle(size_t recordCount, size_t recordSize, char *filePath);

void sysShuffle(size_t recordCount, size_t recordSize, char *filePath);

void libSort(size_t recordCount, size_t recordSize, char *filePath);

void sysSort(size_t recordCount, size_t recordSize, char *filePath);


#endif //IOBENCHMARK_MAIN_H_H
