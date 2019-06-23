#include <iostream>

int main()
{
	long i = 0;
	bool isprime = true;
	while (true)
	{
		i++;
		for (long j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				isprime = false;
				break;
			}
			else
			{
				isprime = true;
			}
		}

		if (isprime) {
			//std::cout << "Prime: " << i << "\r\n";
			printf("Prime: %d.\r\n", i);
		}
	}
	return 0;

}