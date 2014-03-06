/*
	Gnome sort Algorithm
	Pseudo:
		procedure gnomeSort(a[])
			pos := 1
			while pos < length(a)
				if (a[pos] >= a[pos-1])
					pos := pos + 1
				else
					swap a[pos] and a[pos-1]
					if (pos > 1)
						pos := pos - 1
					end if
				end if
			end while
		end procedure
*/
#include <iostream>

typedef unsigned int UINT;

void gnomeSort(int array[], UINT size)
{
	UINT i = 1;
	while (i < size)
	{
		if (array[i] >= array[i-1])
		{
			i++;
		}
		else
		{
			int temp = array[i];
			array[i] = array[i-1];
			array[i-1] = temp;
			if (i > 1)
			{ i--; }
		}
	} 
}

int main()
{
	int test[11] = {3, 6, 1, 4, 0, 8, 2, 9, 10, 5, 7};
	UINT usize  = sizeof(test) / sizeof(test[0]);
	gnomeSort(test, usize);
	
	
	for (UINT i = 0; i < usize; ++i)
	{
		std::cout << test[i] << std::endl;
	}
	
	return 0;
}
