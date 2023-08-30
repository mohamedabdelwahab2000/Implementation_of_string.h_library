#include <stdio.h>
#include <stdlib.h>

char name[30] = "mohamed abdelwahab";

void *my_memchr(const void *str_address, char char_, unsigned int length);
int main()
{
    char *local_ptr = NULL;
    printf("Element address =  0x%X \n",name);


    local_ptr = my_memchr(name,'z',20);

    if( NULL == local_ptr)
    {
        printf("Element is Not found !!\n");
    }
    else
    {
        printf("Element is found \n");
        printf("Element address =  0x%X \n",local_ptr);
    }

    return 0;
}
void *my_memchr(const void *str_address, char char_, unsigned int length)
{
    char *str_address_ptr = str_address;
    char *return_ptr = NULL ;
    if( NULL == str_address)
    {
        printf("invalid address !!\n");
    }
    else
    {
        while (length--)
        {

            if(*str_address_ptr == char_)
            {
                return_ptr = str_address_ptr;
                break;

            }
            else
            {
                str_address_ptr++;
            }
        }
    }
    return return_ptr;
}
