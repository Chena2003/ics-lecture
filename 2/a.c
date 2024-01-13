extern int printf (const char *__restrict __format, ...);

int main()
{
	#ifdef __X86_64__
		printf("X86_64\n");
	#else 
		printf("X86\n");
	#endif


	#if aa == bb
	 printf("YES\n");
	#else
       	 printf("NO\n");
	#endif

	return 0;
}
