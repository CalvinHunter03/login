#include<stdio.h>

struct order
{
  const char *name;
  const char *type;
  const char *toppings;
  const char *drink;
  const char *side;
  int price;

};



void toString(struct order customer)
{
  printf("Name: %s \n", customer.name);
  printf("Order: %s with %s\n",customer.type, customer.toppings);
  printf("Drink: %s\n", customer.drink);
  printf("Side: %s\n", customer.side);
  printf("TOTAL: $%d\n", customer.price);
}

int main()
{
  int orderNum;
  int firstChoice;
  char Cname[30];
  printf("Welcome to Our Restaurant!\nWe have a simple and strict selection for you to choose from.\nWhat is your name?\n");
  scanf("%s", Cname);
  printf("How many orders do you want? \n");
  scanf("%d", &orderNum);
  for(int i = 0; i < orderNum; i++)
  {
    printf("Type 1 if you want a burger and 2 if you want a pizza: ");
    scanf("%d", &firstChoice);
    int pricee = 0;

    if(firstChoice == 1)
    {
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

      struct order customer = {Cname,"Burger", toppingB, drinkB, sideB, pricee};
      toString(customer);

    }

    if(firstChoice == 2)
    {
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

      struct order customer = {Cname, "Pizza", toppingP,drinkP, sideP, pricee};
      toString(customer);
    }
  }
  return 0;
}
