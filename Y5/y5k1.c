/*
 * Convert decimal to roman number
 * 1000 - M
 * 500  - D
 * 100  - C
 * 50   - L
 * 10   - X
 * 5    - V
 * 1    - I
 */

#include <stdio.h>

int
main(void)
{
        int decimal;

        printf("Enter Decimal Value : ");
	fflush(stdout);
        scanf("%d", &decimal);

        printf("The Roman Numeric form of %d is: ", decimal);
        while (decimal / 1000)  { putchar('M'); decimal -= 1000; }
        while (decimal / 500)   { putchar('D'); decimal -= 500;  }
        while (decimal / 100)   { putchar('C'); decimal -= 100;  }
        while (decimal / 50)    { putchar('L'); decimal -= 50;   }
        while (decimal / 10)    { putchar('X'); decimal -= 10;   }
        while (decimal / 5)     { putchar('V'); decimal -= 5;    }
        while (decimal / 1)     { putchar('I'); decimal -= 1;    }
        putchar('\n');

        return 0;
}
