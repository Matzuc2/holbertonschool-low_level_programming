#include "main.h"
#include "stdio.h"
#include <unistd.h>
int main(void)
{
	int n = 30;
	int p = 20;
	int h = 30;
	int l = 50;
	char hash = '#';
	int rows;
	int columns;
	int spaces;

	for (columns = 0; columns < n; columns++)
	{
	
		for (rows = 0; rows < h; rows++)
		{
			if(columns < 20)
			{
				if( rows <= p)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(hash);
				}
			}
		}
		
	_putchar('\n');
	}
	for (columns = 0; columns < n; columns++)
                {
                        for (rows = 0; rows < l; rows++)
                        {
                                _putchar(hash);
                        }
                }
	_putchar('\n');
}
int _putchar(char c)
{
        return (write(1, &c, 1));
}
