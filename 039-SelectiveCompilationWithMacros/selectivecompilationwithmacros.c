#include <stdio.h>

// Macro for debug printing
#ifdef DEBUG
#define debugPrint(msg) printf("Debug: %s\n", msg)
#else
#define debugPrint(msg)
#endif

int main() {
    debugPrint("This is a debug message");

    return 0;
}
