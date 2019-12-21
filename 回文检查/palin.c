#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//回文判断
void init(char *array){
	for (int i = 0; i < 100; i++){
		array[i] = 0;
	}
}
int getStringSize(char *array){
	int count = 0;
	for (int i = 0; i < 100; i++){
		if (array[i] != 0){
			count++;
		}
	}
	return count;
}
int isPalin(char *array, int size){
	//int count = getStringSize(*array);
	int left = 0;
	int right = size-1;
	while (left <= right){
		if (array[left] != array[right]){
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}
int main(){
	char string1[100];
	init(string1);
	//printf("%s\n", string1);
	scanf("%s", &string1);
	//printf("\n%s\n", string1);
	//int count1 = getStringSize(string1);
	if (isPalin(string1, getStringSize(string1))){
		printf("yes!\n");
	}
	else{
		printf("no!\n");
	}
	system("pause");
	return 0;

}
