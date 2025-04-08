// Next Round
#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter no of Participants and finisher's score : ");
    scanf("%d %d",&n,&k);
    int arr[n],count=0,temp=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d Contestant's score : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k) count++;
    }
    printf("Output : %d",count);
    return 0;
}