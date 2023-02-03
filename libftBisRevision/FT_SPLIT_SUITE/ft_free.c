static void	ft_free(char **new)
{
	int	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
			i++;
	}
	free(new);
}