// #include <stdio.h>

// int main(void) {
//     int i; // index
//     int a[10]={3,7,8,9,2,3,4,6,1,7};
    
//     for(i=10; i>-1; i--) {
//         if (!(a[i]%2)) {
//             printf("Found:a[%d]=%d\n", i, a[i]);
//             break;
//         }
//     }
    
//     if (i==-1) {
//         printf("No even number\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(void) {
//     int n, n_d, sum=0;
    
//     printf("Enter a positive integer\n");
    
//     scanf("%d", &n);
//     if (n <= 0) return 1;
//     for (n_d=n; n_d>0; n_d/=10) {
//         sum = sum + (n_d % 10);
//     }
//     printf("Sum of all digits of %d=%d\n", n, sum);
//     return 0; 
// }


#include <stdio.h>

int main(void) {
    int N, M, cnt=0;
    int A[10];
    int B[10];
    

    scanf("%d",&N);
    
    for (int i=0; i<N; i++) {
        scanf("%d",&A[i]);   
    }
    
    scanf("%d",&M);

    for (int i=0; i<M; i++) {
        scanf("%d",&B[i]);  
    }

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (B[i] == A[j])
                cnt += 1;
        }
        printf("%d ",cnt);
        cnt = 0;
    }
}