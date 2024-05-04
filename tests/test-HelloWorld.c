#include <HelloWorld.h>
#include <son8/c/file.h>
#include <son8/c/byte.h>

#define BUFFER_SIZE 64

int main()
{
    char buffer[BUFFER_SIZE];

    char const *testfile = "test-HelloWorld.txt";

    freopen(testfile, "w", stdout);
    HelloWorld();
    fflush(stdout);

    FILE *tmp = fopen(testfile, "r");
    fgets(buffer, BUFFER_SIZE, tmp);
    fclose(tmp);

    buffer[BUFFER_SIZE - 1] = '\0';

    return strcmp(buffer, "Hello, World!\n") != 0;
}
