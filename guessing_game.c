#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  int number, guess, attempts = 0;
//khởi tạo bộ sinh số ngẫu nhiên
srand(time(0));
number = rand() %100 + 1; //chọn một số ngẫu nhiên 1 đến 100

printf("I have chosen a number between 1 and 100. Try to guess it!\n");
//vòng lặp để người chơi đoán số
do {
printf("Enter your guess: ");
scanf("%d, &guess);
  attempts++;

  if (guess < number) {
  printf("Too low! Try again. \n);
  } else if (guess > number) {
  printf("Too high! Try again.\n");
  } else {
printf("Congrateulations! You guessed the number in %d attempts. \n", attempts);
}
} white (guess <>number);

return 0;
}

  
