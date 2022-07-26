#include <iostream> 
#include <fstream> 
void sort(int array[], int); // sort函数声明
int main()
{
    int a[10], i;
    printf("原数组为：\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    sort(a, 10); // 调用sort函数
    printf("从小到大排序后的数组为：\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    system("pause");
    return 0;
}
void sort(int array[], int n)
{
    int i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[k])
                k = j;
        t = array[k];
        array[k] = array[i];
        array[i] = t;
    }
}


