#include <stdio.h>

// 计算最大连续子数组和
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
    //测试1
    int arr1[] = { -2, 11, -4, 13, -5, -2 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int max_sum1 = maxSubArraySum(arr1, n1);
    printf("最大连续子数组和为 %d\n", max_sum1);
    return 0;
    //测试2
     int arr2[] = { -1,-2,-5,-4,-7};
     int n2 = sizeof(arr2) / sizeof(arr2[0]);
     int max_sum2 = maxSubArraySum(arr2, n2);
    printf("最大连续子数组和为 %d\n", max_sum2);

    //测试3
    int arr3[] = { -1,2,3,-6,7 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int max_sum3 = maxSubArraySum(arr3, n3);
    printf("最大连续子数组和为 %d\n", max_sum3);

    //测试4
    int arr4[] = { 1,4,5,7,9,10 };
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int max_sum4 = maxSubArraySum(arr4, n4);
    printf("最大连续子数组和为 %d\n", max_sum4);
    return 0;
}