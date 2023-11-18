int print_string(char *str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);  /*Return the length of "(null)"*/
	}

	int len = 0;

	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
