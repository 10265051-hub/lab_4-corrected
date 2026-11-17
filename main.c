#include <stdbool.h>
#include <stdio.h>

#include "tasks.h"

void menu() {
  int choice;

  while (true) {
    puts("Select a task:");
    puts("1. Task 2");
    puts("2. Task 11");
    puts("3. Task 58");
    puts("4. Task 74");
    puts("5. Task 123");
    puts("6. Task 130");
    puts("7. Task 149");
    puts("8. Task 185");
    puts("9. Task 186");
    puts("10. Task 247");
    puts("11. Exit");
    printf("Enter choice: ");

    scanf_s("%d", &choice);

    printf("\n");

    switch (choice) {
    case 1:
      task2();
      break;
    case 2:
      task11();
      break;
    case 3:
      task58();
      break;
    case 4:
      task74();
      break;
    case 5:
      task123();
      break;
    case 6:
      task130();
      break;
    case 7:
      task149();
      break;
    case 8:
      task185();
      break;
    case 9:
      task186();
      break;
    case 10:
      task247();
      break;
    case 11:
      return;
    default:
      puts("Invalid choice, please try again.");
    }

    printf("\nPress Enter to continue...");
    getchar();
    getchar();
    printf("\n");
  }
}

int main(void) {
  menu();
  return 0;
}
