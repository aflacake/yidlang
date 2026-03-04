#include "YidlangCLI.hpp"

int main(int argc, char* argv[]) {

    if (argc < 2) {
        return 1;
    }

    YidlangCLI cli;
    return cli.run(argv[1]);
}