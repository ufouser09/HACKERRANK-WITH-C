#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
typedef struct node{
    int length,width,height;
}box;

int is_lower_than_max_height(box dizi){
    //printf("1\n");
    if(dizi.height<MAX_HEIGHT){
        return 1;
    }
    return 0;
}
int get_volume(box dizi){
    //printf("2\n");
    return dizi.height*dizi.length*dizi.width;
}
int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
