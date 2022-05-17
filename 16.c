#include <stdio.h>

int main()
{
FILE *fp;
unsigned int i;
printf("Generating your 16 bit word pack...\n");
for (i = 0; i < 65536; i++)
{
unsigned short num = i;
char filename[32];
sprintf(filename, "%d", i);
fp = fopen(filename, "wb");
fwrite(&num, 2, 1, fp);
fclose(fp);
}
printf("Done!\n");
return 0;
}
