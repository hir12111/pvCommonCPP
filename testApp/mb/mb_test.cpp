#include <iostream>
#include <pv/mb.h>

MB_DECLARE_EXTERN(test);
MB_DECLARE(test, 10000);

int main()
{
    MB_INIT;
    
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 10; j++)
            MB_POINT_ID(test, i, j);

    return 0;
}

