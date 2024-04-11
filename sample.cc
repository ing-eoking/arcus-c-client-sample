#include "config.hpp"
#include <iostream>
#include <vector>

#include "libmemcached/memcached.h"

using namespace std;

memcached_st *memc;

bool mc_init() {
    memc = memcached_create(NULL);
    if (memc == NULL) return true;
    if (MEMCACHED_SUCCESS != memcached_server_add(memc, "127.0.0.1", 11211))
        return true;
    return false;
}

int main(int argc, char **argv) {
    mc_init();
    return 0;
}