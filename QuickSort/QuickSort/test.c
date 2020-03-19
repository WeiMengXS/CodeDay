#include<stdio.h>
#include<stdlib.h>

void Swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
int indexnum(int *a, int left, int right)
{

	int mid = (left + right)/2;
	if (a[right] > a[mid])
	{
		if (a[mid] > a[left])
			return mid;
		else if (a[right] > a[left])
			return left;
		else return right;
	}
	else
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] > a[right])
			return right;
		else return left;
		
		

	}

}
int PartSort(int *a, int begin,int end)
{
	//int x = indexnum(a,begin,end);
	//Swap(&a[x],&a[end]);
	int key = end;


		while (end > begin)
		{
			while (end >begin &&a[begin] <= a[key])
			{
				begin++;
			}
			while (end >begin &&a[end] >= a[key])
			{
				end--;
			}
			Swap(&a[end], &a[begin]);


		}
		Swap(&a[end], &a[key]);
	
		return end;
}

void QuickSort(int *a, int left, int right)
{
	if (left >= right)
		return;
	int keyindex = PartSort(a,left,right);

	QuickSort(a, left, keyindex - 1);
	QuickSort(a, keyindex + 1, right);



}
void CountSort(int* a, int n)
{
	// 1、计算出统计次数的数组的大小
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];

		if (a[i] < min)
			min = a[i];
	}

	int range = max - min + 1;
	int* countA = (int*)malloc(sizeof(int)*range);

	// 1、统计数据出现的次数

	for (int i = 0; i < range; i++)
	{
		countA[i] = 0;
	}
	// 2、根据次数排序，写回原数组
	for (int i = 0; i < 0; i++)
	{
		int count = a[i] - min;
		countA[count]++;
	}

	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (countA[i]--)
		{
			a[index++] = i + min;
		}

	}
	free(countA);
}
int main()
{
	int a[10] = {8,1,2,7,9,3,4,5,10,6};

	//PartSort(a, 0, sizeof(a)/sizeof(a+0)-1);
	//QuickSort(a, 0, sizeof(a) / sizeof(a + 0) - 1);

	CountSort(a, 10);

	system("pause");
	return 0;
}
