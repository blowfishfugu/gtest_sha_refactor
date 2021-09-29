#include "stdafx.h"
#include "Unit_Main.h"
#ifdef _UNIT_TEST

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	int result= RUN_ALL_TESTS();
	
	printf( "\n<press enter to exit>" );
	getchar();
	return result;
}

#endif