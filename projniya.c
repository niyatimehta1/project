/*remove product
output of biling system via list
printf("The available quantity right now from farmer Man Singh(%c) is 5kgs(%d) priced (10 rupees less) for delivery in 20 days(%d)");
for loop to store additions in the array without defining the size of the array*/

#include<stdio.h>
#include<string.h>
int apple(int);
void main()
{
    int login;
    any_login:
    printf("\n1. Login as a farmer\n2. Login as a user");
    scanf("%d", &login);
    switch(login)
    {
    case 1:
        {
            goto farmer_login;
            break;
        }
    case 2:
        {
            goto user_login;
            break;
        }
    }

int a, action, s;

user_login:

    printf("\n\nWelcome! We've got a variety of products for you.");
    printf("\n\nChoose at your convenience :) ");
    printf("\n\nEnter the code of the product you want to choose.");

    int fav, items;
    int b1=0, b2=0, b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0;
    int v1=0, v2=0;// b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0;
    again:
    //printf("\nHow many items would you want to purchase?\n");
    //scanf("%d", &items);
    printf("\n\nWhat do you want to buy? \n1. Fruits\t\t2. Vegetables\n");
    scanf("%d", &fav);

    int fruits, vegies;
    char opt1 = 'c', opt2 = 'c';
    //int opt1, opt2;

    switch(fav)
    {
        case 1:
            printf("\nFun fact: Figs are believed to be the first cultivated fruit! ");
    list1:
        printf("\n\nSelect whatever you to want to add to your cart: ");
    /*fruits[0][0] = Products;
    fruits[0][1] = Prices per kg;
    fruits[1][0] = Apples;
    fruits[1][1] = Rs. 44;
    printf("%s", fruits[2][2]);
    char *fruits[111000]= {"1. Apples    44", "2. Apricots    101", "3. Avocados    56", "4. Banana    87"};
    printf("\n\n%s", *fruits[111000]);*/
    printf("\nProducts: \t\t\t\t\t Price per kg: ");
    printf("\n1. Apples: \t\t\t\t\t Rs. 44");
    printf("\n2. Apricots: \t\t\t\t\t Rs. 101");
    printf("\n3. Avocados: \t\t\t\t\t Rs. 56 (per piece)");
    printf("\n4. Bananas: \t\t\t\t\t Rs. 24 (per piece)");
    printf("\n5. Custard Apple: \t\t\t\t Rs. 115");
    printf("\n6. Grapes: \t\t\t\t\t Rs. 76");
    printf("\n7. Guava: \t\t\t\t\t Rs. 99");
    printf("\n8. Lychee: \t\t\t\t\t Rs. 127 (per dozen)");
    printf("\n9. Mango (ripe): \t\t\t\t Rs. 97( per dozen)");
    printf("\n10. Mango (unripe): \t\t\t\t Rs. 70 (per dozen)");
    printf("\n11. Orange: \t\t\t\t\t Rs. 89");
    printf("\n12. Papaya: \t\t\t\t\t Rs. 105");
    printf("\n13. Pears: \t\t\t\t\t Rs. 106");
    printf("\n14. Pineapples: \t\t\t\t Rs. 69 (per piece)");
    printf("\n15. Pomegranates: \t\t\t\t Rs. 88");
    printf("\n16. Sweet lime: \t\t\t\t Rs. 65 (per dozen)");
    printf("\n17. Watermelons: \t\t\t\t Rs. 127\n");
    scanf("%d", &fruits);
    break;

case 2:
    list2:
    printf("\n\nFun fact: Potato is the first vegetable to be grown in space!");
    printf("\n\nSelect whatever you to want to add to your cart: ");
    printf("\n\nProducts: \t\t\t\t\t Price per kg: ");
    printf("\n1. Bitter gourd: \t\t\t\t 50 ");
    printf("\n2. Bottle gourd: \t\t\t\t 80 ");
    printf("\n3. Brinjal: \t\t\t\t\t 70 ");
    printf("\n4. Cabbage: \t\t\t\t\t 60 ");
    printf("\n5. Capsicum: \t\t\t\t\t 80 ");
    printf("\n6. Cauliflower: \t\t\t\t 80 ");
    printf("\n7. Garlic: \t\t\t\t\t 200 ");
    printf("\n8. Ginger: \t\t\t\t\t 100 ");
    printf("\n9. Green Peas: \t\t\t\t 70 ");
    printf("\n10. Lady finger: \t\t\t\t 80 ");
    printf("\n11. Ivy gourd: \t\t\t\t 100 ");
    printf("\n12. Spinach: \t\t\t\t\t 20 ");
    printf("\n13. Potato: \t\t\t\t\t 30 ");
    printf("\n14. Pumpkin: \t\t\t\t\t 40 ");
    printf("\n15. Onion: \t\t\t\t\t 40 ");
    printf("\n16. Sweet Potato: \t\t\t 50 ");
    printf("\n17. Whole corn: \t\t\t\t 42 ");
    scanf("%d", &vegies);

    int quantity, bill = 0;
    if (vegies = 1)
    {
        printf("\nHow many kgs would you like to order? ");
        scanf("%d", &quantity);
        bill = bill + 50*quantity;

        break;
    }



    }

  int quantity, bill=0;

  //int bi1, bi2,
  int fbill=0, qt1=10,qt2=10,ctr1=0,ctr2=0,ctr3=0,ctr4=0,ctr5=0,ctr6=0,ctr7=0,ctr8=0,ctr9=0,ctr10=0,ctr11=0,ctr12=0,ctr13=0,ctr14=0,ctr15=0,ctr16=0,ctr17=0; // total_cost;
  char cart_try[17];
    switch (fruits)
    {
        case 1:
            printf("\nKilograms available are: %d", qt1);
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            qt1 = qt1 - quantity;
            if(qt1<10)
            {
                 cart_try[0]="apples";

            }

            goto bi1;
            end1:
            break;

        case 2:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            qt2 = qt2 - quantity;
             if(qt2<10)
            {
                 cart_try[1]="apricots";


            }
            printf("\n\n%d kgs of Apricots have been added to your cart!!", quantity);
            goto bi2;
            end2:
            break;

        case 3:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi3;
            end3:
            break;

         case 4:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi4;
            end4:
            break;

        case 5:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi5;
            end5:
            break;

        case 6:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi6;
            end6:
            break;

        case 7:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi7;
            end7:
            break;

        case 8:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi8;
            end8:
            break;

        case 9:
            printf("\nHow many dozens would you like to order? ");
            scanf("%d", &quantity);
            goto bi9;
            end9:
            break;

        case 10:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi10;
            end10:
            break;

        case 11:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi11;
            end11:
            break;

        case 12:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi12;
            end12:
            break;

        case 13:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi13;
            end13:
            break;

        case 14:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi14;
            end14:
            break;

        case 15:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi15;
            end15:
            break;

        case 16:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi16;
            end16:
            break;

        case 17:
            printf("\nHow many kgs would you like to order? ");
            scanf("%d", &quantity);
            goto bi17;
            end17:
            break;
    }


    printf("\n\nChoose your preferred action:\n ");

    printf("\na. Continue shopping fruits");
    printf("\nb. Continue shopping vegetables");
    printf("\nc. Go to the cart");
    printf("\nd. Final bill\n");
    printf("\ne. Logout");
    scanf("\n%s", &opt1);

    switch (opt1)
    {
        case 'a':
        goto list1;
        break;

    case 'b':
        goto list2;
        break;

    case 'c':
        goto cart;
        break;

    case 'd':
        goto total_cost;
        break;
    case 'e':
        goto any_login;
        break;
    }


    /*if (opt1 = 1)
        goto list1;

    else if (opt1 = 2)
        goto list2;
    else
        goto cart;*/

  cart:
     printf("\nWelcome to your cart!");
     printf("\nThe items in your cart are: ");
    if(ctr1>=1)
    {
        printf("\n Apples");
    }
    if(ctr2>=1)
    {
        printf("\n Apricots");
    }
    /*if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }
    if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }if(ctr1>=1)
    {
        printf("\n Apples")
    }*/
     
     
     printf("\nWhat do you wish to do?");
     printf("\na. Add another product \nb. Remove a product\nc. Generate the bill\n");
     scanf("%s", &opt2);

     switch (opt2)
     {
     case 'a':
         goto again;
         break;

     case 'b':
         //goto remove;
         break;

     case 'c':
        printf("\n\nOur AI doesn't believe in bargaining!");
        //goto fbill;
        break;


     }


    bi1:
        printf("\n%d kgs of Apples have been added to your cart!", quantity);
        b1 = quantity*44;
        printf("\nYour bill is: %d", b1);
        goto end1;

    bi2:
        printf("\n%d kgs of Apricots have been added to your cart!", quantity);
        b2 = quantity*101;
        printf("\nYour bill is: %d", b2);
        goto end2;

    bi3:
        printf("\n%d kgs of Avocados have been added to your cart!", quantity);
        b3 = quantity*101;
        printf("\nYour bill is: %d", b3);
        goto end3;


    bi4:
        printf("\n%d pieces of Bananas have been added to your cart!", quantity);
        b4 = quantity*24;
        printf("\nYour bill is: %d", b4);
        goto end4;


    bi5:
        printf("\n%d kgs of Custard apples have been added to your cart!", quantity);
        b5 = quantity*115;
        printf("\nYour bill is: %d", b5);
        goto end5;


    bi6:
        printf("\n%d Grapes of Apricots have been added to your cart!", quantity);
        b6 = quantity*76;
        printf("\nYour bill is: %d", b6);
        goto end6;

    bi7:
        printf("\n%d Guavas of Apricots have been added to your cart!", quantity);
        b7 = quantity*99;
        printf("\nYour bill is: %d", b7);
        goto end7;

    bi8:
        printf("\n%d kgs of Lychee have been added to your cart!", quantity);
        b8 = quantity*127;
        printf("\nYour bill is: %d", b8);
        goto end8;


    bi9:
        printf("\n%d dozen of Mango (ripe) have been added to your cart!", quantity);
        b9 = quantity*70;
        printf("\nYour bill is: %d", b9);
        goto end9;


    bi10:
        printf("\n%d dozen of Mango (unripe) have been added to your cart!", quantity);
        b10 = quantity*70;
        printf("\nYour bill is: %d", b10);
        goto end10;


    bi11:
        printf("\n%d kgs of Oranges have been added to your cart!", quantity);
        b11 = quantity*89;
        printf("\nYour bill is: %d", b11);
        goto end11;


    bi12:
        printf("\n%d kgs of Papayas have been added to your cart!", quantity);
        b12 = quantity*105;
        printf("\nYour bill is: %d", b12);
        goto end12;


    bi13:
        printf("\n%d kgs of pears have been added to your cart!", quantity);
        b13 = quantity*106;
        printf("\nYour bill is: %d", b13);
        goto end13;


    bi14:
        printf("\n%d kgs of Pineapples have been added to your cart!", quantity);
        b14 = quantity*69;
        printf("\nYour bill is: %d", b14);
        goto end14;


    bi15:
        printf("\n%d kgs of Pomegranates have been added to your cart!", quantity);
        b15 = quantity*88;
        printf("\nYour bill is: %d", b15);
        goto end15;


    bi16:
        printf("\n%d kgs of Sweet limes have been added to your cart!", quantity);
        b16 = quantity*65;
        printf("\nYour bill is: %d", b16);
        goto end16;


    bi17:
        printf("\n%d pieces of Watermelons have been added to your cart!", quantity);
        b17 = quantity*127;
        printf("\nYour bill is: %d", b17);
        goto end17;

    total_cost:
            fbill = b1+b2+b3+b4+b5+b6+b7+b8+b9+b10+b11+b12+b13+b14+b15+b16+b17;
            printf("\nYour current bill is: %d", fbill);


farmer_login:
    // int s,*pay1=0,*pay2=0,*pay3=0,*pay4=0,*pay5=0,*pay6=0,*pay7=0,*pay8=0,*pay9=0,*pay10=0,*pay11=0,*pay12=0,*pay13=0,*pay14=0,*pay15=0,*pay16=0,*pay17=0;
    printf(" *****Welcome to the Farmer's account *****");
    printf("\n select the action you want to perform ");
    jump:
    printf(" \n 1: check fruit stock \t 2: check vegetable stock \t 3:logout ");
    scanf("%d", &s);
    switch (s)
{
    case 1:
    {

        printf(" \n quantities jo bhi hogi");

        printf(" \n enter the quantity you want to update or enter -1 to exit: ");
        scanf(" %d", &a);

            if (a = 1)
            {
                printf("\nQuantity available is: %d", qt1);
                apple(qt1);
                goto jump;
            }
           /* if (a = -1)
            {

                goto again;
            }
           */ break;
       // }
        /*case 2:
        {
        again:
            printf(" thank you for joining with us");
            // payment();
            break;
        }
        }*/

       // break;
    }
    case 2:
    {
        printf("will c later");
        break;
    }
    case 3:
    {
         printf(" thank you for joining with us");
         goto user_login;
         break;
    }
}
return;
}


int apple(int qt1)
{
    int *pay1 = 0, b;
    if (qt1 < 6)
    {

        printf(" how many kilos of quantity you want to add?");
        //can i use a for 2 purposes?
        scanf("%d", &b);
        qt1 = qt1 + b;
        printf(" \nyou have successfully added %d kilos to your quantity", b);
        printf("\nUpdated value: %d", qt1);
    }
    else
    {
        printf(" sufficient quantity of your product available");
    }
    return 0;
}


