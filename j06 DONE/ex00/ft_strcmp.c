int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] != '\0')
		result = -1 * s2[i];
	else if (s2[i] == '\0' && s1[i] != '\0')
			result = s1[i];
	else
		result = s1[i] - s2[i];
	return (result);
}
