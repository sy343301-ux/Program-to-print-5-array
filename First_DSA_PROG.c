// Program to display 5 Elements IN AN ARRAY

# include <stdio.h>

int main()
{
    int arr[5];
    int i;
    printf("Enter 5 elements in  array:\n");
for (i=0; i<5; i++)
{
    scanf("%d", &arr[i]);
}
printf("The elements in the array are:\n");
for (i=0; i<5;i++)
{ 
    printf("%d\n",arr[i]);
}
return 0;
}
