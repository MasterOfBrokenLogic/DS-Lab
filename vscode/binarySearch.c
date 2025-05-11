#include <stdio.h>

int bsearch(int a[], int n, int item){
	int beg = 0, last = n - 1;
	while(beg <= last){
		int mid = (beg + last) / 2;
		if(item == a[mid])
			return mid;
		else if(item < a[mid])
			last = mid - 1;
		else
			beg = mid + 1;
	}
	return -1;
}

int main(){
	int a[50], item, n, index, i;

	printf("Enter the desired array size: ");
		scanf("%d", &n);

	printf("Enter the array elements: ");
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);

	printf("Enter the element to be searched: ");
		scanf("%d", &item);

	index = bsearch(a, n, item);

	if(index == -1)
		printf("Search is unsuccessful.\n");
	else
		printf("Item found at index %d.\n", index);
	return 0;
	
}
