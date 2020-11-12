#include<stdio.h>

struct burger
{
  char toppingsB[3];
  char drinkB[3];
  int priceB[3];
};

struct pizza
{
  char toppingsP[3];
  char drinkP[3];
  int priceP[3];
};

struct side
{
  char salad[3];
  char chips[2];
  char fruit[3];
  int price;
};



int main()
{
  int firstChoice;
  printf("Welcome to Our Restaurant!\nWe have a simple and strict selection for you to choose from.\n");
  printf("Type 1 if you want a burger and 2 if you want a pizza: ");
  scanf("%d\n", &firstChoice);

  if(firstChoice = 1)
  {
    int topping;
    int topping1;
    int topping2;
    int topping3;

    printf("How many toppings do you want?(1, 2, or 3)\n");
    scanf("%d", &topping);
    for(int i = 0; i < topping; i++ )
    {
      printf("Do you want Lettuce(1), Tomato(2), or Cheese(3)? (input number)\n");

    }
  }
  return 0;
}
