#include <iostream>
#include <stdlib.h>
#include "pw_generation.h"

int main()
{
    bool end = 1;
    pw_generation Test;

    while(end)
    {
        Test.createPassword();
    }

    return EXIT_SUCCESS;
}