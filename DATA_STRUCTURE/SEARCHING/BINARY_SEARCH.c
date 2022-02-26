//Binary Searching
#include<stdio.h>
#define MAXSIZE 50

//MAIN()
int main()
{
    int i=0,ser,num,min,max,mid,arr[MAXSIZE];
    printf("Enter Total No of Elements : ");
    scanf("%d",&num);
    printf("Enter Sorted Element of Array : ");
    max = num-1;
    while(i < num)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    printf("ENTER SEARCHING ELEMENT : ");
    scanf("%d",&ser);
    while (min < max)
    {
    	mid = (min+max)/2;
        if(ser == arr[mid])
        {
        	mid++;
            printf("ELEMENT PRESENT AT LOCATION : %d",mid);
            break;
        }
        else if(ser < arr[mid])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    if(min > max)
    {
        printf("ELEMENT NOT FOUND !!! ");
    }
    return 0;
}
