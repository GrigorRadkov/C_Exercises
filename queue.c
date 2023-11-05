#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define Max_Size 50

int arr[Max_Size];
int size = 0;
int top = -1;
int bottom = -1;

int isFull()
{
	return size == Max_Size;
}
int isEmpty()
{
	return size == 0;
}
void push(int nNewData)
{
	if (isFull())
	{
		printf("queue is full");
	}
		
	top = (top + 1) % Max_Size;

	size++;
	arr[top] = nNewData;

}
int pop()
{
	int nNewData = INT_MIN;

	if (isEmpty())
	{
		return INT_MIN;
	}

	nNewData = arr[bottom];
	top = (top + 1) % Max_Size;
	size--;

	return nNewData;
}
int main()
{
	int ch, data;

	while (1)
	{
		printf("Select one of the following:\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Size\n");
		printf("4. Print\n");
		printf("0. Exit\n");

		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("Enter data to push:\n ");
			scanf("%d", &data);

			if (isFull) {
				push(data);
				printf("Element added to queue.\n");
			}
			else
				printf("Queue is full.\n");

			break;

		case 2:
			data = pop();

			if (data == INT_MIN)
				printf("Queue is empty.\n");
			else
				printf("Data = %d\n", data);

			break;

		case 3:

			if (isEmpty())
				printf("Queue is empty.\n");
			else
				printf("Queue size => %d\n", size);

			break;
		case 4:
			for (int i = 0; i < size; i++) {
				printf("%d: %d\n", i, arr[i]);
			}
			break;
		case 0:
			printf("Exiting\n");
			exit(0);

		default:
			printf("Input not valid. Try again. \n");
			break;
		}
	}
}