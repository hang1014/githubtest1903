#include<stdio.h>
#include<string.h>

int main(int argc, const char *argv[])
{
	char buf[33];
	//sscanf("123456 asdfga","%[^ ]", buf);
	sscanf("123arFfsdfADJKLJ", "%[^A-Z]", buf);
	puts(buf);
	return 0;
}
