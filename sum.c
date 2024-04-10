#include <stdio.h>

// ������������������
int maxSubArraySum(int arr[], int n) {
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int main() {
    //����1
    int arr1[] = { -2, 11, -4, 13, -5, -2 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int max_sum1 = maxSubArraySum(arr1, n1);
    printf("��������������Ϊ %d\n", max_sum1);
    return 0;
    //����2
     int arr2[] = { -1,-2,-5,-4,-7};
     int n2 = sizeof(arr2) / sizeof(arr2[0]);
     int max_sum2 = maxSubArraySum(arr2, n2);
    printf("��������������Ϊ %d\n", max_sum2);

    //����3
    int arr3[] = { -1,2,3,-6,7 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int max_sum3 = maxSubArraySum(arr3, n3);
    printf("��������������Ϊ %d\n", max_sum3);

    //����4
    int arr4[] = { 1,4,5,7,9,10 };
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int max_sum4 = maxSubArraySum(arr4, n4);
    printf("��������������Ϊ %d\n", max_sum4);
    return 0;
}