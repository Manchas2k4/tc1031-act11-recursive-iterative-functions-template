// =================================================================
//
// File: factorial.h
// Author: Pedro Perez
// Description: This file contains the test cases for the functions
//				of this activity have to pass. IMPORTANT: this file
//				should not be modified.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================

#include "activity.h"
#include <gtest/gtest.h>

TEST(Activity11, IterativeSum) {
	EXPECT_EQ(1, sumaIterativa(1));
	EXPECT_EQ(55, sumaIterativa(10));
	EXPECT_EQ(1275, sumaIterativa(50));
	EXPECT_EQ(5050, sumaIterativa(100));
	EXPECT_EQ(125250, sumaIterativa(500));
}

TEST(Activity11, RecursiveSum) {
	EXPECT_EQ(1, sumaRecursiva(1));
	EXPECT_EQ(55, sumaRecursiva(10));
	EXPECT_EQ(1275, sumaRecursiva(50));
	EXPECT_EQ(5050, sumaRecursiva(100));
	EXPECT_EQ(125250, sumaRecursiva(500));
}

TEST(Activity11, DirectSum) {
	EXPECT_EQ(1, sumaDirecta(1));
	EXPECT_EQ(55, sumaDirecta(10));
	EXPECT_EQ(1275, sumaDirecta(50));
	EXPECT_EQ(5050, sumaDirecta(100));
	EXPECT_EQ(125250, sumaDirecta(500));
}

int main(int argc, char **argv)  {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
