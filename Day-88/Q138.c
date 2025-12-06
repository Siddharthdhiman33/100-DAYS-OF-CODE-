//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main() {
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };
    for(enum Days d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }
    return 0;
}