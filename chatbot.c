#include<stdio.h>
#include<string.h>
#include<windows.h>
/* search a word from a string) */



void billing()
{
    char b,a[200],e[50],f[50],g[50],y[10]="yes",n[50]="no",h[200],i[50]="latest",j[50]="past",k[50],aa[50],ff;
    A:
    printf("1.Coupon wasn't applied\n2.Amount deducted but transaction incomplete\n3.I did not receive my refund\n");
    scanf("%s",&b);
    switch(b)
    {
        case '1':
        printf("1.Coupon wasn't applied\n");
        printf("Could you please enter the details of your coupon\n");
        scanf("%s",a);
        printf("Thanks for the details. Our team will get back to you soon.");

        printf("\nDid you choose for cash on delivery?\n");
        scanf("%s",&e);
        if(strcmp(e,y)==0)
        {
            printf("Sorry the coupon wasn't valid for cash on delivery order.\nSorry for the inconvenience.\n");
        }
        else if(strcmp(e,n)==0)
        {
            printf("Due to technical issue the coupon wasn't applied.\nThe team is looking into the matter.\n");

            printf("You will shortly receive the refund.\nThank you.\n");
        }
        break;

        case '2':
            printf("2.Amount deducted but transaction incomplete\n");
            printf("Kindly enter your account details\n");
            scanf("%s",&aa);

        printf("The amount will be transferred shortly\n");
        break;
        case '3':
        printf("3.I did not receive my refund\n");
        printf("Was it the latest order or the past orders\n");
        scanf("%s",&k);
        if(strcmp(k,i)==0)
        {
            printf("You'll receive the payment shortly\n");
        }
        else if(strcmp(k,j)==0)
        {
            printf("Sorry our team is looking into the matter.\n");

        }
        break;
        default :
            printf("Please enter valid option.\n");

            break;
    }
}



