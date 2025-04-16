#include<stdio.h>


//int main() {
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int add = 0;
//	int sn = 0;
//	int an = 0;
//	printf("输入a，n:");
//	scanf_s("%d%d", &a, &n);
//	for (i = 1; i <= n; i++) {
//		 an = a*(i - 1) * 10 + a;
//		sn = sn + an;
//	}
//	printf("%d", sn);
//	return 0;
//
//}

////int main() {
//	int a = 0;
//	int n = 0;
//	int i = 1;
//	int an = 0;
//	int sn = 0;
//	printf("a,n=:");
//	scanf_s("%d%d", &a, &n);
//
//	for (i = 1; i <= n; i++) {
//		an = an + a;
//		sn = sn + an;
//		an = an * 10;
//	}
//	printf("%d", sn);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int n = 1;
//	int sum = 1;
//	int ai = 1;
//	for (i = 1; i <= 20; i++) {
//		ai = sum * n;
//		sum = sum + ai;
//		n = n + 1;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main() {
//    int i = 0;
//    unsigned long long factorial = 1; // 用于存储阶乘
//    unsigned long long sum = 0;       // 用于存储阶乘的和
//
//    for (i = 1; i <= 20; i++) {
//        factorial *= i; // 计算当前数字的阶乘
//        sum += factorial; // 累加到总和中
//    }
//
//    printf("1! + 2! + ... + 20! = %llu\n", sum);
//    return 0;
//}

//int main(){
//	int i = 1;
//	unsigned long long ai = 1;
//	unsigned long long sum = 0;
//	for (i = 1; i <= 20; i++) {
//		ai = ai * i;
//		sum = sum + ai;
//	}
//	printf("%u", sum);
//	return 0;
//}
//
//int main() {
//
//	int a, b, c = 1;
//	
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int m = 0;
//	int n = 0;
//	int sum = 0;
//	for (a = 1; a <= 100; a++) {
//		x = x + a;
//
//	}
//	for (b = 1; b <= 50; b++) {
//		m = b * b;
//		y = y + m;
//	}
//	for (c = 1; c <= 10; c++) {
//		n = 1 / c;
//		z = z + n;
//
//	}
//	sum = x + y + z;
//	printf("%d",sum);
//	return 0;
//}


//int main() {
//	int a = 0;
//	int b = 0;
//		int c = 0;
//	int x = 0;
//	for (x = 100; x <= 999; x++) {
//		a = x / 100;
//		b = x / 10 - x / 10;
//		c = x % 10;
//		if (a * a * a + b * b * b + c * c * c == x) 
//			printf("%d", x);
//		
//	}
//	
//
//	return 0;
//}
//
//