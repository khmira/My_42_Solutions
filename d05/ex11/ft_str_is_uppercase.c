int	ft_str_is_uppercase(char *str)
{
	int tmp;
	int i;
	i = 0;
	tmp = 0;

	if(str[0] == '\0')
		return (1);

	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			tmp++;
		else if((str[i] > 32 && str[i] < 65) || str[i] > 90)
		{
			tmp = 0;
			break;
		}
		i++;
	}
	if(tmp > 0)
		return (1);
	else
		return (0);
}


	
