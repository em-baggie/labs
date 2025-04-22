/* Modify Programming Project 7 so that it prompts for five quiz,
grades for each of five stu- dents.
then computes the total score and average score for each student,
and the average score. high score, and low score for each quiz.
*/

// NEED TO FIX - ROWS SHOW STUDENT SCORES, COLUMNS SHOW QUIZ

#include <stdio.h>
#define GRID_SIZE 5
#define MAX_NUM 100
#define MIN_NUM 0


int main(void) {
    int grid[GRID_SIZE][GRID_SIZE] = {0};
    int totalr[GRID_SIZE] = {0};
    int totalc[GRID_SIZE] = {0};
    int totalrr = 0;
    int total_quiz[GRID_SIZE] = {0};
    float avg_quiz[GRID_SIZE] = {0.0};
    int hs[GRID_SIZE] = {MIN_NUM, MIN_NUM, MIN_NUM, MIN_NUM, MIN_NUM};
    int ls[GRID_SIZE] = {MAX_NUM, MAX_NUM, MAX_NUM, MAX_NUM, MAX_NUM};
    
    for (int i = 0; i < GRID_SIZE; i++) {
        printf("Enter score for student %d: ", (i + 1));
        for (int j = 0; j < 5; j++) {
            scanf("%d", &grid[i][j]);
            totalr[i] += grid[i][j];
            totalc[j] += grid[i][j];
            }
        }

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < 5; j++) {
            total_quiz[i] += grid[i][j];
        }
    }

    for (int i = 0; i < GRID_SIZE; i++) {
        avg_quiz[i] = (float) total_quiz[i] / GRID_SIZE;
    }

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (grid[i][j] > hs[i]) {
                hs[i] = grid[i][j];
            }
        }
    }

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (grid[i][j] < ls[i]) {
                ls[i] = grid[i][j];
            }
        }
    }

    printf("Total score for each student: %d %d %d %d %d\n", totalr[0], totalr[1], totalr[2], totalr[3], totalr[4]);
    printf("Average score for each student: %.2f %.2f %.2f %.2f %.2f\n", (float) totalc[0]/GRID_SIZE, (float) totalc[1]/GRID_SIZE, (float) totalc[2]/GRID_SIZE, (float) totalc[3]/GRID_SIZE, (float) totalc[4]/GRID_SIZE);
    printf("Average score for each quiz: %.2f %.2f %.2f %.2f %.2f\n", avg_quiz[0], avg_quiz[1], avg_quiz[2], avg_quiz[3], avg_quiz[4]);
    printf("High score for each quiz: %d %d %d %d %d\n", hs[0], hs[1], hs[2], hs[3], hs[4]);
    printf("Low score for each quiz: %d %d %d %d %d\n", ls[0], ls[1], ls[2], ls[3], ls[4]);
}