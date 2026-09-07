#include <stdio.h>

int main(){
    char IncidentId[20];
    char analyst[20];
    int  AffectedSystem;
    float RecoveryCost;
    float DownTime;
    float TotalCost;

    printf("enter incident id: ");
    scanf(" %s", &IncidentId);

    printf("enter analyst name : ");
    scanf(" %s", &analyst);

    printf("enter number of affected systems: ");
    scanf(" %d", &AffectedSystem);

    printf("enter estimated recovery cost: ");
    scanf(" %f", &RecoveryCost);

    printf("enter down time in hours: ");
    scanf(" %f", &DownTime);

    TotalCost = AffectedSystem * RecoveryCost;

    printf("\n====================================\n");
    printf ("    SECURITY INCIDENT REPORT\n");
    printf("====================================\n");
    printf("Incident id      : %s\n", IncidentId);
    printf("Analyst Name     : %s\n", analyst);
    printf("Affected System  : %d\n", AffectedSystem);
    printf("Recovery Cost    : %.0f\n", RecoveryCost);
    printf("Total cost    : %.0f\n", TotalCost);
    printf("Down time    : %.2f hours\n", DownTime);
    printf("====================================\n");
    
    return 0;


}
