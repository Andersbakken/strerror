#include <errno.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i, err;
    for (i=1; i<argc; ++i) {
        err = atoi(argv[i]);
        if (!err) {
            printf("Can't parse %s\n", argv[i]);
        } else {
            printf("%d => %s\n", err, strerror(err));
        }
    }
    return 0;
}
//asdads

//bar
//bar
