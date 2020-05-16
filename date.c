
#include <stdio.h>
#include<time.h> 
int main()
{
    int dd,mm,yy;
      char cur_time[128];
  
  time_t      t;
  struct tm*  ptm;
  int d,m,y;
  t = time(NULL);
  ptm = localtime(&t);
    
  strftime(cur_time, 128, "%d-%b-%Y ", ptm);
  y=ptm->tm_year+1900;
  m=ptm->tm_mon+1;
  d=ptm->tm_mday;
 
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
     
    
    if(yy>=1900 && yy<=y)
    {
        
        if(mm>=1 && mm<=m)
        {
            
            if((dd>=1 && dd<=d) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=d) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=d) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==d && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }

    return 0;    
}


