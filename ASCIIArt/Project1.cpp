/********************************************************************
*
*File: Project1.cpp
*Author: Leslie Murphy
*Description: C++ code that draws ASCII art
*Date: 3-7-16
*Comments: I was unable to get the sides of the frame fully working.
*
*********************************************************************/

// -- PREPROCESSOR DIRECTIVES -- //
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// -- FUNCTION DECLARATIONS -- //
string prompt();
int readInt( ifstream &fIn );
char readChar( ifstream &fIn );
void topBorder ( int width );
void bottomBorder ( int width );
void errCheck ( int currentRow , int currentColumn , int height , int width );

// -- MAIN -- //
int main ( int argc , char** argv )
{
	// -- VARIABLES -- //
	int width = 0;        //The width of the picture
	int height = 0;       //The length of the picture
	int row = 0;          //The row on which you're placing the character
	int prevRow = 1;	  //The row of the next information to be printed
	int column = 0;       //The column in that row on which youre placing the character
	char character = '0'; //The character you are placing
	int count = 0;        //The amount of that character you are placing
	int currentRow = 1;   //The spot that the cursor is currently at on the row
	int currentColumn = 0;
	
	char side = 186;	  //ASCII value for the sides of the border

	ifstream fIn; //Instance of Ifstream for file procesing

	/**************************************************************************************/

	//Prompt user and open the file
	string file = prompt();
	fIn.open ( file );

	//Check to see if opening the file caused errors
	if ( !fIn.is_open() )
	{
		cerr << "Error:" << file << " could not be opened." << endl;
	}
	else
	{
		cout << "File opened properly" << endl << endl << endl;
	}

	//Read in height and width of picture
	width = readInt( fIn );
	height = readInt( fIn );

	const int MAX_ROW = height - 1; //Max size of the height/rows of picture
	const int MAX_COL = width - 1; //Max size of the width/collumn of the picture
					   
	//Print the top border and the first side, then increment column
	topBorder ( width );
	
	/*Trying to get the sides printed out*/
	//cout << side;
	//currentColumn++;
								   
	//Loop until the end of file
	while ( !fIn.eof() )
	{
		//Read and store each variable
		row = readInt ( fIn );
		column = readInt ( fIn );
		character = readChar ( fIn );
		count = readInt ( fIn );
			
		if ( row == prevRow )//If the current row is equal to previous row
		{
			//Output number of spaces, increment column
			cout << string ( column - currentColumn , ' ' );
			currentColumn += (column - currentColumn);
			errCheck ( currentRow , currentColumn , height , width );

			//Output number of characters, increment column
			cout << string ( count , character );
			currentColumn += count;
			errCheck ( currentRow , currentColumn , height , width );
		}
		else //If the current row is not equal to previous row
		{
			
			/*Trying to get the sides printed out*/
			//int numberOfSpaces = (width - currentColumn)-1;
			//
			//for ( int i = 0; i < numberOfSpaces; i++ )
			//{ 
			//	cout << ' ';
			//}
			//cout << side;

			//Go to next line, increment row, set column back to zero			
			cout << endl;
			currentRow++;
			currentColumn = 0;		

			/*Trying to get the sides printed out*/
			//Print the side, then increment column
			//cout << side;
			//currentColumn++;
		
			//Output number of spaces increment column
			cout << string ( column, ' ' );
			currentColumn += (column - currentColumn);
			errCheck ( currentRow , currentColumn , height , width );

			//Output number of characters, increment column
			cout << string ( count , character );
			currentColumn += count;
			errCheck ( currentRow , currentColumn , height , width );
		}

		prevRow = row; //Set the previous row equal to the current row
	
		}

	bottomBorder ( width );

	cout << endl << endl << endl; //Insert white space

	fIn.close ();
	return EXIT_SUCCESS;
	}

/********************************************************************************/
/********************************************************************************/
/********************************************************************************/

// -- prompt() : A function to promt the user to open a file. -- //
string prompt()
{
	string file; //The file that the user wants opened

	//Prompt the user and read in the result
	cout << "Please enter the file that you wish to open: ";
	cin >> file;
	return file;
}

// -- readInt() : A function to read in an int from the ifstream -- //
int readInt( ifstream &fIn )
{
	int temp;
	fIn >> temp;
	return temp;
}

// -- readChar() : A function to read in an char from the ifstream -- //
char readChar( ifstream &fIn )
{
	char temp;
	fIn >> temp;
	return temp;
}

// -- topBorder : A function to print out the top part of the border -- //
void topBorder( int width )
{
	char uLeftCOrner = 201;
	char uRightCorner = 187;
	
	cout << uLeftCOrner;
	cout << string ( width -2 , 205 );
	cout << uRightCorner;
	cout << endl;
}


// -- bottomBorder : A function to print out the botttom part of the border -- //
void bottomBorder ( int width )
{
	char bLeftCOrner = 200;
	char bRightCorner = 188;

	cout << endl;
	cout << bLeftCOrner;
	cout << string ( width - 2 , 205 );
	cout << bRightCorner;

}

void errCheck ( int currentRow, int currentColumn, int height, int width )
{
	if ( currentRow > height || currentColumn > width )
	{
		cerr << "Error: you tried to write outside the boundaries!";
			exit(1);
	}
}