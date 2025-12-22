#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	void	*p;
	int		x;
	
	x = 42;
	p = &x;

	printf("%d\n", printf("%p eeeeeeeeeeeeeeeeeee", p));
	printf("%d\n", ft_printf("%p eeeeeeeeeeeeeeeeeee", p));

	printf("%d\n", printf("%p", (void *)0));
	printf("%d\n", ft_printf("%p", (void *)0));
	write(1, "\n", 1);

	printf("%d\n", printf("%x\n", 82));
	printf("%d\n", ft_printf("%x\n", 82));

	printf("%d\n", printf("Mi numero es: %x", -1));
	printf("%d\n", ft_printf("Mi numero es: %x", -1));
	write(1, "\n", 1);

	printf("%d\n", printf("Mi numero es: %X", -1));
	printf("%d\n", ft_printf("Mi numero es: %X", -1));
	write(1, "\n", 1);

	printf("%d\n", printf("Mi char es: %c", 'p'));
	printf("%d\n", ft_printf("Mi char es: %c", 'p'));
	write(1, "\n", 1);

	printf("%d\n", printf("Mi int min: %d", INT_MIN));
	printf("%d\n", ft_printf("Mi int min: %d", INT_MIN));
	write(1, "\n", 1);

	printf("%d\n", printf("Mi unsigned: %u", (unsigned int)-62));
	printf("%d\n", ft_printf("Mi unsigned: %u", (unsigned int)-62));
	write(1, "\n", 1);

	printf("%d\n", printf("100%%"));
	printf("%d\n", ft_printf("100%%"));
	write(1, "\n", 1);
}
