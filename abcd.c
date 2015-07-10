#include<stdio.h>
main()
{
    int value,choice,index;
    while(1){
    printf("what do u want to do");
    printf("1. insert\n 2. fetch \n 3.display\n 4.exit");
    scanf("%d",&choice);

switch(choice)
{
case 1:
    {
        printf("enter the value want to insert");
        scanf("%d",&value);
        printf("inserted value is",value);
        break;
    }
case 2:
    {
        printf("enter the index at which u want to fetch the value");
        scanf("%d",&index);
        printf("value at index %d is value %d ",index,value);
        break;
    }
case 3:
    {
        printf("elemnts are insreted as");
        break;
    }
case 4:
    {
        printf("exit");
        return 0;
    }
default:
    break;
}
}
}
