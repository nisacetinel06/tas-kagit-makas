#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("TAS KAGIT MAKAS OYUNU\n\n");
	srand(time(NULL));
	int i=0,tahmin;
	int kullaniciSkor=0,bilgisayarSkor=0;
	
	while(i < 10)
	{
		printf("\nLutfen tahmininizi girin: \t(1.tas,2.kagit,3.makas)\n");
		scanf(" %d ",&tahmin);
		
		int bilgisayartahmini=(rand()%3)+1;
		
		if(tahmin==1)
		{
			if(bilgisayartahmini==3)
			{
				kullaniciSkor++;
				printf("\nkazandiniz \n");
			}
		    else if(bilgisayartahmini==2)
		        {
		        bilgisayarSkor++;
		        printf("\nbilgisayar kazandi \n");
				}
		    else if(bilgisayartahmini==1)
		       {
		       	 printf("\nberabere \n");
			   }
		}
		else if(tahmin==2)
		{
			if(bilgisayartahmini==3)
			{
				kullaniciSkor++;
				printf("\nkazandiniz \n");
			}
		    else if(bilgisayartahmini==1)
		    {
		       	bilgisayarSkor++;
		       	printf("\nbilgisayar kazandi \n");
			}
		    else if(bilgisayartahmini==2)
		    {
		       	printf("\nberabere \n");
			}
		}
		else if(tahmin==3)
		{
			if(bilgisayartahmini==1)
		    {
				kullaniciSkor++;
				printf("\nkazandiniz \n");
			}
		    else if(bilgisayartahmini==2)
		    {
		        bilgisayarSkor++;
		       	printf("\nbilgisayar kazandi \n");
		    }
		    else if(bilgisayartahmini==3)
		    {
		        printf("\nberabere \n");
		    }
		}
		
		i++;
	}
		
	
	return 0;
}
