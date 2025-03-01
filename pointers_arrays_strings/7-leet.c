/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	while (str[i])
	{
		for (j = 0; letters[j]; j++)
			if (str[i] == letters[j])
				str[i] = leet_nums[j];
		i++;
	}

	return (str);
}
