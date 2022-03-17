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

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries
#include "p1.h"

int getIntPositive(int* input)
{
	int userInput;
	do 
	{
		// scanning into local variable
		scanf("%d", &userInput); 
		// checking if the input isnt a positive number
		if (userInput <= 0) 
		{
			printf("ERROR: Enter a positive value: ");
		}
		// continue looping while the input isnt correct
	} while (userInput <= 0); 

	if (input != NULL) // if input has a valid address attached to it
	{
		// set input as whatever the user entered using dereferencing
		*input = userInput; 
	}

	return userInput; // return the input again
}

double getDoublePositive(double* input)
{
	double userInput = 0.0;
	do
	{
		scanf("%lf", &userInput);
		if (userInput <= 0.0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (userInput <= 0.0);

	if (input != NULL)
	{
		*input = userInput;
	}

	return userInput;
	
}

void openingMessage()
{
	// printing the opening message
	printf("Cat Food Cost Analysis\n");
    printf("======================\n\n");
    printf("Enter the details for %d dry food bags of product data "
	"for analysis.\n", MAX_PRODUCTS);       
    printf("NOTE: A 'serving' is %dg\n", GRAMS_PER_SERVING);       
    printf("\n");

    return;
}

struct CatFoodInfo getCatFoodInfo(int sequenceNumber)
{
	struct CatFoodInfo tmp; // creating temporary variable
	printf("Cat Food Product #%d\n", sequenceNumber + 1);
	printf("--------------------\n");
	printf("SKU           : ");
	tmp.sku = getIntPositive(NULL); // getting the sku
    printf("PRICE         : $");
	tmp.price = getDoublePositive(NULL); // getting the price
    printf("WEIGHT (LBS)  : "); 
	tmp.weight = getDoublePositive(NULL); // getting the weight
    printf("CALORIES/SERV.: ");
	tmp.calories = getIntPositive(NULL); // getting the calories
	printf("\n");
// returning the information that was entered
	return tmp; 
}


// Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// Displaying all of the info that was entered previously
void displayCatFoodData(struct CatFoodInfo tmp)
{
	printf("%07d %10.2lf %10.1lf %8d\n", tmp.sku, tmp.price, 
								   tmp.weight, tmp.calories);
    return;
}

void start()
{
	// creating an empty array
	struct CatFoodInfo arr[MAX_PRODUCTS] = {{0}}; 
	int i; // counter variable
	// printing the opening message
	openingMessage(MAX_PRODUCTS); 
	// looping through all of the products
	for (i = 0; i < MAX_PRODUCTS; i++) 
	{
		// storing information into the array
		arr[i] = getCatFoodInfo(i); 
	}
	// printing the header
	displayCatFoodHeader();
	// looping through all of the products 
	for (i = 0; i < MAX_PRODUCTS; i++) 
	{
		// printing info from array
		displayCatFoodData(arr[i]); 
	}
	return;
}