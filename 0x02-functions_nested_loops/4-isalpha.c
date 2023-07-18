#include "main.h"
/**
 * checks for alphabet character if lowercase or uppercase
 * c is the letter
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
