#include <stdio.h>
#include <float.h>

int main()
{
    FILE *file = fopen("input_file.txt", "r");

    if (file == NULL) 
    {
        printf("Error opening file\n");
        return 1;
    }

    float january, february, march, april, may, june, july, august, september, october, november, december;
    float minimum = FLT_MAX;
    float maximum = FLT_MIN;
    char *minimumMonth = NULL;
    char *maximumMonth = NULL;

    int count0 = 0;
    float sum0 = 0.0;

    int count1 = 0;
    float sum1 = 0.0;

    int count2 = 0;
    float sum2 = 0.0;

    int count3 = 0;
    float sum3 = 0.0;

    int count4 = 0;
    float sum4 = 0.0;

    int count5 = 0;
    float sum5 = 0.0;

    int count6 = 0;
    float sum6 = 0.0;

    int count7 = 0;
    float sum7 = 0.0;

    if (fscanf(file, "%f", &january) == 1 && 
    fscanf(file, "%f", &february) == 1 &&
    fscanf(file, "%f", &march) == 1 &&
    fscanf(file, "%f", &april) == 1 &&
    fscanf(file, "%f", &may) == 1 &&
    fscanf(file, "%f", &june) == 1 &&
    fscanf(file, "%f", &july) == 1 &&
    fscanf(file, "%f", &august) == 1 &&
    fscanf(file, "%f", &september) == 1 &&
    fscanf(file, "%f", &october) == 1 &&
    fscanf(file, "%f", &november) == 1 &&
    fscanf(file, "%f", &december) == 1)
    {
        printf("Monthly sales report for 2022:\n");
        printf(" \n");
        printf("%-5s %10s\n", "Month", "Sales");
        printf(" \n");
        printf("%-10s $%8.2f\n", "January", january);
        printf("%-10s $%8.2f\n", "February", february);
        printf("%-10s $%8.2f\n", "March", march);
        printf("%-10s $%8.2f\n", "April", april);
        printf("%-10s $%8.2f\n", "May", may);
        printf("%-10s $%8.2f\n", "June", june);
        printf("%-10s $%8.2f\n", "July", july);
        printf("%-10s $%8.2f\n", "August", august);
        printf("%-10s $%8.2f\n", "September", september);
        printf("%-10s $%8.2f\n", "October", october);
        printf("%-10s $%8.2f\n", "November", november);
        printf("%-10s $%8.2f\n", "December", december);
        printf(" \n");
    } else {
        printf("Error listing sales report\n");
    }
    fclose(file);
    if (january < minimum) 
    {
        minimum = january;
        minimumMonth = "January";
    }

    if (february < minimum) 
    {
        minimum = february;
        minimumMonth = "February";
    }

    if (march < minimum) 
    {
        minimum = march;
        minimumMonth = "March";
    }

    if (april < minimum) 
    {
        minimum = april;
        minimumMonth = "April";
    }

    if (may < minimum) 
    {
        minimum = may;
        minimumMonth = "May";
    }

    if (june < minimum) 
    {
        minimum = june;
        minimumMonth = "June";
    }

    if (july < minimum) 
    {
        minimum = july;
        minimumMonth = "July";
    }

    if (august < minimum) 
    {
        minimum = august;
        minimumMonth = "August";
    }

    if (september < minimum) 
    {
        minimum = september;
        minimumMonth = "September";
    }

    if (october < minimum) 
    {
        minimum = october;
        minimumMonth = "October";
    }

    if (november < minimum) 
    {
        minimum = november;
        minimumMonth = "November";
    }

    if (december < minimum) 
    {
        minimum = december;
        minimumMonth = "December";
    }

    if (january > maximum) 
    {
        maximum = january;
        maximumMonth = "January";
    }

    if (february > maximum) 
    {
        maximum = february;
        maximumMonth = "February";
    }

    if (march > maximum) 
    {
        maximum = march;
        maximumMonth = "March";
    }

    if (april > maximum) 
    {
        maximum = april;
        maximumMonth = "April";
    }

    if (may > maximum) 
    {
        maximum = may;
        maximumMonth = "May";
    }

    if (june > maximum) 
    {
        maximum = june;
        maximumMonth = "June";
    }

    if (july > maximum) 
    {
        maximum = july;
        maximumMonth = "July";
    }

    if (august > maximum) 
    {
        maximum = august;
        maximumMonth = "August";
    }

    if (september > maximum) 
    {
        maximum = september;
        maximumMonth = "September";
    }

    if (october > maximum) 
    {
        maximum = october;
        maximumMonth = "October";
    }

    if (november > maximum) 
    {
        maximum = november;
        maximumMonth = "November";
    }

    if (december > maximum) 
    {
        maximum = december;
        maximumMonth = "December";
    }

    sum0 = january + february + march + april + may + june + july + august + september + october + november + december;
    count0 = 12;

    float average0 = sum0 / count0;

    printf(" \n");
    printf("Sales summary:\n");
    printf(" \n");
    printf("%-10s $%8.2f (%s)\n", "Minimum sales:", minimum, minimumMonth);
    printf("%-10s $%8.2f (%s)\n", "Maximum sales:", maximum, maximumMonth);
    printf("%-10s $%8.2f\n", "Average sales:", average0);
    printf(" \n");
    printf(" \n");

    sum1 = january + february + march + april + may + june;
    count1 = 6;

    float average1 = sum1 / count1;

    sum2 = february + march + april + may + june + july;
    count2 = 6;

    float average2 = sum2 / count2;

    sum3 = march + april + may + june + july + august;
    count3 = 6;

    float average3 = sum3 / count3;

    sum4 = april + may + june + july + august + september;
    count4 = 6;

    float average4 = sum4 / count4;

    sum5 = may + june + july + august + september + october;
    count5 = 6;

    float average5 = sum5 / count5;

    sum6 = june + july + august + september + october + november;
    count6 = 6;

    float average6 = sum6 / count6;

    sum7 = july + august + september + october + november + december;
    count7 = 6;

    float average7 = sum7 / count7;

    printf("Six-Month Moving Average Report:\n");
    printf("%-10s %-10s %-10s $%8.2f\n", "January", "-", "June", average1);
    printf("%-10s %-10s %-10s $%8.2f\n", "February", "-", "July", average2);
    printf("%-10s %-10s %-10s $%8.2f\n", "March", "-", "August", average3);
    printf("%-10s %-10s %-10s $%8.2f\n", "April", "-", "September", average4);
    printf("%-10s %-10s %-10s $%8.2f\n", "May", "-", "October", average5);
    printf("%-10s %-10s %-10s $%8.2f\n", "June", "-", "November", average6);
    printf("%-10s %-10s %-10s $%8.2f\n", "July", "-", "December", average7);
    printf(" \n");
    printf(" \n");

    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    float sales[] = {january, february, march, april, may, june, july, august, september, october, november, december};

    for (int varOne = 0; varOne < 12; varOne++)
    {
        for (int varTwo = varOne + 1; varTwo < 12; varTwo++)
        {
            if(sales[varOne] < sales[varTwo])
            {
                float tempVar = sales[varOne];
                sales[varOne] = sales[varTwo];
                sales[varTwo] = tempVar;
                char *tempMonth = months[varOne];
                months[varOne] = months[varTwo];
                months[varTwo] = tempMonth;
            }
        }
    }
    
    printf("Sales Report (Highest to Lowest):\n");
    printf(" \n");
    printf("%-5s %10s\n", "Month", "Sales");
    printf(" \n");
    for (int varOne = 0; varOne < 12; varOne++)
    {
        printf("%-10s $%8.2f\n", months[varOne], sales[varOne]);
    }
    printf(" \n");
    printf(" \n");

    return 0;
}