
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main(void)
{
	
	printf("\n\033[0;32mTesting characters\033[0m\n");
	char	x = 'a';

	printf("%i\n", printf("ORIG: print a: %c\n", x));
	ft_printf("%i\n", ft_printf("MINE: print a: %c\n", x));
	
	printf("%i\n", printf("ORIG: print a + 250: %c\n", x + 250));
	ft_printf("%i\n", ft_printf("MINE: print a + 250: %c\n", x + 250));

//	strings
	printf("\n\033[0;32mTesting strings\033[0m\n");
	char	str[] = "this here %";
	char	str1[] = "";
	char    *str2 = NULL;

	printf("%i\n", printf("ORIG: %s\n", str));
	ft_printf("%i\n", ft_printf("MINE: %s\n", str));
	printf("%i\n", printf("ORIG: Empty string: %s\n", str1));
	ft_printf("%i\n", ft_printf("MINE: Empty string: %s\n", str1));
	printf("%i\n", printf("ORIG: Null param: |%s|\n", str2));
	ft_printf("%i\n", ft_printf("MINE: Null param: |%s|\n", str2));

//	integers
	printf("\n\033[0;32mTesting integers\033[0m\n");

	int m = 0x28;
	int	t = 0;
	int	neg = -40;
	char	c = 'a';
	int	max = 2147483647;
	int min = -2147483648;

	printf("%i\n", printf("ORIG: 0x28, 40, -40, a, max and min with i: %i, %i, %i, %i, %i, %i\n", m, t, neg, c, max, min));
	ft_printf("%i\n", ft_printf("MINE: 0x28, 40, -40, a, max and min with i: %i, %i, %i, %i, %i, %i\n", m, t, neg, c, max, min));
	printf("%i\n", printf("ORIG: 0x28, 40, -40, a, max and min with d: %d, %d, %d, %d, %d, %d\n", m, t, neg, c, max, min));
	ft_printf("%i\n", ft_printf("MINE: 0x28, 40, -40, a, max and min with d: %d, %d, %d, %d, %d, %d\n", m, t, neg, c, max, min));
	printf("%i\n", printf("ORIG: 0x28, 40, -40, a, max and min with u: %u, %u, %u, %u, %u, %u\n", m, t, neg, c, max, min));
	ft_printf("%i\n", ft_printf("MINE: 0x28, 40, -40, a, max and min with u: %u, %u, %u, %u, %u, %u\n", m, t, neg, c, max, min));
	printf("%i\n", printf("ORIG: string %i%s\n", t, str));
	ft_printf("%i\n", ft_printf("MINE: string %i%s\n", t, str));


//	unsigned
	printf("\n\033[0;32mTesting u\033[0m\n");
	printf("%i\n", printf("ORIG: 0x28, 0, -40, a, max and min with u: %u, %u, %u, %u, %u, %u\n", m, t, neg, c, max, min));
	ft_printf("%i\n", ft_printf("MINE: 0x28, 0, -40, a, max and min with u: %u, %u, %u, %u, %u, %u\n", m, t, neg, c, max, min));

	printf("%i\n", printf("ORIG: Return value of printf with -40 and new line using u: %u\n", printf("%u\n", neg)));
    ft_printf("%i\n", ft_printf("MINE: Return value of printf with -40 and new line using u: %u\n", printf("%u\n", neg)));

//  pointer
    printf("\n\033[0;32mTesting pointers\033[0m\n");
    int i = 200;

    printf("%i\n", printf("ORIG: a few pointers: %p, %p, %p, %p\n", &i, &t, &neg, str2));
    ft_printf("%i\n", ft_printf("MINE: a few pointers: %p, %p, %p, %p\n", &i, &t, &neg, str2));
    printf("%i\n", printf("ORIG: return value for above pointer + new line: %i", printf("%p\n", str2)));
    ft_printf("%i\n", ft_printf("MINE: return value for above pointer + new line: %i", printf("%p\n", str2)));

//	hexadecimals
printf("\n\033[0;32mTesting hexadecimals\033[0m\n");

	printf("%i\n", printf("ORIG: 0x28, 40, -40, a, max and min with x: %x, %x, %x, %x, %x, %x\n", m, t, neg, c, max, min));
	ft_printf("%i\n", ft_printf("MINE: 0x28, 40, -40, a, max and min with x: %x, %x, %x, %x, %x, %x\n", m, t, neg, c, max, min));
	printf("%i\n", printf("ORIG: 0x28, 40, -40, a, max and min with X: %X, %X, %X, %X, %X, %X\n", m, t, neg, c, max, min));
    ft_printf("%i\n", ft_printf("MINE: 0x28, 40, -40, a, max and min with X: %X, %X, %X, %X, %X, %X\n", m, t, neg, c, max, min));


// %
	printf("\n\033[0;32mTesting percent sign\033[0m\n");
	
	printf("%i\n", printf("ORIG: here is a %% sign\n"));

	ft_printf("%i\n", ft_printf("MINE: here is a %% sign\n"));


	return (0);
}
