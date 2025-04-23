char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
int	i;
int	j;

i = 0;
j = 0;
while (dest[i])
	 i++;
while (j < nb && src[j] )
{
	dest[i+j] = src[j];
	j++;	
}
dest[i+j] = '\0';
return (dest);
}
#include<stdio.h>
int main(int argc, char **argv)
{
	if (argc != 4)
	return 1;
	printf("%s %s %d",ft_strncat(argv[1], argv[2],argv[3])）;
	return 0;
}
