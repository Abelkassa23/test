#include <stdio.h>
int main()
{
	   double a, b;
	      int choice;
	         printf("enter your choice\n");
		    printf("1.Addition\n2.subtraction\n3.multiplication\n4.division\nnumber=");
		       scanf("%d",&choice);
		          if(choice>4){
				       printf("insert choice with in the range!\n");
				          
				          }
			     else
				        {
						   printf("enter 2 integer number\n");
						      scanf("%lf",&a);
						         scanf("%lf",&b);
							    }
			       switch(choice){
				           case 1:printf("%lf+%lf =%.3lf\n",a,b,(a+b));
						             break;
						      case 2:printf("%lf-%lf =%.3lf\n",a,b,(a-b));
							                break;
							         case 3:printf("%lfx%lf =%lf\n",a,b,(a*b));
									           break;
									    case 4:if(b !=0)
											           printf("%lf/%lf =%lf\n",a,b,(a/b));
										              else
												              printf("number can't be divided by zero\n");
											                 break;
													         default:("you entered wrong choice\n");
															          break;
															     
															   }

			         return 0;
}
