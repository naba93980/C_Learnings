#include <stdio.h>


int main()
{
    int marks;
    printf("enter marks ");
    scanf("%d",&marks);
    switch(marks)
    {
        case (95):
      case 90:
        printf("excellent");
        break;
      case 80:
        printf("good");
        break;
      case 70:
        printf("okhayyy");
        break;
    default:
        printf("un identified");
    }
    return 0;
}
