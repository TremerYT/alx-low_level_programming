#include "main.h"
/**
 * Checks for lowercase letters
 * c is the one to be cheched
 */
int _islower(int c)
{
	if(c>='a'&&c<='Z')
		return(1);
	else
		return(0);
}
