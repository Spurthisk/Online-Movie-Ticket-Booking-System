#include<stdio.h>
#include<stdlib.h>
#define NUMBERS_SIZE 100
#define BUFFER_SIZE 1000
#define MAX 256



/*
   structure name:book
   description: it stores the variable which can be futher
                 used in the functions for booking
*/

struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost_premium;
	int cost_gold;
	int cost_silver;


};
typedef struct book b;


/*
   structure name:food
   description: it stores the variable which can be futher
   used in the functions for booking food
*/
struct food
{
    char code[20];
	char name[20];
	int cost;

};
typedef struct food f;


/*
   structure name:feedback
   description: it stores the variable which holds
                the feedback given by the customer.
*/
struct feedback
{
    char code[20];
    char name[20];
};
typedef struct feedback fb;



int seat = 60 ;

//for booking ticket
void booking();

//for inserting movie details
void insert_details();

// for view all data
void viewAll();

 // for finding data
void find();

//for booking tickets
void book_ticket();

//for view old records of users,booked tickets
void old_record();

//to delete the file of old records
void delete_record();

//view seating arrangement
void viewseat();

//stores ratings of file
void ratings();

//searches movie in the file
void searchmovie();

//advertisements about several shops n offers
void advertise();

//to cancle the ticket
int cancleticket();

//to delete movie
int deletemovie();

//credit card details
void credit();

//dedit card details
void dedit();

//paytm payment details
void paytm();

//to view feedback
void viewfeedback();

//to take feedback
void feedback();

//to watch trailer
void watch_trailer();

//to choose the mode of payment
void payment_mode();

//gives decription of the movie
void description();

//gives reviews of the movie
void review();

//shows movie review
void view_review();

//shows movie description
void view_description();




/*
   function name:admin login
   input param: takes the username and password of the admin
   return type: void
   description: it takes the input parameters from the admin.
                here only the admin i.e the main administrator
                can login where he gets a set of choices of
                adding a movie, deleting a movie, etc.
*/
void alogin()
{
	int a=0;
	int i=0;
    char uname[10],c=' ';
    char pword[10];
    char code[10];
    char user[10]="user";
    char pass[10]="pass";

    do
{

    printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n ");
    printf("\n  +++++++++++++++++++++++++++++++LOGIN FIRST+++++++++++++++++++++++++++++ \n ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                  ENTER PASSWORD:-");

	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR BOOKING SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  \n");
		printf("LOGIN IS UNSUCESSFUL\n");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");

}


/*
   function name:user login
   input param: takes the username and password of the user(guest/customer)
   return type: void
   description: it takes the input parameters from the user.
                here the user as well as admin can login i.e
                it includes customers who want to  watch movie.
                the user can book tickets,cancle the tickets ,
                 payment details etc.
*/

void ulogin()
{
    printf("To login as guest\n");
    printf("username is guest\n");
    printf("password is pass\n");
	int a=0;
	int i=0;
    char uname[10];
    char c=' ';
    char pword[10];
    char code[10];
    char guest[10]="guest";
    char pass[10]="pass";

    do
{

    printf("\n  ++++++++++++++++++++++++++++++  LOGIN FIRST  ++++++++++++++++++++++++++++++  ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n\n                  ENTER PASSWORD:-");

	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"guest")==0 && strcmp(pword,"pass")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR BOOKING SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();//holds the screen

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");

}


/*
   function name:main
   input param: takes the choice of user and directs to
                the particular function.
   return type: void
   description: it takes the input parameters from the user and admin.
                here the user as well as admin enter the choices of the
                 prefered task they want to perform and redirects them
                  to that function
*/
void main()
{
    int ch;
    logo();
    printf("*********************************************************\n");
    printf("---WELCOME ---\n");
    printf("-----------MOVIE BOOKING SYSTEM---------\n");
    printf("*********************************************************\n");
    printf("\n");
    printf("\n");

    printf("--------LOGIN AS:-----\n");
    printf("1 Admin login\n");
    printf("2 User login\n");

    	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);

   		switch (ch)
   	{
    		case 1 :
    		          alogin();
    		          amenu();
    		           break;

		     case 2:
    		          ulogin();
    		          umenu();
   		                break;



    		case 0:
    		          exit(0);
    		          break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}

}


