#include<stdio.h>
void Swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
int PartSort(int *a, int begin,int end)
{

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
int main()
{
	int a[10] = {5,4,9,8,3,2,4,1,0,7};

	//PartSort(a, 0, sizeof(a)/sizeof(a+0)-1);
	QuickSort(a, 0, sizeof(a) / sizeof(a + 0) - 1);




	return 0;
}