void check()
{
    char TextString[100];
    char str[50],actions,feedback[50],sug,feedback2,cuisine,chineese,conti,italy,complaints,ys[50],yy[10]="yes",nn[50]="no",y1[50],temp;
    int south,flag,time,order;
    int deliverycomplaints,foodcomplaints,zz;
	char* city[10],finalfeedback;

	char lp[100],ye[100]="yes",yn[100]="no";
    long int num;
    int xx;
    printf("\nAlice here, how can I help you? \n");
    for(;;)
    {
    fgets(TextString, sizeof TextString, stdin);

    if (strstr(TextString,"cancel")!=NULL)
    {
            printf("May I please know why do you want to cancel ?\n");
            scanf("%c",&temp);
            scanf("%[^\n]",feedback);
            printf("we expect your order to be on track and will try to deliver as soon as possible.\n");

          printf("Are you sure you want to cancel your order?\n");
          scanf("%s",&ys);
          if(strcmp(ys,yy)==0)
          {
                    printf("May I know how long (in minutes) its been since you ordered?\n ");
                    scanf("%d",&time);
                    switch(time)
                    {
                        case 5:
			    printf("Its been 5 minutes since you placed your order\n");
                            printf("Are you sure you want to cancel?\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");
				printf("I have canceled your order.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;

                        case 10:
			    printf("Its been 10 minutes since you placed your order\n");
                            printf("the food is being prepared.The cancellation fee will be applied.Are you sure you want to cancel?\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");

                                printf("I have cancelled your order.You are charged with the cancellation fee.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;

                        case 15:
			    printf("Its been 15 minutes since you placed your order\n");
                            printf("the food is already prepared and is out for delivery.The cancellation fee will be applied.Are you sure you want to cancel?\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");

                                printf("I have canceled your order.You are charged with the cancellation fee.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;
                        case 20:
			    printf("Its been 20 minutes since you placed your order\n");
                            printf("the food is already prepared and is out for delivery.The cancellation fee will be applied.Are you sure you want to cancel?\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");

                                printf("I have canceled your order.You are charged with the cancellation fee.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;

                        case 25:
			    printf("Its been 25 minutes since you placed your order\n");
                            printf("the food is already prepared and is out for delivery.The cancellation fee will be applied.Are you sure you want to cancel?\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");

                                printf("I have cancelled your order.You are charged with the cancellation fee.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;
                        case 30:
			    printf("Its been 30 minutes since you placed your order\n");
			    printf("The food will be delivered soon");
                            printf("Im sorry for the delay.Are you sure you want to cancel.\n");
                            scanf("%s",&y1);
                            if(strcmp(y1,yy)==0)
                            {
				printf("Please wait while I initiate cancellation for your order.\n");

                                printf("I have canceled your order.You are charged with the cancellation fee.\n");
                                printf("THANK YOU\n");
                            }
			    else if(strcmp(y1,nn)==0)
			    {
                                printf("the food will be delivered in few minutes.THANK YOU.\n ");
		            }
                            break;

                        default:
                            printf("I dint understand you.Please enter the valid time.\n ");
                            break;


                  }
        }

        else if(strcmp(ys,nn)==0)
        {
            printf("Your order will be delivered in few minutes.THANK YOU.\n ");

        }
    }
    else if(strstr(TextString,"change order")!=NULL || strstr(TextString,"change my order")!=NULL)
    {
        printf("\nYou have chosen to change your order\n");

           	printf("Excellent! to start this process please enter your mobile number: \n" );
            scanf("%ld",&num);
            printf("Thank you for providing your mobile number. \n Please type in your city so I can help serve you better\n");
         scanf("%s",city);
         printf("\nEven Dine-IN was started in %s only\n",city);
		 printf("\nTo change your order you will have to choose which cuisine you want to add from:\n a. Indian\n b. Chineese\n c. Continental\n d. Italian.\n");
    	 scanf("%s",&cuisine);
    	 printf("--------------------------------------------------------------------------------");
    	  switch(cuisine)
    	 {
    	     indian:
                case 'a':
			    flag = 1;
				while(flag)
				{
    	 			printf("\nUnder Indian we have\n");printf("\n1.Idly Sambar Price: 30/- Rupees\n 2.Masala dosa Price: 45/-Rupees\n 3.Roti Curry Price: 35/- Rupees\n 4. Press 4 to go to next cuisine\n");
    	 			scanf("%d",&south);
				  	switch(south)
					{ 	case 1:
    	 					printf("Idly Sambar has been added to your plate.\n");
    	 					break;
    	 				case 2:
    	 					printf("Masala Dosa has been added to your plate.\n");
    	 					break;
    	 				case 3:
    	 					printf("Roti Curry has been added to your plate\n");
    	 					break;
				    	case 4:
				    		flag=0;
							break;
				 		default:
    	 					printf("Please enter dish numbers from the menu.\n");
    	 					break;

					}
					}

    	 	printf("--------------------------------------------------------------------------------");
			case 'b':
				flag = 1;
				while(flag)
				{chineese:
					printf("\n\nUnder Chineese we have\n ");printf("1. Fried Noodles\n 2. Momo\n 3. Shezwan fried rice.\n 4. Press 4 to skip to next cuisine.\n");
					scanf("%d",&chineese);
					switch(chineese)
					{
						case 1:
							printf("Fried noodles has been added to your plate.\n");
							break;
						case 2:
							printf("1 Plate of momos have been added to your plate.\n");
							break;
						case 3:
							printf("shezwan fried rice has been added to your plate.\n");
							break;
						case 4:
							flag = 0;
							break;
						default:
    	 					printf("Please enter dish numbers from the menu.\n");
					 		break;
					}
				}

			printf("--------------------------------------------------------------------------------\n\n");
			case 'c':
				flag = 1;
				while(flag)
				{continental:
					printf("\n\nUnder Continental we have\n");printf("1. Crispy Calamari Rings.\n 2.Sweet Potato Pie.\n 3. Poached Pear Salad.\n 4. Press 4 to go to next cuisine\n");
					scanf("%d",&conti);
					switch(conti)
					{
						case 1:
							printf("\nCrispy Calamari Rings have been added to your plate.\n");
							break;
						case 2:
							printf("Sweet Potato Pie has been added to your plate.\n");
							break;
						case 3:
							printf("Poached Pear Salad has been added to your plate.\n");
							break;
						case 4:
							flag = 0;
							break;
						default:
    	 					printf("Please enter dish numbers from the menu.\n");
    	 					break;
    	 			}
				}

    	 	printf("--------------------------------------------------------------------------------");
			case 'd':
				flag = 1;
				while(flag)
				{italian:
					printf("\n\nUnder Italian cuisine we have\n");printf("1.Margherita Pizza.\n 2.Lasagna.\n 3. Seafood Risotto.\n 4. End of menu\n");
					scanf("\n%d",&italy);
					switch(italy)
					{
						case 1:
							printf("Margherita Pizza has been added to your plate.\n");
							break;
						case 2:
							printf("Lasagna has been added to your plate.\n");
							break;
						case 3:
							printf(" Seafood Risotto has been added to your plate.\n");
							break;
						case 4:
							printf("\nEnd of menu.\n");
							flag = 0;
							break;
						default:
    	 					printf("Please enter dish numbers from the menu.\n");
							break;
                    break;}
				}
			break;
break;
printf("\nThank you for placing your order!\n");
printf("------------------------------THANK YOU--------------------------------------------------");break;
    }
    }
    else if(strstr(TextString,"status")!=NULL || strstr(TextString,"track")!=NULL)
    {
        printf("Thank you for placing your order. I will now check the status of your order.\n" );
	   	printf("How long has it been since you placed your order\n");
	    	scanf("%d",&xx);
	    	if(xx<6)
	    	{
			printf("Its been %d minutes since you placed your order\n",xx);
			printf("The restaurant confirmed your order\n");
	    	}
	    	else if(6<=xx && 15>=xx)
	    	{
			printf("It's been %d minutes since you placed your order\n",xx);
			printf("The order is being prepared\n");
	    	}
	    	else if(15<xx && 25>=xx)
	    	{
			printf("It's been %d minutes since you placed your order\n",xx);
			printf("The order is out for delivery\n");
	    	}
	    	else if(xx>25)
            {
			printf("It's been %d minutes since you placed your order\n",xx);
			printf("The order will be delivered soon\n");
	    	}

    }
    else if(strstr(TextString,"contact")!=NULL)
    {
        printf("I will now hand you over to our representatives whom you can now contact on these numbers: 9380933362 or 9591449873 \n." );

    }


    else if(strstr(TextString,"complaints")!=NULL || strstr(TextString,"complaint")!=NULL)
    {
        billing();
    }
    else if(strstr(TextString,"exit")!=NULL || strstr(TextString,"bye")!=NULL)
    {
        printf("Please rate our service out of 10\n");
        scanf("\n%d",&order);

            printf("\nThank You for the feedback");
            exit(0);
    }
    else
    {

        check();
    }

    }

}

int main()
{
    check();
}
