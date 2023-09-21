#include "lists.h"
/**
 * first - print 2 lines before main functions is executed
 * Return: Nothing
 */
void __attribute__((constructor))first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
