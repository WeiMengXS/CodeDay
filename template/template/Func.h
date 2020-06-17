#pragma once
#include<iostream>
using namespace std;


void fun1(int x);

template<class T>
T Add(const T& left, const T& right);

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}
void fun1(int x)
{
	
}