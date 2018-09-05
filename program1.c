#include<stdio.h>
#include <math.h>
#include <assert.h>

//Function to calcualte next multiple of two given values
int findNextMultiple(int number1, int number2){
	//TODO
}

//Function to convert Fahrenheit to Celsuius
float convertFtoC(float fahrenheit){
	//TODO
}

//Function to calculate fibonacci series for first 20 numbers
int fibonacci(){
	//TODO
}

//Function to cast a long to an int
int castToInt(long num){
	//TODO
}

//Function to cast a long to an double
double castToDouble(long num){
	//TODO
}

//Function to cast a long to an char
char castToChar(long num){
	//TODO
}


int promColor(int rgb_val){
    //TODO
}

//The main driver
int main(){

	printf("\n\t=============================\n");
	printf("\t=           PART A          =\n");
	printf("\t=============================\n\n");

	printf("\n\t=========Test #1: Starting Next Multiple Tests===========\n");
	//For given numbers find next multiple
	int number1 = 365, number2 = 7;
	assert(371 == findNextMultiple(number1,number2));

	number1 = 12258; number2 = 28;
	assert(12264 == findNextMultiple(number1,number2));

	number1 = 996; number2 = 4;
	assert(1000 == findNextMultiple(number1,number2));

	printf("\n\t\t....Next Multiple Tests Passed\n");

	printf("\n\t=========Test #2: Starting Fahrenheit to Celsius Tests===========\n");

	//Convert Fahrenheit value to Celsius value
	float fahrenheit = 95;
	float celsius = convertFtoC(fahrenheit);
	assert(35.0 == celsius);

	fahrenheit = 32;
	celsius = convertFtoC(fahrenheit);
	assert(0.0 == celsius);

	fahrenheit = -40;
	celsius = convertFtoC(fahrenheit);
	assert(-40.0 == celsius);
	printf("\n\t\t....Fahrenheit to Celsius Tests Passed\n");

    printf("\n\t=========Test #3: Starting Casting Tests===========\n");
	//Testing our Casting and how its loses values for wrong casting
	long int large_num = 9223372036854775617;
	int large_num_as_int = castToInt(large_num);
	assert(-191 == large_num_as_int);
	double large_num_as_double = castToDouble(large_num);
	assert(9223372036854775808.0 == large_num_as_double);
	char large_num_as_char = castToChar(large_num);
	assert('A' == large_num_as_char);

	printf("\n\t\t....Casting Tests Passed\n");

    printf("\n\t=========Test #4: Starting Fibonacci Tests===========\n");
    //finding fibonacci series for first 20 numbers
    assert(4181 == fibonacci());

    printf("\n\t\t....Fibonacci Tests Passed\n");

	printf("\n\t=============================\n");
	printf("\t=           PART B          =\n");
	printf("\t=============================\n\n");

    printf("\n\t=========Test #5: Prominent Color Tests===========\n");

    assert(promColor(0xFF0000) == 1);
	assert(promColor(0x00FF00) == 2);
    assert(promColor(0x0000FF) == 3);
    assert(promColor(0x001F3F) == 3);
    assert(promColor(0x3D9970) == 2);
    assert(promColor(0x85144B) == 1);
    assert(promColor(0xAAAAAA) == 0);
    assert(promColor(0xAAFFFF) == 0);
    assert(promColor(0xFFFFAA) == 0);

	printf("\n\t=========ALL TESTS PASSED===========\n");

	return 0;
}
