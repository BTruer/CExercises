/* Sample implementation of library function gets() */
char *gets(char *s){
int c;
char *dest = s;
int gotchar = 0; /* Has at least one character been read? */
while ((c = getchar()) != �\n� && c != EOF) {
	*dest++ = c; /* No bounds checking! */
	gotchar = 1;
}
*dest++ = �\0�; /* Terminate string */
if (c == EOF && !gotchar){
	return NULL;
} /* End of file or error */
return s;
}
 /* Read input line and write it back */
void echo()
{
	char buf[8]; /* Way too small! */
	gets(buf);
	puts(buf);
}