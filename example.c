#include <stdio.h>
#include <unit_test.h>

unit_test(test_example)
{
				int a = 1;
				printf("test a = %d\n", a);
				test_assert(a == 1);
}

test_file_end
