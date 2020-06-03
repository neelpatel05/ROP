#include<stdio.h>
#include<string.h>

void copy(char* str)
{
	char buffer[30];
	strcpy(buffer, str);
}

int main(int argc, char** argv)
{
	copy(argv[1]);
	return 0;
}
