#include "kernel/types.h"
#include "user.h"


int main(int argc, char** argv)
{
    if (argc < 2)
    {
        fprintf(2, "Usage: sleep <time in seconds>\n");
        exit(1);
    }
    int time_in_seconds = atoi(argv[1]);
    sleep(time_in_seconds * 10);

    exit(0);
}