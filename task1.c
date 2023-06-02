#include <stdio.h>
#include<stdlib.h>

struct Coord {
	int x;
	int y;
};


int canGet(struct Coord start, struct Coord finish){
    if ((abs(start.x - finish.x) <= 1) && (abs(start.y - finish.y <= 1))) return 1;
    return 0;
}


int main(){
    int x1, y1, x2, y2, res;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    struct Coord start = {x1, y1};
    struct Coord finish = {x2, y2};
    res = canGet(start, finish);
    if (res == 1) {
        printf("можно попасть");
    } else {
        printf("нельзя попасть");
    }
    return 0;
}