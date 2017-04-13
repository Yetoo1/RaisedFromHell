#include <stdio.h>
void stats(int resource, int doom)
{
    
}
int main(void)
{
    int i; int j; int resource = 10; int doom = 0; int end = 0; 
    int unit[10][10];
    char* number;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            unit[j][i] = 0; //this would work if x++ was done here because j is gompleting to the end here, it alkl works out don't worry
            //printf("%d", unit[j][i]);
        }
    }
    /*number ranges
    0 = Undiscovered space
    1 = Discovered space
    2 -> 5 = trash, wood, puddles, odd but seemingly useless items, the lower the number, the more rare the item
    6 -> 12 = Places to restock, every time you are in a space of this number range, the doom meter decreased by 1 and you have the option of spending doom on resources, you want to have a low amount of doom, but you need doom for resources
    13 -> 26 = Enemy Places
    ... (Add more)
    346 = End, if you manage to get here you win the game, but there may be a price that you have to pay inorder to pass, strenuous, or mind numbingly hard
    */
    printf("You have mastered the wraths of hell and now you must do what you can to exit the intermediate world.\nStrange things occur in this world.\n");
    while (end == 0)
    { //for some reason the shit below breaks out of the loop so this opne above catches it and then the one below is regained
        while (end == 0)
        {
           
           printf(""); 
        }
    }
    return 0;
}
