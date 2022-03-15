int main(void)
{
	int x = get_int("Number: ");
	int multiplier = get_int("Multiplier: ");
	int y = multiply(x, multiplier);
	printf("%i times %i is %i", x, multiplier, y);
}


int multiply(int x, int multiplier, bool division)
{
	if (division)
	{
		return x / multiplier;
	}
		
	return x * multiplier;
}