/*
   function name:logo
   input param:  nil
   return type : void.
   description: it prints the logo .
*/
void logo()
{
    printf("                                     ***                        ***\n");
    printf("                                      ***                      ***\n");
    printf("                                       ***                    ***\n");
    printf("                         ******************                  ***************\n");
    printf("                          ******************                *****************\n");
    printf("                          ***         *******              *** ***        ***\n");
    printf("                          ***          *** ***            ***  ***        ***\n");
    printf("                          ***************   ***          ***   *************\n");
    printf("                          **************     ***        ***    ************\n");
    printf("                          ***                 ****    ****     ***      ****\n");
    printf("                          ***                  **********      ***        ***\n");
    printf("                          ***                    *******       ***         ****\n");
    printf("                          ***                     *****        ***          ****\n");
    printf("                                                   ***\n");
    printf("                                                    *\n");
    printf("                                        C   I   N   E   M   A   S\n");

}


/*
   function name:admin menu
   input param:  takes the choice of admin and directs to
                the particular function.
   return type : void.
   description: it takes the input parameters from the admin.
                if the user is admin he chooses the choice as
                 admin and it redirects to this menu.
                 Here the admin can add new movies ,deleted
                  the movies ,find the movie etc.
*/
void amenu()
{
    int ch;

    do{
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n");
	printf("\t Moive Ticket booking ");
	printf("\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

	printf("\nEnter >1< To Insert Movie");
   	printf("\nEnter >2< To View All Movie");
	printf("\nEnter >3< To Find Movie ");
	printf("\nEnter >4< To View All Transactions");
	printf("\nEnter >5< To delete contents");
    printf("\nEnter >6< To view feedback");
	printf("\nEnter >7< To Insert food items");
    printf("\nEnter >8< To View All food items");
    printf("\nEnter >9< To add ratings");
    printf("\nEnter >10< To view ratings");
    printf("\nEnter >11< To delete movie");
    printf("\nEnter >12< To enter description of the movie");
     printf("\nEnter >13< view review of movie");
   	printf("\nEnter >0< To Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);
	   system("cls");

   	switch (ch)
   	{
    		case 1 :
    		         insert_details();
   		             break;
		    case 2:
    	            	viewAll();
   		                break;

            case 3:
    		           find();
   		               break;

            case 4:
		               old_record();
		                break;

            case 5:
		              delete_record();
		               break;

		   case 6:
    		         viewfeedback();
   		               break;

		       case 7 :
    		         food_details();
   		             break;

   		       case 8:
    	            	viewfood();
   		                break;
   		       case 9:
                        ratings();
                        break;

                case 10:
    		         viewratings();
   		               break;

   		         case 11:
    		         deletemovie();
   		               break;

   		         case 12:
   		         movie_description();
   		           break;

   		        case 13:
            view_review();
            break;




    		case 0:
    		            exit(0);
    		            break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);





}


/*
   function name:user menu
   input param:  takes the choice of user(guest/customer) and directs to
                the particular function.
   return type:void
   description: it takes the input parameters from the customer.
                if the user is customer he chooses the choice as
                 user login and it redirects to this menu.
                 Here the customer can book tickets, cancle tickets,
                order food etc
*/

void umenu()
{
    int ch;

    logo();

    	do{
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n");
	printf("\t MOVIE TICKET BOOKING ");
	printf("\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

	printf("\nEnter >1< To Book Tickets");
   	printf("\nEnter >2< To View All Movie");
	printf("\nEnter >3< To Find Movie ");
	printf("\nEnter >4< To view seating arrangement ");
	printf("\nEnter >5< View ratings ");
	printf("\nEnter >6< Search movie ");
	printf("\nEnter >7< cancle ticket ");
	printf("\nEnter >8< change booking ");
	printf("\nEnter >9< To do your payment");
	printf("\nEnter >10< view payment");
	printf("\nEnter >11< watch trailer");
	printf("\nEnter >12< view description of movie");
	printf("\nEnter >13< give review");
	printf("\nEnter >14<view review");
   	printf("\nEnter >0< To Exit ");


   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);
	   system("cls");

   	switch (ch)
   	{
   	    case 1:
   	        booking();

		break;


		case 2:
    		viewAll();
   		   break;

		case 3:
    		find();
   		    break;

   		case 4:
    		viewseat();
   		      break;

   		 case 5:
    		viewratings();
   		      break;

   		case 6:
    		searchmovie();
   		     break;

   		 case 7:
    		cancleticket();
   		   break;

       case 8:
    		change_booking();
   		   break;

   		case 9:
   		   payment_mode();
   		   break;

   		 case 10:
    		viewpayment();
   		   break;

   		 case 11:
            watch_trailer();
            break;

        case 12:
            view_description();
            break;

        case 13:
            review();
            break;

        case 14:
            view_review();
            break;



    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);



}



/*
   function name:insert details
   input param:  takes the movie name,code, release date,premium,
                  gold and silver ticket price.
   return type: void.
   description: it takes the input parameters from the customer
                 and displays the required details.

*/
void insert_details()
{

	FILE *fp;
	struct book b;

	printf("Enter  name :- ");
	scanf("%s",b.name);
	printf("Enter movie code :- ");
	scanf("%s",b.code);
	printf("Enter Release Date:- ");
	scanf("%s",b.date);
	printf("Enetr premium Ticket Price:- ");
	scanf("%d",&b.cost_premium);
	printf("Enetr gold Ticket Price:- ");
	scanf("%d",&b.cost_gold);
	printf("Enetr silver Ticket Price:- ");
	scanf("%d",&b.cost_silver);

	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s   \t             %s          \t %s           \t %d           \t                 %d             \t %d\n"
                                     ,b.code,b.name,b.date,b.cost_premium,b.cost_gold,b.cost_silver);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	system("cls");
}


/*
   function name:food details
   input param:  takes the food name,code, price.
   return type: void.
   description: it takes the input parameters
                 about the food menu from the admin.

*/
void food_details()
{

	FILE *fp;
	struct food f;

	printf("Enter  name :- ");
	scanf("%s",f.name);
	printf("Enter food code :- ");
	scanf("%s",f.code);
	printf("Enter  Price:- ");
	scanf("%d",&f.cost);


	fp=fopen("food.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %d \n",f.code,f.name,f.cost);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	system("cls");
}


/*
   function name:find details
   input param:  movie code
   return type:void
   description: it takes the movie code as input from the customer
                and displays the required details about the movie.

*/
void find()
{
	struct book b;
	FILE *fp;

	char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d %d %d",b.code,b.name,b.date,&b.cost_premium,&b.cost_gold,&b.cost_silver);
			if(strcmp(b.code,ch) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d",b.cost_premium);
				printf("\n\t\tprice of ticket ::%d",b.cost_gold);
				printf("\n\t\tprice of ticket ::%d",b.cost_silver);
			}
		}

	}

	fclose(fp);
	system("cls");
}


/*
   function name:view details
   input param: file (data.txt)
   return type: void.
   description: it takes the file input and displays the
                contents of the file.

*/
void viewAll()
{

	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");

		advertise1();

		printf("\n");
		printf("\n");

		printf("----------------------------------------------------------------\n");
		printf("-------------------          NOW SHOWING         ---------------\n");
		printf("----------------------------------------------------------------\n");

		printf("movie code\tmovie\trelease date\tpremium ticket price\tgold ticket price\tsilver ticket price\t \n  ");

		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);


	}

	fclose(fp);



}


