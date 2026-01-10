#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"
#include <stdio.h>

Common_NameManglingGuard_Begin

int main()
{
    const UInt8 testingTheCommonLib = 2;
    printf("The test value is: %u\r\n", testingTheCommonLib);
    return 0;
}

Common_NameManglingGuard_End
