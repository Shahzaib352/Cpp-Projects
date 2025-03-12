#include<iostream>
using namespace std;
int main(){
	               //Variable Declaration + Initialization
	int language , password = 1234 , PIN , balance = 1000000  , requiredamount , withdrawamount , depositamount , refnumber , payableamount , number , cardnumber , newPIN , prePIN , accountnumber , transferamount;
	int A1=500 , A2=1000 , A3=1500 , A4=2000 , A5=3000 , A6=5000 , A7=10000 ;
	char accounttype , transactiontype , cash , recipt , billtype , utilitybilltype , pay , transfer ; 
	cout<<"                                 Welcome to ATM     \n"; 
	cout<<endl;             
	cout<<" Please Enter Your Card.    \n";
	cout<<endl;
	cout<<" Name of Customer  -------. \n";
	cout<<endl;
	cout<<" Please Select Language.    \n";
	cout<<endl;
	cout<<" 1 For English.            2 For Urdu.   \n"; 
    cin>>language;    //Initialization
    if(language = 1){    //Applying IF-Else Statement for English Language
    	cout<<" Please Enter your 4-digit PIN.   ";
    	cin>>PIN;
    	if(PIN == password){   //Applying IF-ELSE STATEMENT
    	cout<<endl;
    		cout<<" Please select Account type.  \n";
    		cout<<" 1 For Current.  \n";
    		cout<<" 2 For Saving.   \n";
    		cout<<" 0 For Default.  \n";
    		cin>>accounttype;   //Initialization
    		switch(accounttype){    //Applying SWITCH STATEMENT
    			case '1':   //FOR CURRENT ACCOUNT
    			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Current-Transaction Type SWITCH STATEMENT bracket
    			    break;
    		    case '2':   //FOR SAVIING ACCOUNT
    		            			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Saving-Transaction Type SWITCH STATEMENT bracket
				    break;
				case '0':   //FOR DEFAULT TYPE
				        			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Default-Transaction Type SWITCH STATEMENT bracket
					break;	
			}//Account Type Switch bracket
	   }else{  cout<<"Invalid PIN.";  }//PIN if-else bracket
	}//English Language if bracket
	else if(language = 2){   //Applying IF-Else Statement for Urdu Language
	           	cout<<" Please Enter your 4-digit PIN.   ";
    	cin>>PIN;
    	if(PIN = password){   //Applying IF-ELSE STATEMENT
    	cout<<endl;
    		cout<<" Please select Account type.  \n";
    		cout<<" 1 For Current.  \n";
    		cout<<" 2 For Saving.   \n";
    		cout<<" 0 For Default.  \n";
    		cin>>accounttype;   //Initialization
    		switch(accounttype){    //Applying SWITCH STATEMENT
    			case '1':   //FOR CURRENT ACCOUNT
    			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Current-Transaction Type SWITCH STATEMENT bracket
    			    break;
    		    case '2':   //FOR SAVIING ACCOUNT
    		            			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Saving-Transaction Type SWITCH STATEMENT bracket
				    break;
				case '0':   //FOR DEFAULT TYPE
				        			cout<<" Please select Transaction Type  \n";
    			cout<<" 1 For Fast Cash.       2 To Check Balance.  \n";
    			cout<<" 3 To Withdraw Cash.    4 To Deposit Cash.   \n";
    			cout<<" 5 To Pay Bills.        6 To Activate Debit card.  \n";
    			cout<<" 7 To Transfer Funds.  \n";
    			cin>>transactiontype;
    			switch(transactiontype){
    				case '1':   //FOR FAST CASH
    				    cout<<" 1 for 500        2 For 1000   \n";
    				    cout<<" 3 For 1500       4 For 2000   \n";
    				    cout<<" 5 For 3000       6 For 5000   \n";
    				    cout<<" 7 For 10000      0 For Other Amounts   \n";
    				    cin>>cash;
    				    switch(cash){ //Applying Switch Statement for Cash
    				    	case '1':   //FOR 500(A1)
    				    	    if(A1 <= balance){     //Applying IF-Else Statement 
    				    	    	balance = balance - A1;     //Updating balance
    				    	    	cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	    	cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	    	cin>>recipt;     //Initialization
    				    	    	switch(recipt){ //Applying Switch Statement to Print Recipt
    				    	    	    case '1':    //To print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Please recieve your recipt.  \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
    				    	    	    	break;
    				    	    	    case '0':    //Not to print recipt
    				    	    	        cout<<" Please recieve your card.    \n";
    				    	    	        cout<<" Please collect your cash.    \n";
    				    	    	        cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A1
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}  //A1 IF Statement bracket
    				    		break;
    				    	case '2':   //FOR 1000(A2)
    				    	    if(A2 <= balance){  //Applying IF-Else Statement
    				    	        balance = balance - A2;   //Updating Balance
    				    	        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
    				    	        cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    	        cin>>recipt;    //Initialization
    				    	        switch(recipt){  //Appplying Switch statement to print Recipt
    				    	            case '1':  //To Print Recipt
    				    	                cout<<" Please recieve your card.    \n";
    				    	                cout<<" Please collect your cash.    \n";
    				    	                cout<<" Please recieve your recipt.  \n";
    				    	                cout<<" Thank You for using ATM.     \n";
    				    	            	break;
    				    	            case '0':  //Not to Print Recipt
    				    	                cout<<"Please recieve your card.    \n";
    				    	                cout<<"Please collect your cash.    \n";
    				    	                cout<<"Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A2
								}else{cout<<"Error. Amount Exceeded. Please enter valid amount";}//A2 IF Statement bracket
								break;
							case '3':   //FOR 1500(A3)
							    if(A3 <= balance){  //Applying IF-Else Statement
							       balance = balance - A3;  //Updating balance
							       cout<<"Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							       cout<<"1 for Yes.             0 to Go Green.   \n";
							       cin>>recipt;    //Initialization
							       switch(recipt){  //Applying Switch Statement to print recipt
							            case '1':     //To Print Recipt
							                cout<<"Please recieve your card.    \n";
							                cout<<"Please collect your cash.    \n";
							                cout<<"Please recieve your recipt.  \n";
							                cout<<"Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
										    break;	
								   }//Recipt Switch bracket A3
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A3 IF Statement bracket
								break;
							case '4':   //FOR 2000(A4)
							    if(A4 <= balance){  //Appltying IF-else Statement
							        balance = balance - A4;  //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to print recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A4
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A4 IF Statement bracket
								break;
							case '5':   //FOR 3000(A5)
							    if(A5 <= balance){   //Applying IF-Else statement
							        balance = balance - A5;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;   //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.     \n";
							                cout<<" Please collect your cash.     \n";
							                cout<<" Please recieve your recipt.   \n";
							                cout<<" Thank You for using ATM.      \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A5
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A5 IF Statement bracket
								break;
							case '6':   //FOR 5000(A6)
							    if(A6 <= balance){   //Applying IF-Else Statement
							        balance = balance - A6;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;    //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':   //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':   //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Thank You for using ATM.     \n";
											break;
									}//Recipt Switch bracket A6
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A6 IF Statement bracket
								break;
							case '7':   //FOR 10000(A7)
							    if(A7 <= balance){   //Applying IF-Else Statement
							        balance = balance - A7;   //Updating Balance
							        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
							        cout<<" 1 for Yes.             0 to Go Green.   \n";
							        cin>>recipt;     //Initialization
							        switch(recipt){    //Applying Switch Statement to print recipt
							            case '1':    //To Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
							                cout<<" Please recieve your recipt.  \n";
							                cout<<" Thank You for using ATM.     \n";
							            	break;
							            case '0':    //Not to Print Recipt
							                cout<<" Please recieve your card.    \n";
							                cout<<" Please collect your cash.    \n";
											cout<<" Thank You for using ATM.     \n"; 
											break;
									}//Recipt bracket A7
								}else{cout<<" Error. Amount Exceeded. Please enter valid amount";}//A7 IF Statement bracket
								break;
							case '0':   //FOR OTHER AMOUNTS
							    cout<<" Please enter amount in multiple of 500 only.  \n";
							    cout<<"              (Limit 500-20000)                \n";
							    cin>>requiredamount;    //Initialization
							    if(requiredamount >= 500 and requiredamount % 500 == 0){    //Applying IF-Statement for order
								    if(requiredamount <= balance){   //Appplying IF-Else Statement
								        balance = balance - requiredamount ;   //Updating balance
								        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.  \n";
								        cout<<" 1 for Yes.             0 to Go Green.   \n";
								        cin>>recipt;
								        switch(recipt){    //Applying Switch Statement to print recipt
								            case '1':    //To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Please recieve your recipt.  \n";
												cout<<" Thank You for using ATM.     \n"; 
								            	break;
								            case '0':   //Not To Print Recipt
								                cout<<" Please recieve your card.    \n";
								                cout<<" Please collect your cash.    \n";
												cout<<" Thank You for using ATM.     \n"; 
												break;
										}//Recipt bracket For Other Amounts
									}else{cout<<"Error. Amount Exceeded. Please enter valid amount.  \n";}  //requiredamount bracket
								}else{cout<<"Invalid Input. Please inter valid amount. \n";}    //requiredamount order bracket
								break;	
						}//FAST CASH SWITCH STATEMENT bracket
    					break;
    				case '2':   //TO CHECK BALANCE
    				    cout<<" Your balance is    "<<balance<<endl;
    				    cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
    				    cout<<" 1 for Yes.             0 to Go Green.   \n";
    				    cin>>recipt;    //initializing
    				    switch(recipt){  //Applying Switch statement to print recipt
    				        case '1':  //To print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Please recieve your recipt.  \n";
    				            cout<<" Thank You for using ATM.     \n";
    				        	break;
    				        case '0':  //Not to print recipt
    				            cout<<" Please recieve your card.    \n";
    				            cout<<" Thank You for using ATM.     \n";
								break;
						}//recipt bracket to check balance
						break;
					case '3':   //TO WITHDRAW CASH
					    cout<<" Please enter the Amount you want to withdraw in multiples of 500 only.   ";
					    cin>>withdrawamount;    //Initializing
					    if(withdrawamount >= 500 and withdrawamount % 500 == 0){   //Applying IF-Else Statement for order
					        if(withdrawamount <= balance){   //Applying IF=Else statement to check
					        balance = balance - withdrawamount ;   //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':    //To Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to Print Recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please collect your cash.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to withdraw Cash
							}else{cout<<" Error. Amount Exceede. Please enter valid amount. ";}   //withdrawamount bracket
						}else{cout<<"Invalid Input. Please enter valid Amount. ";}   //withdrawamount order bracket
						break;
					case '4':   //TO DEPOSIT CASH
					    cout<<"Please enter the amount you want to deposit in multiples of 500  only.  ";
					    cin>>depositamount;    //initializing
					    if(depositamount >= 500 and depositamount % 500 == 0){   //Applying IF-Else statement for order
					        cout<<"Please inser Cash.  \n";
					        balance = balance + depositamount;    //Updating balance
					        cout<<" Do you want a recipt ? Extra 3.13 Rs fee will be charged.   \n";
					        cout<<" 1 for Yes.             0 to Go Green.   \n";
					        cin>>recipt;    //initializing
					        switch(recipt){  //Applying Switch statement to print recipt
					            case '1':   //To print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Please recieve your recipt.  \n";
					                cout<<" Thank You for using ATM.     \n";
					            	break;
					            case '0':    //Not to print recipt
					                cout<<" Please recieve your card.    \n";
					                cout<<" Thank You for using ATM.     \n";
									break;
					        }//recipt bracket to deposit Cash
						}else{cout<<" Invalid Input. Please enter valid Amount. ";}   //depositamount order bracket
						break;  
					case '5':   //TO PAY BILLS
					    cout<<" Select the bill type   \n";
					    cout<<" 1 for Utility Bills    2 for Post-paid Bills      3 for Pre-paid Bills  \n";
					    cin>>billtype;   //initializing
					    switch(billtype){  //Applying Switch Statement for billtype
					        case '1':    //FOR UTILITY BILLS
					            cout<<" Select Utility Bill type    \n";
					            cout<<" 1 for LESCO     2 for WASA    3 for SUI GAS    \n";
					            cin>>utilitybilltype;
					            switch(utilitybilltype){   //Applying Switch Statement for utility bill type
					                case '1':    //FOR LESCO
					                    cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
					                	break;
					                case '2':   //FOR WSAS
					                     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
									case '3':   //FOR SUI GAS
									     cout<<"Please enter refrence number     ";
					                    cin>>refnumber;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
										break;
								}//utility bill type bracket
					        	break;
					        case '2':   //FOR POSTPAID BILLS
					             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
							        case '3':   //FOR PREPAID BILLS
							             cout<<"Please enter number     ";
					                    cin>>number;   //initializaing
					                    cout<<"Name of Consumer.  ------   \n";
					                    cout<<"Enter the Payable Amount  -------Rs    ";
					                    cin>>payableamount;   //initializing
					                    if(payableamount <= balance){  //Applying IF-Else Statement to check Payable amount
					                        cout<<"Click 1 to Pay          Click 0 to Cancel   \n";
					                        cin>>pay;
					                        switch(pay){   //Applying Switch Statement to pay
					                            case '1':    //To Pay
					                                balance = balance - payableamount ;  //Updating balance
					                                cout<<" Bill Paid.   \n";
					                                cout<<" Please recieve your recipt. \n";
					                                cout<<" Thank You for using ATM.   \n";
					                            	break;
					                            case '0':    //Not to pay
					                                cout<<" Process Canceled.     \n";
					                                cout<<" Thank You for using ATM.   \n";
													break;
											}//}pay bracket
										}else{cout<<"Error. Amount Exceeded. ";} //payable amount check bracket
							        	break;
						}//billtype bracket
					    break;
				    case '6':   //TO ACTIVATE DEBIT CARD
				        cout<<" Enter Debit Card number.    ";
				        cin>>cardnumber;     //initializing
				         cout<<" Enter pre-assigned 4-digit PIN.    ";
				         cin>>prePIN;	  //initializing
				         cout<<" Enter a New 4-digit PIN.    ";
				         cin>>newPIN;  //initializing
				         cout<<" Your Card is Sucessfully Activated.  \n";
				         cout<<" Thank You for using ATM.             \n";
					    break; 
					case '7':   //TO TRANSFER FUNDS
					    cout<<" Please Select the Bank of Beneficiary.     \n";
					    cout<<" ALLIED BANK      ASKARI BANK      BANK ALFALAH      BANK OF PUNJAB      BANK AL HABIB        \n";
					    cout<<endl;
					    cout<<" FAYSAL BANK      HBL/KONNECT      SONERI BANK       STANDARD CHARTED BANK      JS BANK       \n";
					    cout<<endl;
					    cout<<" MCB BANK         MEEZAN BANK      SILK BANK         UNITED BANK LIMITED        BANK ISLAMI   \n";
					    cout<<" Please Enter Beneficiary Account / IABN NUMBER.    ";
					    cin>>accountnumber;	    //innitializing
					    cout<<"Please Enter Amount you want to send. ";
						cin>>transferamount;     //initializing  
						if(transferamount <= balance){   //Applying IF-Elses Statement to check transfer amount
						    cout<<"Click 1 to Transfer          Click 0 to Cancel   \n";
						    switch(transfer){  //Applying Switch Statement to transfer
						        case '1':   //To Transfer
						            balance = balance - transferamount ;      //Updating balance
						            cout<<"Funds are Transfered.        \n";
						            cout<<"Please recieve your card.    \n";
						            cout<<"Please recieve your recipt.  \n";
									cout<<"Thank You for using ATM.     \n"; 
						        	break;
						        case '0':   //Not to Transfer
						            cout<<" Process Canceled.     \n";
						            cout<<"Thank You for using ATM.     \n";
									break;
							}//to transfer bracket						  					    
					    }else{cout<<"Error. can not send funds amount exceeded.  \n";}  //transfer amount check bracket
					    break;
				}//Default-Transaction Type SWITCH STATEMENT bracket
					break;	
			}//Account Type Switch bracket
	   }else{  cout<<"Invalid PIN.";  }//PIN if-else bracket 
	}//Urdu Language if bracket
	else{ cout<<" Invalid Input. Please enter valid input.  "; }   //Else bracket for Language Condition
	return 0; 	      
}//main bracket
