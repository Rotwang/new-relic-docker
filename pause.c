#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void handler(int signum) {
    exit(0);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, handler);
    signal(SIGTERM, handler);
    pause();
    return 0;
}
