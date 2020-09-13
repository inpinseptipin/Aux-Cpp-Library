#include "../AuxHeader.h"

namespace AUX
{
	// Utility Function : strlen | Gets Length of C Strings
	unsigned int strlen(char* string)
	{
		if(string==NULL)
		{
			return 0;
		}
		unsigned int c=0;
		while(string[c]!='\0')
			c++;
		return c;
	}

	// Utility Function : strlen | Gets Length of const C Strings	
	unsigned int strlen(const char* string)
	{
		if(string==NULL)
		{
			return 0;
		}
		unsigned int c=0;
		while(string[c]!='\0')
			c++;
		return c;	
	}
}