/*
   function name: view food
   input param: file (food.txt)
   return type: void.
   description: it takes the file input from food.txt and displays the
                contents of the file.

*/
void viewfood()
{
    char ch;
	FILE *fp;

	fp = fopen("food.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);


}


/*
   function name:book ticket
   input param: number of tikets,user details,seat type.
   return type: void
   description: it takes input from the user about the
                 booking of ticket like the number of seats the
                 customer wants to book ,customer details,and
                 later it displays the price of the booked tickets.
*/

void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_seat,mobile,total_amount;
	char name[20];


     //used in display all movies
	char ch;
	//for searching
	char movie_code[20];

	// disply all moives by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For Book ticket Choice Movie(Enter Movie Code First )\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d %d %d",b.code,b.name,b.date,&b.cost_premium,&b.cost_gold,&b.cost_silver);
			if(strcmp(b.code,movie_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost_premium);
				printf("\n\t\tPrice of ticket::%d",b.cost_gold);
				printf("\n\t\tPrice of ticket::%d",b.cost_silver);
			}
		}

	}
	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);
	printf("\n Total number of tickets  :");
	scanf("%d",&total_seat);

	int c;

        printf(">1< premium seat\n");
   printf(">2< gold seat\n");
   printf(">3< silver seat\n");

		printf("\nEnter your Choice of seat ::");
   	scanf("%d",&c);


   	switch(c)
   	{
      case 1:
              total_amount = b.cost_premium * total_seat;
              printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost_premium);
	printf("\n\t\tTotal Amount : %d",total_amount);
	break;

       case 2:
              total_amount = b.cost_gold * total_seat;
              printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost_gold);
	printf("\n\t\tTotal Amount : %d",total_amount);
	break;

         case 3:
              total_amount = b.cost_silver * total_seat;
              printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost_silver);
	printf("\n\t\tTotal Amount : %d",total_amount);
	break;

   	}



	ufp=fopen("oldTransection.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %d %d %d %s %d %d %d \n",name,mobile,total_seat,total_amount,
                               b.name,b.cost_premium,b.cost_gold,b.cost_silver);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}


