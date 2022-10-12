/**
 * print_name - prints a name
 * @name: name to print
 * @f(char *): function to handle the name printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
