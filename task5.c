#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
	int rating;
};


float averageStudents(struct University data[], int n){
    float average = 0;
    for (int i = 0; i < n; i++){
        average += data[i].numberOfStudents; 
    }
    return average / n;
}


int main(){
    int n;
    scanf("%d", &n);
    struct University students[n];
    for (int i = 0; i < n; i++){
        students[i].name = malloc(100 * sizeof(char));
        scanf("%s %d %d", students[i].name, &students[i].numberOfStudents, &students[i].rating); 
    }
    printf("%.2f", averageStudents(students, n));
    for (int i = 0; i < n; i++) {
        free(students[i].name);
    }
    return 0;
}