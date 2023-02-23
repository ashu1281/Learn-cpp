#include<stdio.h>
#include "b.h"
#include "Circle.h"

int main() {
	int result = Add(1, 2);
	printf("result = %d\n", result);
	printf("PI = %lf\n", PI);
	Circle u(10);
	printf("Area = %ld\n", u.GetArea());

}
