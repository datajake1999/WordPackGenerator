#include <stdio.h>

int main()
{
FILE *fp;
unsigned int i;
printf("Generating your 8 bit word pack...\n");
for (i = 0; i < 256; i++)
{
unsigned char num = i;
char filename[32];
sprintf(filename, "%d", i);
fp = fopen(filename, "wb");
fwrite(&num, 1, 1, fp);
fclose(fp);
}
printf("Done!\n");
return 0;
}
