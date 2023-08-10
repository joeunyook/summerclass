#define NULL 0
void print_upper_and_lower(const char* str)
{
	char* upper_str = NULL;
	char* lower_str = NULL;
	size_t len = strlen(str);
	
	upper_str = (char*)malloc(len + 1);
	if (upper_str == NULL)
	{
		goto EXIT;
	}
	lower_str = (char*)malloc(len + 1);
	if (lower_str == NULL)
	{
		goto EXIT;
	}

	/*
		 */

EXIT:
	free(upper_str);
	free(lower_str);
	return;
}
