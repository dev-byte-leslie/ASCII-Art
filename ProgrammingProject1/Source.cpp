////Loop until the end of file
//while ( !fIn.eof () )
//{
//	//Read in the next line and store in proper variables
//	for ( int i = 0; i < 1; i++ )
//	{
//		row = readInt ( fIn );
//		column = readInt ( fIn );
//		character = readChar ( fIn );
//		count = readInt ( fIn );
//	}
//
//	////Print out values
//	//for ( int i = 0; i < 1; i++ )
//	//{
//	//     cout << "(" << row << ", " << column << ", "
//	//		   << character << ", " << count << ")";
//	//}
//
//	for ( int i = 0; i < 1; i++ )
//	{
//		//Output number of spaces increment column
//		cout << string ( column , '_' );
//		currentColumn += column;
//
//		cout << string ( count , character );
//		currentColumn += count;
//
//		tempRow = readInt ( fIn ); //Next row that characters are placed on
//
//		if ( tempRow == row )//if the next row is the same row you just placed characters on
//		{
//			do
//			{
//				//read in the variables
//				column = readInt ( fIn );
//				character = readChar ( fIn );
//				count = readInt ( fIn );
//
//				//Output number of spaces increment column
//				cout << string ( column , '_' );
//				currentColumn += column;
//
//				//output the number of characters and increment curent column
//				cout << string ( count , character );
//				currentColumn += count;
//
//
//			}
//			while ( tempRow == row ); //do this while next row is same as this row
//
//		}
//		else
//		{
//			cout << endl;//output a new line and start again
//		}
//	}
//}

//if( /*row == nextRow */ )
//{
//	column = readInt ( fIn );
//	character = readChar ( fIn );
//	count = readInt ( fIn );
//}
//else//row != next row
//{
//	cout << endl;
//	//go back in fIn so I can read in all 4 variables at once
//}

////Print out values
//for ( int i = 0; i < 1; i++ )
//{
//     cout << "(" << row << ", " << column << ", "
//		   << character << ", " << count << ")";
//}

//for ( int i = 0; i < 1; i++ )
//{

//	if ( tempRow == row )//if the next row is the same row you just placed characters on
//	{
//		do
//		{
//			//read in the variables
//			column = readInt ( fIn );
//			character = readChar ( fIn );
//			count = readInt ( fIn );

//			//Output number of spaces increment column
//			cout << string ( column , '_' );
//			currentColumn += column;

//			//output the number of characters and increment curent column
//			cout << string ( count , character );
//			currentColumn += count;
//			
//		}while ( tempRow == row ); //do this while next row is same as this row

//	}
//	else
//	{
//		cout << endl;//output a new line and start again
//	}