/*
   function name:booking
   input param:  choice
   return type: void.
   description: it redirects to the functions involved in booking the ticket

*/
void booking()
{
    book_ticket();
		int q;
		advertise();
		printf("do you want to order snacks?:press 1 for yes and 0 for no");
		scanf("%d",&q);
		if(q==1)
		book_food();
		else
            printf("thank you\n");

       feedback();


}



/*
   function name:book food
   input param: food code,file(food.txt).
   return type: void
   description: it takes input from the user about the
                 booking of food like the code of food the
                 customer wants to order ,customer details,and
                 later it displays the total price of the ordered food.
*/

void book_food()
{
    struct food f;
	FILE *fp;

	FILE *ufp;

	int total_seat,mobile,total_amount;
	char name[20];


	char ch; //used in display all foods
	char food_code[20]; //for searching

     advertisement2();

	// disply all movies by default for food code
	fp = fopen("food.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For food Choice (Enter food Code First )\n");
	printf("\n Enter food code :");
	scanf("%s",food_code);
	//system("clear");
	fp = fopen("food.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %d ",f.code,f.name,&f.cost);
			if(strcmp(f.code,food_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",f.code);
				printf("\n\t\tFood name ::%s",f.name);
				printf("\n\t\tPrice of food::%d",f.cost);
			}
		}

	}
	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);



              printf("\n ENJOY \n");

	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tfood name : %s",f.name);
	printf("\n\t\tcost of food : %d",f.cost);


	fclose(fp);


}


/*
   function name:transcation details
   input param: file(oldtranscation.txt)
   return type: void
   description: it takes input from the text file and shows
                the details of people who hav booked the
                tickets .
*/

void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");

	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);


}


/*
   function name:view seating
   input param: number of tikets,user details,seat type.
   return type: void
   description: it displays the seating arrangement in the theater.

*/

