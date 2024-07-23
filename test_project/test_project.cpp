#include <iostream>
#include "quick_sort.h"

int main()
{

	quick_sort qsort;
	int a[] = { 55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100,
							55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100,
							55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100,
							55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100,
							55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100,
							55, 32, 61, 41, 89, 25, 53, 1, 36, 70, 22, 88, 76, 67, 11, 9, 24, 39, 50, 59,
							73, 29, 13, 95, 80, 38, 75, 92, 44, 91, 84, 16, 3, 87, 5, 42, 4, 26, 82, 14,
							57, 64, 40, 12, 81, 96, 48, 15, 97, 33, 56, 71, 69, 20, 99, 7, 85, 78, 68, 30,
							51, 63, 83, 54, 49, 19, 86, 17, 98, 66, 58, 18, 34, 10, 31, 21, 47, 65, 93, 28,
							94, 72, 74, 45, 23, 2, 35, 8, 52, 60, 46, 90, 6, 77, 27, 62, 43, 37, 79, 0, 100 };


	std::vector<int> vec5(a, a + sizeof(a) / sizeof(a[0])); // Initializes a vector with elements from an array

	qsort.q_sort(vec5);

	for (int i = 0; i < vec5.size(); i++)
	{
		printf("%d\n\r", vec5[i]);
	}

	std::cout << "this worked" << std::endl;
	return 0;
}

