/* 친구의 부탁 */
#include <stdio.h>
int main() {
  int arr[10];
  int i, ave = 0;
  for (i = 0; i < 10; i++) {
    printf("%d 번째 학생의 성적은? ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    ave = ave + arr[i];
  }
  ave = ave / 10;
  printf("전체 학생의 평균은 : %d \n", ave);
  for (i = 0; i < 10; i++) {
    printf("학생 %d : ", i + 1);
    if (arr[i] >= ave)
      printf("합격 \n");
    else
      printf("불합격 \n");
  }
  return 0;
}

// Result
// 1 번째 학생의 성적은? 30
// 2 번째 학생의 성적은? 90
// 3 번째 학생의 성적은? 80
// 4 번째 학생의 성적은? 68
// 5 번째 학생의 성적은? 99
// 6 번째 학생의 성적은? 100
// 7 번째 학생의 성적은? 78
// 8 번째 학생의 성적은? 23
// 9 번째 학생의 성적은? 85
// 10 번째 학생의 성적은? 49
// 전체 학생의 평균은 : 70 
// 학생 1 : 불합격 
// 학생 2 : 합격 
// 학생 3 : 합격 
// 학생 4 : 불합격 
// 학생 5 : 합격 
// 학생 6 : 합격 
// 학생 7 : 합격 
// 학생 8 : 불합격 
// 학생 9 : 합격 
// 학생 10 : 불합격 