void viewseat()
{
    printf("------------------------------SEATING-----------------------------\n");

    printf("\n");
    printf("-------------Premium---------\n");
    printf("row   |01| |02| |03| |04| |05|  |06|  |07| |08|      |09| |10|   \n");
    printf("row   |01| |02| |03| |04| |05|  |06|  |07| |08|      |09| |10|   \n");
    printf("\n");

     printf("-------------Gold---------\n");
    printf("row   |01| |02| |03| |04| |05|    |06|  |07| |08|      |09| |10|   \n");
    printf("row   |01| |02| |03| |04| |05|    |06|  |07| |08|      |09| |10|   \n");
    printf("row   |01| |02| |03| |04| |05|    |06|  |07| |08|      |09| |10|   \n");
    printf("\n");

     printf("-------------Silver---------\n");
    printf("row   |01| |02| |03| |04| |05| |06|     |07| |08| |09| |10|   \n");


}


/*
   function name:advertisement
   input param: null
   return type: void
   description: it shows the ads
*/

void advertise()
{
    printf("-------------------------------------------------------------\n");
    printf("|---------PANTALOONS-----------\n");
    printf("|---new offers available   \t   buy now----\n");
    printf("|HURRY UP    limited offers\n");
    printf("|--------------------------------------------------------------\n");



}


/*
   function name:delete record
   input param: file
   return type: void
   description: it takes input from the user about the
                 deletion of the file.
*/

void delete_record()
{
    FILE *fp;
    int status;
    char filename[20];

    printf("nEnter the file name:");
    scanf("%s",filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Error:  file not found! check the directory!!\n");
        exit(0);
    }
    fclose(fp);
    status = remove(filename);

    if( status == 0 )
    printf("%s file deleted successfully.n",filename);
    else
    {
        printf("Unable to delete the file\n");
        perror("Error");
    }

}


