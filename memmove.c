#include <stdio.h>
#include <stdlib.h>


char name1[30] = "mohamed abdelwahab";
const char name2[30] = "abo ali";

void *my_memmove(void *str1_address, const void *str2_address, unsigned int length);

int main()
{
    /*printf("Before memmove dest = %s, src = %s\n", name1, name2);
    my_memmove(name1, name2, 7);
    printf("After memmove dest = %s, src = %s\n", name1, name2);
    */
    printf("---------------------------------\n\n");


    printf("Before memmove dest = %s, src = %s\n", name1, name2);
    memmove(name1, name2, 7);
    printf("After memmove dest  = %s, src = %s\n", name1, name2);
    return 0;
}
void *my_memmove(void *str1_address, const void *str2_address, unsigned int length)
{
    char *ptr_str1_address = str1_address;
    char *ptr_str2_address = str2_address;


    if((( NULL == ptr_str1_address))||(( NULL == ptr_str2_address)))
    {
        printf("invalid address !!\n");
    }
    else
    {
        while(length--)
        {
            *ptr_str1_address++ = *ptr_str2_address++;
        }
    }
    return str1_address;
}
