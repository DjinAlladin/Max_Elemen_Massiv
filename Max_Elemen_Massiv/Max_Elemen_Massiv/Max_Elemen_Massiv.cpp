// Max_Elemen_Massiv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задан  одномерный  массив  из N элементов.  Найти  значение  максимального элемента массива.
// Поиск максимума оформить в виде функции max : b– указательна целое, k–количество элементов в массиве.

# include <stdio.h> 
# define N 3 
int max(int k, int* b)
{
	int i, m1;
	m1 = *b; //*b – значение 1-го эл-та массива (с индексом 0) 
	for (i = 1; i < k; i++)
	{
		b++;//Переход к следующему элементу массива 
		if (m1 < *b)m1 = *b; //*b – значение текущего элемента массива} 
		return(m1);
	}
}
	int main()
	{
		static int A[N] = { 1,7,3 };
		printf("\n max=%d", max(N, &A[0]));
		return 0;
	}
	// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
	// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

	// Советы по началу работы 
	//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
	//   2. В окне Team Explorer можно подключиться к системе управления версиями.
	//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
	//   4. В окне "Список ошибок" можно просматривать ошибки.
	//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
	//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
