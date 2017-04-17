// showPrime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h> // for getche()


int main()
{
	const unsigned char WHITE = 219; // solid color (PRIMES)
	const unsigned char GREY = 176; // greay (non prime)
	unsigned char ch;
									// for each screen position
	for (int count = 0; count < 320 * 40 - 1; count++)
	{
		ch = WHITE; // assuem is PRIME
		for (int j = 2; j < count; j++) // divide by every integer from 2 up
			if (count % j == 0) // if reminder is 0
			{
				ch = GREY; // its not prime
				break;
			}
		std::cout << ch; //display the character
	}
	getch();

    return 0;
}

