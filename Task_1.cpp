// Task_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StringList.h"


int main()
{
	char *list=0;
	StringListInit(&list);
	StringListAdd(&list, "b");
	StringListAdd(&list, "b");
	StringListAdd(&list, "a");
	StringListAdd(&list, "c");
	
	//Display(list);
	//StringListRemove(&list, "c");
	//Display(list);
	//StringListReplaceInStrings(&list, "b", "c");
	//StringListSort(&list);
	//Display(list);
	StringListRemoveDuplicates(&list);
	Display(list);
	StringListDestroy(&list);
	

		system("pause");
    return 0;
}

