#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(){
	char ch;
	for (ch='z',ch>='z',ch--){
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
