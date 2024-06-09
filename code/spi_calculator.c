#include <stdio.h>
#include<conio.h>

// Function to calculate SPI
float calculateSPI(int grades[], int credits[], int num_courses) {
    int total_credits = 0;
    int weighted_sum = 0;
    
    for (int i = 0; i < num_courses; i++) {
        weighted_sum += grades[i] * credits[i];
        total_credits += credits[i];
    }
    
    if (total_credits == 0) {
        return 0.0; // Avoid division by zero
    }
    
    return (float)weighted_sum / total_credits;
}

int main() {
    int num_courses;
    
    // Prompt user for the number of courses
    printf("Enter the number of courses: ");
    scanf("%d", &num_courses);
    
    int grades[num_courses];
    int credits[num_courses];
    
    // Prompt user for grades and credits for each course
    for (int i = 0; i < num_courses; i++) {
        printf("Enter grade and credit for course %d: ", i + 1);
        scanf("%d %d", &grades[i], &credits[i]);
    }
    
    // Calculate SPI
    float spi = calculateSPI(grades, credits, num_courses);
    
    // Display the SPI
    printf("The SPI for the semester is: %.2f\n", spi);
    
    getch();
    return 0;
}
