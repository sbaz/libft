

#include "libft.h"

int		ft_isalpha(int c)
{
	return (((65 <= c) && (90 >= c)) || ((97 <= c) && (122 >= c)));
}
