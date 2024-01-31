#include <stdio.h>

// Enumeration declaration
enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    // Enumeration variable
    enum Days today = WED;

    // Switch statement with enumeration
    switch (today) {
        case MON:
        case TUE:
        case WED:
        case THU:
        case FRI:
            printf("It's a weekday.\n");
            break;
        case SAT:
        case SUN:
            printf("It's a weekend.\n");
            break;
    }

    return 0;
}
