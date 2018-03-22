/*																ALPSEN ZEYBEK 2243731                                                                                         */
#include <stdio.h>

int main()
{
	int option=1,base=0,pre_converted=1,length=0,key=1,a_input=0,b_input=0,c_in_put=0,sum=0,c_out=0,stock,post_converted=0,multiplier=1;		/*I've chosen to work only with integers.*/
/*There is only one bug that I managed to find out yet couldn't able to fix -which is entering an alphabetic character out of A to F range into the base 16 input retrieve part-. I'll place '@@@' mark to that buggy part's comment line.*/
	while (option!=2) 			/*Stays in the loop until the user goes for Option 2.*/
		{
		printf("\n\n\nWelcome to Full Adder!\n\n(1) Compute and Display the Outputs\n(2) Quit\n\t:");
		scanf("%d",&option);
		base=0;
		key=1;
		
			if(option==2) 		/*Verifying the Option 2 has been chosen*/
				{
				printf("You have chosen option 2\nBye!");
				break;
				}
			else if((option!=1) && (option!=2)) 		
				{
				printf("*** You entered %d, please enter either 1 or 2 next time! ***\n",option);		/*Error #1: Menu selection error.*/
				continue;
				}
			else
				while(key==1)		/*Continues in the case of Option 1.*/
					{
					printf("Which base will you use to enter data lines (base 16/8/2)?\n\t:");		/*Retrieves the base preference.*/
					scanf("%d",&base);
						if((base!=16) && (base!=8) && (base!=2))
							{
							printf("*** You entered %d, please enter either 16,8 or 2 next time! ***\n",base);		/*Error #2: Base selection error.*/
							continue;
							}
						else		/*Continues only if base is equal to 2/8/16.*/
							{
							if (base==2)		/*Base 2 calculation section.*/
								{
								while ((option!=2) && (key==1))			/*Loop that verifies whether the input matches with an error or not. If matches it stays inside the loop until user enters a proper one.*/
									{
									printf("Please enter input\n\t:");		/*Retrieves input for calculation.*/
									scanf("%d",&pre_converted);
									stock=pre_converted;
									length=0;
									if((pre_converted<=111) && (pre_converted>=0))
										{
										while (pre_converted>=0)
											{
											pre_converted/=10;
											length++;
											a_input=0;
											b_input=0;
											c_in_put=0;
											post_converted=0;
											multiplier=1;
											if ((pre_converted<=0) && (length>3))
												{
												printf("\n*** Length of input cannot exceed 3! ***\n");		/*Error #3.1: Length of input is not proper.*/
												}
											else if ((pre_converted<=0) && (length<=3))
												{
												pre_converted=stock;
												if(pre_converted>0)
													c_in_put=pre_converted%10;
												pre_converted/=10;
												if(pre_converted>0)
													b_input=pre_converted%10;
												pre_converted/=10;
												if(pre_converted>0)
													a_input=pre_converted;
												if((a_input!=1 && a_input!=0) || (b_input!=1 && b_input!=0) || (c_in_put!=1 && c_in_put!=0))
													{
													printf("*** Not a valid binary number! ***\n");		/*Error #4.1: Input cannot pass the validation check.*/
													break;
													}
												if (c_in_put!=(a_input!=b_input))
													sum=1;
												else
													sum=0;
												printf("\nSum is: %d",sum);
												if(a_input && b_input || (c_in_put && (a_input!=b_input)))
													c_out=1;
												else
													c_out=0;
												printf("\tC_out is: %d",c_out);			/*Giving outputs come from calculation.*/
												key-=1;
												break;
												}
											}
										}
									else
										printf("*** Input must be between 0 and 111 ! ***\n");		/*Error #5: If input passes other controls but stil stays improper than the limitation warning shows itself.*/
									}
								}
							else if(base==8)		/*Base 8 calculation section*/
								{
								while ((option!=2) && (key==1))			/*Loop that verifies whether the input matches with an error or not. If matches it stays inside the loop until user enters a proper one.*/
									{
									printf("Please enter input\n\t:");		/*Retrieves input for calculation.*/
									scanf("%o",&pre_converted);
									stock=pre_converted;
									length=0;
									if((pre_converted<=7) && (pre_converted>=0))
										{
										while (pre_converted>=0)
											{
											pre_converted/=10;
											length++;
											a_input=0;
											b_input=0;
											c_in_put=0;
											post_converted=0;
											multiplier=1;
											if ((pre_converted<=0) && (length>3))
												{
												printf("\n*** Length of input cannot exceed 3! ***\n");			/*Error #3.2: Length of input is not proper.*/
												}
											else if ((pre_converted<=0) && (length<=3))
												{
												pre_converted=stock;
												while(pre_converted>=1)
													{
													post_converted+=(pre_converted%2)*multiplier;
													multiplier*=10;
													pre_converted/=2;
													}
												if(post_converted>0)
													c_in_put=post_converted%10;
												post_converted/=10;
												if(post_converted>0)
													b_input=post_converted%10;
												post_converted/=10;
												if(post_converted>0)
													a_input=post_converted;
												if (c_in_put!=(a_input!=b_input))
													sum=1;
												else
													sum=0;
												printf("\nSum is: %d",sum);			
												if(a_input && b_input || (c_in_put && (a_input!=b_input)))
													c_out=1;
												else
													c_out=0;
												printf("\tC_out is: %d",c_out);			/*Giving outputs come from calculation.*/
												key-=1;
												break;
												}
											}
										}
									else
										printf("*** Not possible to convert it to 3-digit binary number! ***\n");		/*Error #6.1: If input exceeds 7 or stays below 0 than the error appears.*/
										
									}
								}
							else			/*Base 16 calculation section.*/
								{
								while ((option!=2) && (key==1))			/*Loop that verifies whether the input matches with an error or not. If matches it stays inside the loop until user enters a proper one.*/
									{
									printf("Please enter input\n\t:");			/*@@@*/ /*Retrieves input for calculation.*/
									scanf("%x",&pre_converted);
									stock=pre_converted;
									length=0;
									if((pre_converted<=7) && (pre_converted>=0))
										{
										while (pre_converted>=0)
											{
											pre_converted/=10;
											length++;
											a_input=0;
											b_input=0;
											c_in_put=0;
											post_converted=0;
											multiplier=1;
											if ((pre_converted<=0) && (length>3))
												{
												printf("\n*** Length of input cannot exceed 3! ***\n");			/*Error #3.3: Length of input is not proper.*/
												}
											else if ((pre_converted<=0) && (length<=3))
												{
												pre_converted=stock;
												while(pre_converted>=1)
													{
													post_converted+=(pre_converted%2)*multiplier;
													multiplier*=10;
													pre_converted/=2;
													}
												if(post_converted>0)
													c_in_put=post_converted%10;
												post_converted/=10;
												if(post_converted>0)
													b_input=post_converted%10;
												post_converted/=10;
												if(post_converted>0)
													a_input=post_converted;
												if (c_in_put!=(a_input!=b_input))
													sum=1;
												else
													sum=0;
												printf("\nSum is: %d",sum);
												if(a_input && b_input || (c_in_put && (a_input!=b_input)))
													c_out=1;
												else
													c_out=0;
												printf("\tC_out is: %d",c_out);			/*Giving outputs come from calculation.*/
												key-=1;
												break;
												}
											}
										}
									else
										printf("*** Not possible to convert it to 3-digit binary number! ***\n");		/*Error #6.2: If input exceeds 7 or stays below 0 than the error appears.*/
									}
								}
							}
					}
		}
return 0;
}
