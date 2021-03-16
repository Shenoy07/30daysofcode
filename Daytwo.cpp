#include<iostream>
#include<math.h>
int main()
{
float mealCost,tipPercent , taxPercent;
float totalCost;

std::cin>>mealCost;
std::cin>>tipPercent;
std::cin>>taxPercent;

float final=0;

float tip,tax;
tipPercent= (tipPercent/100)* mealCost;
taxPercent= (taxPercent/100)* mealCost;
 
final = mealCost+tipPercent+taxPercent;
std::cout<<round(final);


return 0;
}
