#include<stdio.h>
#include<string.h>
int main()
{
    int num,a,c,ph,ch;
    char n[100],add[100];
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n-------------------Welcome To Train Reservation System----------------------------------");
    printf("\n----------------------------------------------------------------------------------------");
    printf("\nPlease Enter Any Digit From (1-100)To Continue:");
    scanf("%d",&num);
    printf("\n\n");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n                                  The timing of Train                                                    ");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n Srno Departure Timing              From          To                           Train Name");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  1      13:30  pm                Secundrabad   Mumbai                      Deogiri     Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  2      21:00  pm                Mumbai        Secundrabad                 Deogiri     Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  3      6 :05  am                Mumbai        Nanded                      Tapavan     Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  4      10:15  am                Nanded        Mumbai                      Tapavan     Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  5      14:10  pm                Mumbai        Jalna                       Janshatabdi Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  6      5 :10  am                Jalna         Mumbai                      Janshatabdi Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  7      19:20  pm                Manmad        Secundrabad                 Ajanta      Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  8      21:10  pm                Secundrabad   Manmad                      Ajanta      Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  9      12:15  pm                Adilabad      Mumbai                      Nandigram   Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n  10     17:00  pm                Mumbai        Adilabad                    Nandigram   Express");
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n\n");
    printf("\n Enter The Train Number :");
    scanf("%d",&a);
    printf("\n\n");
    printf("\n Please Re-Enter The Confirm Train Number :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
                printf("\n\n");
                printf("\n Your Train is        Secundrabad   Mumbai                      Deogiri     Express");
                break;
        case 2:
                printf("\n\n");
                printf("\n Your Train is        Mumbai        Secundrabad                 Deogiri     Express");
                break;
        case 3:
                printf("\n\n");
                printf("\n Your Train is        Mumbai        Nanded                      Tapavan     Express");
                break;
        case 4:
                printf("\n\n");
                printf("\n Your Train is        Nanded        Mumbai                      Tapavan     Express");
                break;
        case 5:
                printf("\n\n");
                printf("\n Your Train is        Mumbai        Jalna                       Janshatabdi Express");
                break;
        case 6:
                printf("\n\n");
                printf("\n Your Train is        Jalna         Mumbai                      Janshatabdi Express");
                break;
        case 7:
                printf("\n\n");
                printf("\n Your Train is        Manmad        Secundrabad                 Ajanta      Express");
                break;
        case 8:
                printf("\n\n");
                printf("\n Your Train is        Secundrabad   Manmad                      Ajanta      Express");
                break;
        case 9:
                printf("\n\n");
                printf("\n Your Train is        Adilabad      Mumbai                      Nandigram   Express");
                break;
        case 10:
                printf("\n\n");
                printf("\n Your Train is        Mumbai        Adilabad                    Nandigram   Express");
                break;
        default:
                printf("\n\n");
                printf("\n Your Train is Invalid");
                break;
    }
    printf("\n\n");
    printf("\n---------------------------------------------------------------------------------------------");
    printf("\nBooking Of Tickets");
    printf("\n---------------------------------------------------------------------------------------------");
    printf("\n Enter Your Name :");
    fgets(n, sizeof(n), stdin);
    fgets(add, sizeof(add), stdin);
    printf("\n Enter Your Mobile Number :");
    scanf("%d",&ph);
    printf("\n Enter the number of Seats :");
    scanf("%d",&c);
    if(c<=1)
    {
            printf("\n Your Ticket Price Is Rs 700 And Reservation Is Sucessfull !!!!");
    }
    else
    {
            printf("\n Invalid Seats And Reservation Is Un-Sucessfull !!!!");
    }
    printf("\n\n");
    printf("\n---------------------------------------------------------------------------------------------");
    printf("\n Note:- You Can Book Only 1 Tickets At One Time");
    printf("\n---------------------------------------------------------------------------------------------");

    printf("\n");
    printf("\n Press Any Key To Exit");
    getch();
    return 0;
}