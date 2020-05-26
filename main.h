#pragma once
#include <iostream>
#include <Windows.h>

// Main Vars
static long Input_Value{ 0 }; // base number, before & after
static unsigned int Input_Choice{ 0 }; // 1-4 
static long finished_value{ 0 }; // calculated number 

// Function Vars / declarations
static void add_func();
static long add_value{ 0 };

static void subtract_func();
static long subtract_value{ 0 };

static void multiply_func();
static long multiply_value{ 0 };

static void divide_func();
static long divide_value{ 0 };
