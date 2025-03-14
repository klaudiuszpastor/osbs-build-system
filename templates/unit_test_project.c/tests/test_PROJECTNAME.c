#include "PROJECTNAME.h"
#include <assert.h>

// Function to run unit tests
void runTests(void) {
    printf("Running unit tests...\n");
    exampleFunction();
    assert(1 && "Dummy test");
    printf("All tests passed successfully.\n");
}

int main(void) {
    runTests();
    return 0;
}

