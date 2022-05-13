#include <stdio.h> u
int main(int argc, char *argv[]) 
{
if(argc < 2) w
{
printf("%s\n", "Pass your name as an argument"); 
return 0; y
}
else
{
printf("Hello %s\n", argv[1]); 
return 0;
}

}
