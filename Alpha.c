#include<stdio.h>

//structure for a burger order
struct burger
{
  const char *name;
  const char *toppingsB;
  const char *drinkB;
  const char *sideB;
  int priceB;
};

//structure for if a customer wants a pizza
struct pizza
{
  const char *name;
  const char *toppingsP;
  const char *drinkP;
  const char *sideP;
  int priceP;
};

//toString for the burger structure
void toStringB(struct burger customer)
{
  printf("Name: %s \n", customer.name);
  printf("Order: Burger with %s\n", customer.toppingsB);
  printf("Drink: %s\n", customer.drinkB);
  printf("Side: %s\n", customer.sideB);
  printf("TOTAL: $%d\n", customer.priceB);
}

//toString for the pizza structure
void toStringP(struct pizza customer)
{
  printf("Name: %s \n", customer.name);
  printf("Order: Pizza with %s\n", customer.toppingsP);
  printf("Drink: %s\n", customer.drinkP);
  printf("Side: %s\n", customer.sideP);
  printf("TOTAL: $%d\n", customer.priceP);
}


int main()
{
  int firstChoice;
  char Cname[30];
  printf("Welcome to Our Restaurant!\nWe have a simple and strict selection for you to choose from.\nWhat is your name?\n");
  scanf("%s", Cname);
  printf("Type 1 if you want a burger and 2 if you want a pizza: ");
  scanf("%d", &firstChoice);
  int pricee = 0;

//this if statement is for when the customer wants a burger
  if(firstChoice == 1)
  {
    //price is only for a burger and not conditional on amount of toppingsB
    //begins series of questions for toppings, drink, and a side
    pricee += 7;
    char toppingB[20];
    printf("Do you want lettuce, tomato, or cheese?\n");
    scanf("%s", toppingB);

    int booB;
    char drinkB[20] = {"No drink"};
    printf("Do you want a drink? (1 = yes, 0 = no)\n");
    scanf("%d", &booB);
    if(booB == 1)
    {
      pricee += 2;
      printf("Do you want coke, sprite, or water?\n");
      scanf("%s", drinkB);
    }


    int booB1;
    char sideB[20] = {"No Side"};
    printf("Do you want a side? (1 = yes, 0 = no)\n");
    scanf("%d", &booB1);
    if (booB1 == 1)
    {
      pricee += 4;
      printf("Do you want fries, salad, or apple?\n");
      scanf("%s", sideB);
    }

//initializes structure for the customer if they want a burger
    struct burger customer = {Cname, toppingB, drinkB, sideB, pricee};
    toStringB(customer);

  }

//this if statement is for if the customer wants a pizza
  if(firstChoice == 2)
  {

    //price is only for a pizza and not conditional on amount of toppingsB
    //begins series of questions for toppings, drink, and a side
    pricee += 10;
    char toppingP[20];
    printf("Do you want pepperoni, sausage, or mushroom?\n");
    scanf("%s", toppingP);

    int booP;
    char drinkP[20] = {"No Drink"};
    printf("Do you want a drink? (1 = yes, 0 = no)\n");
    scanf("%d", &booP);
    if(booP == 1)
    {
      pricee += 2;
      printf("Do you want coke, sprite, or water?\n");
      scanf("%s", drinkP);
    }


    int booP1;
    char sideP[20] = {"No Side"};
    printf("Do you want a side? (1 = yes, 0 = no)\n");
    scanf("%d", &booP1);
    if (booP1 == 1)
    {
      pricee += 4;
      printf("Do you want fries, salad, or apple?\n");
      scanf("%s", sideP);
    }

//initializes structure for the customer if they want a pizza
    struct pizza customer = {Cname, toppingP,drinkP, sideP, pricee};
    toStringP(customer);



  }


  return 0;
}
