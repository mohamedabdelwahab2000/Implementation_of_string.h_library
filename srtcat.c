#include <stdio.h>
#include <stdlib.h>

char name1[60] = "mohamed abdelwahab";
const char name2[60] = "abo ali";

char *my_strcat(char *dest, const char *src);
int main()
{
    printf("Before my_strcat dest = %s, src = %s\n", name1, name2);
    my_strcat(name1, name2);
    printf("After my_strcat dest = %s, src = %s\n", name1, name2);


    printf("---------------------------------\n\n");

   /* printf("Before my_strcat dest = %s, src = %s\n", name1, name2);
    strcat(name1, name2);
    printf("After my_strcat dest  = %s, src = %s\n", name1, name2);

    */
    return 0;
}
char *my_strcat(char *dest, const char *src)
{
    char *ptr_dest = dest;
    char *ptr_src = src;
    int counter =0 ;

    if((( NULL == ptr_dest))||(( NULL == ptr_src)))
    {
        printf("invalid address !!\n");
    }
    else
    {
        while(*(ptr_dest) != '\0')
        {
            ptr_dest++;
        }


        while(*(ptr_src) != '\0')
        {
            *ptr_dest++ = *ptr_src++ ;
        }
        *ptr_dest = '\0'; // to end string
    }
    return dest;
}
