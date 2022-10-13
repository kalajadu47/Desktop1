#include<math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, real, img;
    printf("Enter the coefficients:");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %lf and root2 = %lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1=root2=%lf", root1);
    }
    else
    {
        real = -b / (2 * a);
        img = sqrt(-discriminant) / (2 * a);
        printf("root1 = %lf+%lfi and root2 = %lf-%lfi", real, img, real, img);
    }

    return 0;
}
