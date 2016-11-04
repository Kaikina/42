int		ft_count_if(char **tab, int(*f)(char *))
{
	int		r;
	int 	i;

	while (tab[i] != '\0') 
	{
		if (f(tab[i]) == 1)
			r++;
	}
	return (r);
}
