/*
*****************************************************************************
                          Workshop - #8 (P1)
Full Name  : Artem Ruzaev
Student ID#: 124086216
Email      : aruzaev@myseneca.ca
Section    : NPP

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define MAX_PRODUCTS 3 // the max amount of products that the user can enter
#define GRAMS_PER_SERVING 64 // how many grams there is per serving


// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
    int sku; // the sku or the key of each item
    double price; // the price of each item
    int calories; // how many calories each item is
    double weight; // the weight of each item
};



// ----------------------------------------------------------------------------
// function prototypes
int getIntPositive(int*); // getting positive integer (passing the address)
double getDoublePositive(double*); // getting positve double (passing address)
void openingMessage(); // function that will print out opening message
struct CatFoodInfo getCatFoodInfo(int); // getting user input for each item
void displayCatFoodHeader(); // displaying the header function
void displayCatFoodData(struct CatFoodInfo); // displaying the data in a 
                                             // tabular format 
void start(); // function where the program actually begins its logical
              // components
