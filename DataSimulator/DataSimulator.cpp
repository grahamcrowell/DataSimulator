// DataSimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "unit_tests.h"
#include "table.h"
#include "schema.h"

void user_exit()
{
	std::cout << std::endl << std::endl << "execution complete" << std::endl << "press enter to exit" << std::endl;
	getchar();
}

int main()
{
	//unit_test::SqlTableInfo_();
	//unit_test::OdbcConnection_();
	//unit_test::sql_query();
	////unit_test::schema_builder();
	//unit_test::schema_class_builder();
	//unit_test::meta_data();
	unit_test::meta_output();
	user_exit();
	return 0;
}

