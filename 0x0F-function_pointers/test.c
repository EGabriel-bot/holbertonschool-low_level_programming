	int i;

	
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}

	if(cmp(i) != array[i])
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	return (i);
}



	int i;

	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	if (size <= 0)
	{
		return (-1);
	}

	return (i);

