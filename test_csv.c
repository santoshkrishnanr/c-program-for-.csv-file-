#include <stdio.h>
#include <string.h>

int main(void)
{
    int id, type, value,a,c;
    float b;
    char line[1000] = "";
   // char time[100];
    FILE* f = fopen("D:\\cygwin64\\home\\santosh krishnan r\\csv\\testcsv\\x.csv", "r");
    


    while(fgets(line, sizeof (line), f))

    {
    fscanf(f, "%d, %d, %d,%d, %f, %d", &id, &type, &value,&a,&b,&c);
   // size_t len = 0;
   // time[len-1] = '\0';  // get rid of comma
    printf("%d  %d %d  %d  %f %d\n", id, type, value,a,b,c);
    }

    
 
    fclose(f);
    return 0;
}
