//
// Created by toren on 3/20/19.
//
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv) {

    if (argc < 2) {
        printf(2, "usage: choose policy...\n");
        exit(0);
    }
    if (argc > 2) {
        printf(2, "too many arguments...\n");
        exit(0);
    }
    policy(atoi(argv[1]));
    exit(0);
}
