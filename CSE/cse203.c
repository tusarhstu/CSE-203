#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,a[100],temp[100],x,position,c,value,Src,found,element,pos,p,q,add;
    printf("Please insert the Number of element of the array:\n");
    scanf("%d",&l);
    printf("Insert Elements: \n");
    for(i=0;i<l;i++)
    {
        scanf("%d",&temp[i]);
    }

    g:
        for(i=0;i<l;i++)
        {
            a[i]=temp[i];
        }
    printf("Enter an Integer Number:\n 0 Exit\n 1 View all elements\n 2 Insert new element\n 3 Search an element\n 4 Delete an element (user should input item to be searched and delete)\n 5 Sort elements in ascending order\n 6 Sort elements in descending order\n 7 Find memory location of an element (user should input index number)\n");
    scanf("%d",&x);


        if(x==1)
        {
              printf("\nElements in array are: ");
               for(i=0; i<l; i++)
                {
                    printf("%d  ", a[i]);
                }
                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;

        }
        else if(x==2)
        {

            printf("Enter the location where you wish to insert an element\n");
            scanf("%d", &position);

            printf("Enter the value to insert\n");
            scanf("%d", &value);

            for (c = l - 1; c >= position - 1; c--)

                    a[c+1] = a[c];

                a[position-1] = value;


                printf("Resultant array is\n");

            for (c = 0; c <= l; c++)
                printf("%d\n", a[c]);

                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;


        }
        else if(x==3)
        {
                printf("\nEnter element to search: ");
        scanf("%d", &Src);


    found = 0;

    for(i=0; i<l; i++)
    {

        if(a[i] == Src)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", Src, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", Src);
    }
                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;
        }
    else if(x==4)
    {
        printf("Enter the element to be deleted\n");
        scanf("%d", &element);
        found=0;

        for (i = 0; i < l; i++)
        {
            if (a[i] == element)
            {
                found = 1;
                pos = i;
                break;
            }
        }

        if (found == 1)
        {
            for (i = pos; i <  l - 1; i++)
            {
                a[i] = a[i + 1];
            }

            printf("The resultant array is \n");
            for (i = 0; i < l - 1; i++)
            {
                printf("%d\n", a[i]);
            }

        }
        else
            printf("Element %d is not found in the array\n", element);

                printf("press any key to finish the task \n");
                getch();
                system("cls");
                goto g;
    }
    else if(x==5)
    {
        for (i = 0; i < l; i++)
        {

            for (j = i + 1; j < l; ++j)
            {

                if (a[i] > a[j])
                {

                    p =  a[i];
                    a[i] = a[j];
                    a[j] = p;

                }

            }

        }
               printf("The numbers arranged in ascending order are given below \n");
                    for (i = 0; i <l; ++i)
                        printf("%d\n", a[i]);

                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;
    }

    else if(x==6)
    {
        for (i = 0; i < l; ++i)
        {
            for (j = i + 1; j < l; ++j)
            {
                if (a[i] < a[j])
                {
                    q = a[i];
                    a[i] = a[j];
                    a[j] = q;
                }
            }
        }

        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < l; ++i)
        {
            printf("%d\n", a[i]);
        }
                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;
    }
    else if(x==7)
    {
        printf("Enter the position of the number in the array: \n");
        scanf("%d",&add);
        printf("The memory address of %d is = ",a[add-1]);
        printf("%d",&a[add-1]);

                printf("Press any key to finish the task \n");
                getch();
                system("cls");
                goto g;
    }

    return 0;
}


