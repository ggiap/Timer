#include <iostream>

#include "Timer.h"

int main()
{
	Timer t;

	t.start();

	int i = 0;
	while (i < std::numeric_limits<int>::max())
	{
		++i;
	}

	std::cout << "Seconds: " << t.elapsedSeconds() << "s" << '\n';
	std::cout << "Seconds: " << t.elapsedMilliseconds() << "ms" << '\n';
	return 0;
}