/*
   function name: enter ratings
   input param: file (data.txt),movie code,ratings.
   return type: void.
   description: it takes the file input parameters from data file
                and user and stores it in ratings file

*/
void ratings()
{
    char ch;
    FILE *fp;
    FILE *ufp;
	struct book b;

	int ratings;

     //for searching
	char movie_code[20];

     // disply all moives by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	printf("\n For checking movie ratings(Enter Movie Code First )\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d %d %d",b.code,b.name,b.date,&b.cost_premium,&b.cost_gold,&b.cost_silver);
			if(strcmp(b.code,movie_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of premium ticket::%d",b.cost_premium);
				printf("\n\t\tPrice of gold ticket::%d",b.cost_gold);
				printf("\n\t\tPrice of silver ticket::%d",b.cost_silver);
			}
		}

		printf("enter ratings:");
		scanf("%d",&ratings);

	ufp=fopen("ratings.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"rating %d \n",ratings);
		printf("\n Record insert Sucessfull to the ratings file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);



}
}



/*
   function name: view ratings
   input param: file (ratings.txt)
   return type: void.
   description: it takes the file input from ratings.txt and displays the
                ratings of the movies.

*/
void viewratings()
{
    char ch;
	FILE *fp;

	fp = fopen("ratings.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);


}



/*
   function name: search movie
   input param: file (data.txt),word to be searched in
                 the file.
   return type: void.
   description: it searches for the word in the text file
                and returns the column and row in which the
                word is found and if the word is found this
                means that the movie is available in theatres.

*/
void searchmovie()
{
   FILE *fptr;

    char word[50];

    int line;
    int col;


    /* Input word to search in file */
    printf("Enter word to search in file: ");
    scanf("%s", word);


    /* Try to open file */
    fptr = fopen("data.txt", "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }


    // Find index of word in fptr
    indexOf(fptr, word, &line, &col);

    if (line != -1)
        printf("'%s' found at line: %d, col: %d\n", word, line + 1, col + 1);
    else
        printf("'%s' does not exists.", word);


    // Close file
    fclose(fptr);

}


/*
   function name: index
   input param: null
   return type: void.
   description: Finds, first index of a word in given
                file. First index is represented using
                line and column.this function is called
                by the ratings function for knowing the
                index of rows and column

*/

int indexOf(FILE *fptr, const char *word, int *line, int *col)
{
    char str[BUFFER_SIZE];
    char *pos;

    *line = -1;
    *col  = -1;

    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        *line += 1;

        // Find first occurrence of word in str
        pos = strstr(str, word);

        if (pos != NULL)
        {
            // First index of word in str is
            // Memory address of pos - memory
            // address of str.
            *col = (pos - str);
            break;
        }
    }


    // If word is not found then set line to -1
    if (*col == -1)
        *line = -1;

    return *col;
}


/*
   function name: cancle ticket
   input param: line to be deleted
   return type: int
   description: shows the list of tickets which hav been
                book from which the user has to search for
                his name and enter the line number which has
                his name and the particular users ticket will
                be cancelled

*/
int cancleticket()
{
    old_record();
     int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[]="oldTransection.txt";
        char str[MAX], temp[] = "temp.txt";

		printf("\n\n Delete a specific ticket from a file :\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }

        // open the temporary file in write mode
        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line which contains your name : ");
        scanf("%d", &lno);
		lno++;

        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);

        // remove the original file
        remove(fname);

        // rename the temporary file to original name
        rename(temp, fname);

/*------ Read the file ----------------*/
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
/*------- End of reading ---------------*/
        return 0;


}


/*
   function name: delete movie
   input param: line to be deleted
   return type: int
   description: shows the list of movies which are now showing in
                the box office from which the admin has to search
                for the movie and enter the line number which has
                the movie and the particular movie will be deleted.

*/
int deletemovie()
{
    viewAll();
    int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[]="data.txt";
        char str[MAX], temp[] = "temp.txt";

		printf("\n\n Delete a specific movie from a file :\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen(fname, "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }

        // open the temporary file in write mode
        fptr2 = fopen(temp, "w");
        if (!fptr2)
		{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line which contains yhe movie : ");
        scanf("%d", &lno);
		lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }

        fclose(fptr1);
        fclose(fptr2);

        // remove the original file
        remove(fname);

        // rename the temporary file to original name
        rename(temp, fname);

/*------ Read the file ----------------*/
   fptr1=fopen(fname,"r");
            ch=fgetc(fptr1);
          printf(" Now the content of the file %s is : \n",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                 ch=fgetc(fptr1);
            }
        fclose(fptr1);
/*------- End of reading ---------------*/

        return 0;


}


/*
   function name: change booking
   input param: user input of yes or no
   return type: void
   description: if the user wants to chnage his boooking then this
                function calls the cancel booking function for
                 deleting his details and later he can do his change his booking.

*/
void change_booking()
{   int x;
    printf("Are you sure to change the booking::Say yes or no---");
    scanf("%d",&x);

    if(x==1)
        {
            printf("proceed further");
            cancleticket();
            book_ticket();
        }


}


/*
   function name: mode of payment
   input param: choice of user
   return type: void
   description: the user chooses his mode of payment like credit
                card or debit card or paytm or others.

*/
void payment_mode()
{   int mode;

    printf("*****************PAYMENT MODE MENU*******************");
    printf("\n");
    printf("1)-Credit card\n");
    printf("2)-Debit card\n");
    printf("3)-Paytm\n");
    printf("4)-other\n");

    printf("Enter your mode of transaction:");
    scanf("%d",&mode);

    switch(mode)
    {

       case 1:
           credit();
           break;

        case 2:
               debit();
               break;
        case 3:
            paytm();
            break;


    }


}


/*
   function name: credit
   input param: user input of credit card details
   return type: void
   description: this function takes the credit card details of
                the user and prints a message to say if the payment
                 is successfull or not.

*/
void credit()
{
    int ch;
    int phone_no;
    int bill_no;
    int pin;
    int card_no;
    char Name[20];

    printf("Enter your phone no:");
    scanf("%d",&phone_no);
    printf("\n");
    printf("Card no.:");
    scanf("%d",&card_no);
    printf("\n");
    printf("Name on the card: is ");
    scanf("%s",&Name);
    printf("\n");
    printf("Bill no:");
    scanf("%d",&bill_no);
    printf("\n");
    printf("pin no.:");
    scanf("%d",&pin);
    printf("\n");
    printf("Verify before transaction:");
    scanf("%d",&ch);

    if(ch==1)
    printf("Your transaction is successful:\n");

    else
   {
       printf("some error in in transaction mode\n");
    printf("repeat the process");
   }

}


/*
   function name: debit
   input param: user input of debit card details
   return type: void
   description: this function takes the debit card details of
                the user and prints a message to say if the payment
                 is successfull or not.

*/
void debit()
{
    int ch;
    int phone_no;
    int bill_no;
    int pin;
    int card_no;
    char name[20];

    printf("Enter your phone no:");
    scanf("%d",&phone_no);
    printf("\n");
    printf("Card no.:");
    scanf("%d",&card_no);
    printf("\n");
    printf("Name on the card: is ");
    scanf("%s",&name);
    printf("\n");
    printf("Bill no:");
    scanf("%d",&bill_no);
    printf("\n");
    printf("pin no.:");
    scanf("%d",&pin);
    printf("\n");
    printf("Verify before transaction:");
    scanf("%d",&ch);

    if(ch==1)
    printf("Your transaction is successful:\n");

    else
    printf("some error in in transaction mode\n");
    printf("repeat the process");
}


/*
   function name: paytm
   input param: user input of paytm details
   return type: void
   description: this function takes the paytm details of
                the user and prints a message to say if the payment
                 is successfull or not.

*/
void paytm()
{   char name[20];
    int paytm_no[15];
    int amt;

    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your paytm number: ");
    scanf("%d",paytm_no);
    printf("amount to be paid:");
    scanf("%d",&amt);

    printf("transcation succesfull\n");

}


/*
   function name: view payment
   input param: text file(oldTransection.txt)
   return type: void
   description: this function takes the file input and
                displays all the required details taken
                as user input which are stored in the file.

*/
void viewpayment()
{
    char ch;
	FILE *fp;

	fp = fopen("oldTransection.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);


}


/*
   function name: watch payment
   input param: choice of the user
   return type: void
   description: this function takes the user input asking
                whether he wants to watch the trailer or not.

*/
void watch_trailer()
{
    int b;
    printf("Do you want to watch trailer\n");
    printf("Enter 1 to watch trailer..else enter 0\n");
    scanf("%d",&b);
}


/*
   function name: feedback
   input param: feedback inputs from user
   return type: void
   description: this function takes the user input regarding
                 the questions asked and stores it in the file
                  named feedback.txt.

*/
void feedback()
{

 int a;
 FILE *fp;
 struct feedback fb;


    printf("|-----------------------------------------------------------------|\n");
    printf("|---------------             FEEDBACK                   ----------|\n");
    printf("|-----------------------------------------------------------------|\n");

    printf("Enter  name :- ");
	scanf("%s",fb.name);
	printf("Enter movie code :- ");
	scanf("%s",fb.code);

	fp=fopen("feedback.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s \n",fb.code,fb.name);
		printf("1.Did you enjoy the movie?...if yes enter 1 else enter 0\n");
		scanf("%d",&a);
		printf("2.How did u feel about the facilities provided?...if yes enter 1 else 0\n");
		scanf("%d",&a);
		printf("3.Did u like the features provided by the app?....if yes enter 1 else 0\n");
		scanf("%d",&a);
		printf("4.Do u like to be notified about updates?...for further notifications enter else 0\n");
		scanf("%d",&a);
		printf("5.Do u think this app is the best?..if yes enter 1 else enter 0\n");
		scanf("%d",&a);
		printf("6.Do you think this app must be provided with much more features?.....if yes enter 1 else enter 0\n");
		scanf("%d",&a);
		printf("Thank you!!!!");

	}
		printf("\n");
	fclose(fp);
	system("cls");
}


/*
   function name: view feddback
   input param: text file(feedback.txt)
   return type: void
   description: this function takes the file input and
                displays all the required details taken
                as user input which are stored in the file.

*/
void viewfeedback()
{
    char ch;
	FILE *fp;

	fp = fopen("feedback.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);
}



/*
   function name:advertisement
   input param: null
   return type: void
   description: it shows the ads
*/

void advertise1()
{


    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$                                                                  $\n");
printf("$                                                                  $\n");
printf("$                                                 ^^^^DIWALI       $\n");
printf("$  #######                                              OFFERS^^^^ $\n");
printf("$     #  #####  #####  #      # ####     ######   ----50% oFF----  $\n");
printf("$     #  #    # #      # #    # #   #   #                          $\n");
printf("$     #  #    # #      #  #   # #    #  #                          $\n");
printf("$     #  #####  ####   #   #  # #     #  ######                    $\n");
printf("$     #  #    # #      #    # # #     #        #                   $\n");
printf("$     #  #    # #      #     ## #    #         #                   $\n");
printf("$     #  #    # #####  #      # #####    ######                    $\n");
printf("$                                                                  $\n");
printf("$                                                                  $\n");
printf("$                                                                  $\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

}


/*
   function name:movie description
   input param: code of the movie,description of movie.
   return type: void
   description: stores the description about the needed movie
                 from the admin and stores it in the text file
                 named description.txt.
*/
void movie_description()
{

	struct book b;
	FILE *fp;

	FILE *ufp;


	char description[200];

    //used in display all movies
	char ch;
	//for searching
	char movie_code[20];

	// disply all movies by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file  not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For writing the movie description (Enter Movie Code First )\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);

	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d %d %d",b.code,b.name,b.date,&b.cost_premium,&b.cost_gold,&b.cost_silver);
			if(strcmp(b.code,movie_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost_premium);
				printf("\n\t\tPrice of ticket::%d",b.cost_gold);
				printf("\n\t\tPrice of ticket::%d",b.cost_silver);
			}
		}

	}
	printf("\n* Fill Description *");
	printf("\n enter description about the movie :");
	scanf("%s",description);





	ufp=fopen("description.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s  \n",description);
		printf("\n Record insert Sucessfull to the description file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);
}


/*
   function name: view description
   input param: text file(description.txt)
   return type: void
   description: this function takes the file input and
                displays all the required details i.e
                description of the movie taken
                as user input which are stored in the file.

*/
void view_description()
{
    char ch;
	FILE *fp;

	fp = fopen("description.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);
}



/*
   function name:review
   input param: code of the movie,review of movie.
   return type: void
   description: stores the review about the needed movie
                 from the customer and stores it in the text file
                 named description.txt.
*/
void review()
{
    struct book b;
	FILE *fp;

	FILE *ufp;


	char review[200];

    //used in display all movies
	char ch;
	//for searching
	char movie_code[20];

	// disply all movies by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file  not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For writing the movie description (Enter Movie Code First )\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);

	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d %d %d",b.code,b.name);
			if(strcmp(b.code,movie_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);

			}
		}

	}
	printf("\n* Fill Description *");
	printf("\n enter reviews about the movie :");
	scanf("%s",review);



	ufp=fopen("reviews.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s  \n",review);
		printf("\n Record insert Sucessfull to the reviews file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);
}


/*
   function name: view review
   input param: text file(review.txt)
   return type: void
   description: this function takes the file input and
                displays all the required details i.e
                review of the movie taken
                as user input which are stored in the file.

*/
void view_review()
{
    char ch;
	FILE *fp;

	fp = fopen("reviews.txt","r");
	if(fp == NULL)
	{
		printf("file not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}

	fclose(fp);
}


/*
   function name:advertisement
   input param: null
   return type: void
   description: it shows the ads
*/
void advertisement2()
{
    printf("***************************************FOOD TREATS********************************************\n");
    printf("                                                                                             \n");
    printf("                                                                                             \n");
    printf("------------------------------------DINING OUT OFFERS-----------------------------------------\n");
    printf("                                                                                              \n");
    printf("                                                                                             \n");
    printf("=====================================CLAIM NOW!!!!!!!!!=======================================\n");
    printf("                                                                                              \n");


}




