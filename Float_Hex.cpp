
#include <stdio.h>

int main()
{
    printf("Hello World.... This program is coverting data from float to hexadecimal...\n");

   long val=0;   
   float IMAG_ARR_IP[3] = {189.170196, 1130442.22, 60431.99};
   float REAL_ARR_IP[3] = {198.838691, 1123506.88,  -62488.62};
   
   for(int i=0;i<3;++i) {
			val=0;
			val = *((unsigned long *)&IMAG_ARR_IP[i]);
			val = (val & 0xFFFFFFFF);
			val = (val<<32);
			val += (0xFFFFFFFF & *((unsigned long *)&REAL_ARR_IP[i]));
			printf(" 0x%lx \n", val);
    }
    return 0;
}
