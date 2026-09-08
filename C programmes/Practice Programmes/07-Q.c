#include <stdio.h>
#include <math.h>
void main()
{
    int ax1 = -3, ax2 = 3, ay1 = 0, ay2 = 4, bx1 = 0, bx2 = 9, by1 = -1, by2 = 2;
    int a1, b1, a2, b2, areaA, areaB;
    a1 = (ax2 - ax1);
    b1 = (ay2 - ay1);
    a2 = (bx2 - bx1);
    b2 = (by2 - by1);
    areaA = a1 * b1;
    areaB = a2 * b2;
    printf("%d\n", areaA);
    printf("%d\n", areaB);

    int ax[20001] = {0}, ay[20001] = {0}, bx[20001] = {0}, by[20001] = {0};
    // rec A len
    int i, j1, j2, j, v;
    for (i = 0, v = ax1; v <= ax2; v++, i++)
        ax[i] = v;
    // rec A height
    for (i = 0, v = ay1; v <= ay2; v++, i++)
        ay[i] = v;
    // rec B len
    for (i = 0, v = bx1; v <= bx2; v++, i++)
        bx[i] = v;
    // rec B heighttar rule  total

    for (i = 0, v = by1; v <= by2; v++, i++)
        by[i] = v;
    int cmx[20001] = {0}, cmy[20001] = {0};
    // common x
    for (i = 0, j1 = 0; i <= a1; i++)
    {
        for (j = 0; j <= a2; j++)
        {
            if (ax[i] == bx[j])
            {
                cmx[j1] = ax[i];
                j1++;
            }
        }
    }
    for (i = 0; i <= j1 - 1; i++)
        printf("%d ", cmx[i]);
    printf("\n");
    // common y
    for (i = 0, j2 = 0; i <= b1; i++)
    {
        for (j = 0; j <= b2; j++)
        {
            if (ay[i] == by[j])
            {
                cmy[j2] = ay[i];
                j2++;
            }
        }
    }
    for (i = 0; i <= j2 - 1; i++)
        printf("%d ", cmy[i]);
    printf("\n");
    // len,bre of common part
    int a, b, cmar, netAr;
    a = cmx[j1 - 1] - (cmx[0]);
    b = cmy[j2 - 1] - (cmy[0]);
    cmar = a * b;
    printf("\n%d\n", cmar);
    netAr = areaA + areaB - cmar;
    printf("\n%d ", netAr);
    // return netAr;
}