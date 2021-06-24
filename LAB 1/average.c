#include <stdio.h>
int main(){
    float expense[20][12];
    int totalYears;
    double avg=0.0;
    double sum=0.0;
    printf("Enter the no. of years you want to calculate expenses: ");
    scanf("%d",&totalYears);

    for (int i = 0; i < totalYears; i++){
        printf("Enter the expenditure for year: %d\n",(i+1));
        printf("---------------------------------\n");
        for (int j = 0; j < 12; j++)
        {
            printf("Month %d: ", (j + 1));
            scanf("%f",&expense[i][j]);
            sum += expense[i][j];
        }
    }
    
    
    printf("Your expenditure are: \n");
    printf("Year\tMonth\tExpense\t\n");
    for (int i = 0; i < totalYears; i++){
        printf("%d",(i+1));
        for (int j = 0; j < 12; j++)
        {
            printf("\t%d",(j+1));
            printf("\t%.2f\n",expense[i][j]);
        }
    }
    avg = sum / (float)totalYears;
    float avg_month = sum / (totalYears * 12.0);
    printf("\t\tTotal expense: %.2f", sum);
    printf("\nYour yearly average expenditure is: %.2f\n",avg);
    printf("Your monthly average expenditure is: %.2f\n",avg_month);
    return 0;
}
    
