/*#include<stdio.h> 经典开方问题
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int func(int number) {
	int x = (int)sqrt(number);
	if (x * x == number)
		return 1;
	else return 0;
}
int main() {
	int i;
	for (i = 0; i <= 1000; i++) {
		if (func(i + 168) && func(i + 100))
			printf("%d", i);
	}
	return 0;
}*/

/*#include<stdio.h>求最大公约数和最小公倍数
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int a, b, c,t;
	printf("input:");
	scanf_s("%d%d", &a, &b);
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	t = a * b;
	while ((c = a % b)!= 0) {
		a = b;
		b = c;
	}
	printf("%d", b);
	printf("%d", t / b);
	return 0;
}*/


/*#include<stdio.h>//矩阵置换
int main() {
	int a[2][4] = { { 1,2,3,4 }, {5,6,7,8, } };
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	printf("**********");
	for (i = 0; i < 4; i++) {
		for (j + 0; j < 2; j++) {
			printf("%d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void initialize_matrix(double** matrix, int rows, int colunms,int i,int j) {
	for (i = 0; i < rows; i++) {
		for (j = 0; j < colunms; j++) {
			matrix[i][j] = (double)(i + j + 1);
		}
		printf("\n");
	}
}
void input_matrix(double** matrix, int rows, int cols, char name) {
	printf("请输入矩阵%c的元素:\n", name);
	int i, j;
	for (i = 0; i < rows; i++) {
		printf("第%d行", i = 1);
		for (j = 0; j < cols; j++) {
			int success = 0;
			while (!success) {
				printf("元素%c[%d][%d]:", name, i + 1, j + 1);
				if (scanf_s("%lf", &matrix[i][j]) == 1){
					success = 1; }
				else { 
					printf("输入无效，请输入一个数字：");
					
				}
			}
		}
	}
}
int illegal(int c1, int r2) {
	printf("input:colunm of A and row of B");
	scanf_s("%d%d", &c1, &r2);
	if (c1 != r2) {
		printf("ILLEGAL");
	}
	else printf("LEGAL");

void matrixmultiple(double**A, double**B, double**C, int m, int n, int p) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = 0.0;
			for (int k = 0; k < p; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}



	int main(){
		int m, n, p, q,i,j;
		double** A, ** B, ** C;
		printf("\n=====请输入第一个矩阵的元素=====\n");
		printf("请输入矩阵A第(%d%d)行的元素", m, n);
		input_matrix(A,m,n,'A');
		printf("\n=====请输入第二个矩阵的元素=====\n");
		printf("请输入矩阵B第(%d%d)行的元素", p,q);
		input_matrix(B, m, n, 'B');
		matrixmultiple(A, B, C, m, q,n);
		for (i = 0; i < m; i++) {
			for (j = 0; j < q; j++) {
				printf("%d\t", C[i][j]);
			}
			printf("\n");
		}
		return 0;
	}*/

/*#include<stdio.h> 矩阵乘法
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int A[100][100] = { 0 }, B[100][100] = { 0 }, C[100][100] = { 0 };
	int i, j, r1, c1, num, r2, c2, k;
	printf("请输入第一个矩阵的行数和列数");
	scanf_s("%d%d", &r1, &c1);
	printf("请输入第二个矩阵的行数和列数");
	scanf_s("%d%d", &r2, &c2);
	if (c1 != r2) {
		printf("无法计算");
		return 0;
	}
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			printf("请输入左矩阵第%d行%d列的元素", i + 1, j + 1);
			scanf_s("%d", &num);
			A[i][j] = num;
		}
	}
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c1; j++) {
			printf("%d", A[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("*************");
	printf("\n");
	for (i = 0; i < r2; i++) {
		for (j = 0; j < c2; j++) {
			printf("请输入右矩阵第%d行%d列的元素", i + 1, j + 1);
			scanf_s("%d", &num);
			B[i][j] = num;
		}
	}
	for (i = 0; i < r2; i++) {
		for (j = 0; j < c2; j++) {
			printf("%d", B[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			for (k = 0; k <= c1; k++) {
				C[i][j] = A[i][k] * B[k][j];
			}
		}
	}
	printf("**********");
	printf("\n")
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			printf("%d", C[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}*/
	
/*#include<stdio.h> cacc约瑟夫行报数
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n, m,i,count=0;
	printf("请输入n和m");
	scanf_s("%d%d", &n, &m);
	if (n <= m) {
		printf("无法计算");
		return 0;
	}
	int* circul = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		circul[i] = 1;
	}
	for (i = 0; i < n; i++) {
		if (count == 0) {
			count++;
		}
		if (count % m != 0 && circul[i] != 0) {
			count++;
		}
		else {
			circul[i] = 0;
			count = 0;
			i = 0;
		}
	}
	for (i = 0; i < n; i++) {
		if (circul[i]!= 0) {
			printf("%d", i);
		}
	}
	free(circul);
	return 0;
}*/


/*#include<stdio.h>   cacc宝藏探测
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#define Max(a,b) (a>b?a:b)
#define Min(a,b) (a<b?a:b)
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n, k, i, count = 1, min1, min2,Umin=INT_MAX;
	int frontmax = INT_MIN, frontmin = INT_MAX, backmax = INT_MIN, backmin = INT_MAX;
	printf("请输入数组的长度n和要去除的个数k");
	scanf_s("%d%d", &n, &k);
	if (k >= n) {
		printf("错误");
		return 0;
	}
	printf("请依次输入数组内的元素");
	int* A = (int*)malloc(n * sizeof(int));
	int* min = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);
	}
	for (count = 1; count < n - k ; count++) {
		int frontmax = INT_MIN, frontmin = INT_MAX, backmax = INT_MIN, backmin = INT_MAX;
		for (i = 0; i <=count-1; i++) {
			frontmax = Max(frontmax, A[i]);
			frontmin = Min(frontmin, A[i]);
		}
		for (i = count + k; i <n; i++) {
			backmax = Max(backmax, A[i]);
			backmin = Min(backmin, A[i]);
		} 
		min1 = Min(backmax - frontmin, frontmax - backmin);
		min2 = Min(frontmin - backmax, backmin - frontmax);
		min[count] = Min(min1, min2);
	}
	for (i = 1; i < n - k ; i++) {
		Umin = Min(Umin, min[i]);
	}
	free(A);
	free(min);
	printf("最小的极差是%d", Umin);
	return 0;
}*/


/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNING
typedef long long ll;

ll odd[400005], even[400005];  // 两棵树：奇数位置的值 和 偶数位置的值
int odd_cnt[400005], even_cnt[400005]; // 区间内奇数/偶数位置的个数
ll lazy_odd[400005], lazy_even[400005];
int a[100005];

void push_up(int idx) {
	odd[idx] = odd[idx * 2] + odd[idx * 2 + 1];
	even[idx] = even[idx * 2] + even[idx * 2 + 1];
	odd_cnt[idx] = odd_cnt[idx * 2] + odd_cnt[idx * 2 + 1];
	even_cnt[idx] = even_cnt[idx * 2] + even_cnt[idx * 2 + 1];
}

void apply_odd(int idx, ll val) {
	odd[idx] += odd_cnt[idx] * val;
	lazy_odd[idx] += val;
}

void apply_even(int idx, ll val) {
	even[idx] += even_cnt[idx] * val;
	lazy_even[idx] += val;
}

void push_down(int idx) {
	if (lazy_odd[idx] != 0) {
		apply_odd(idx * 2, lazy_odd[idx]);
		apply_odd(idx * 2 + 1, lazy_odd[idx]);
		lazy_odd[idx] = 0;
	}
	if (lazy_even[idx] != 0) {
		apply_even(idx * 2, lazy_even[idx]);
		apply_even(idx * 2 + 1, lazy_even[idx]);
		lazy_even[idx] = 0;
	}
}

void build(int idx, int l, int r) {
	lazy_odd[idx] = lazy_even[idx] = 0;
	if (l == r) {
		if (a[l] % 2 != 0) {
			odd[idx] = a[l];
			even[idx] = 0;
			odd_cnt[idx] = 1;
			even_cnt[idx] = 0;
		}
		else {
			odd[idx] = 0;
			even[idx] = a[l];
			odd_cnt[idx] = 0;
			even_cnt[idx] = 1;
		}
		return;
	}
	int mid = (l + r) / 2;
	build(idx * 2, l, mid);
	build(idx * 2 + 1, mid + 1, r);
	push_up(idx);
}

void update(int idx, int l, int r, int ql, int qr, int type, ll x) {
	if (ql <= l && r <= qr) {
		if (type == 1) { // 奇数加 x
			apply_odd(idx, x);
			// 如果 x 是奇数，则所有奇数会变成偶数，需要交换 odd 和 even
			if (x % 2 != 0) {
				// 交换 odd 和 even 的值和计数
				ll tmp_sum = odd[idx];
				int tmp_cnt = odd_cnt[idx];
				odd[idx] = even[idx];
				odd_cnt[idx] = even_cnt[idx];
				even[idx] = tmp_sum;
				even_cnt[idx] = tmp_cnt;
				// 注意懒标记也要考虑吗？这里直接交换节点信息即可
			}
		}
		else { // 偶数加 x
			apply_even(idx, x);
			if (x % 2 != 0) {
				ll tmp_sum = odd[idx];
				int tmp_cnt = odd_cnt[idx];
				odd[idx] = even[idx];
				odd_cnt[idx] = even_cnt[idx];
				even[idx] = tmp_sum;
				even_cnt[idx] = tmp_cnt;
			}
		}
		return;
	}
	push_down(idx);
	int mid = (l + r) / 2;
	if (ql <= mid) update(idx * 2, l, mid, ql, qr, type, x);
	if (qr > mid) update(idx * 2 + 1, mid + 1, r, ql, qr, type, x);
	push_up(idx);
}

ll query(int idx, int l, int r, int ql, int qr) {
	if (ql <= l && r <= qr) {
		return odd[idx] + even[idx];
	}
	push_down(idx);
	int mid = (l + r) / 2;
	ll res = 0;
	if (ql <= mid) res += query(idx * 2, l, mid, ql, qr);
	if (qr > mid) res += query(idx * 2 + 1, mid + 1, r, ql, qr);
	return res;
}

int main() {
	int n, m;
	scanf_s("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	build(1, 1, n);

	while (m--) {
		int op, l, r;
		scanf_s("%d %d %d", &op, &l, &r);
		if (op == 1) {
			int type, x;
			scanf_s("%d %d", &type, &x);
			update(1, 1, n, l, r, type, x);
		}
		else {
			printf("%lld\n", query(1, 1, n, l, r));
		}
	}
	return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int n, m,i,left,right,typetotal,type1,x,sum=0;
	printf("请输入数组的长度");
	scanf_s("%d", &n);
	int* A = (int*)malloc(n * sizeof(int));
	printf("请依次输入数组的元素");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);
	}
	printf("请输入需要的查询或者修改的次数m");
	scanf_s("%d", &m);
	for (i = 0; i < m; i++) {
		printf("如果你想修改，输入1；如果你想查询，输入2");
		scanf_s("%d", &typetotal);
		if (typetotal == 1) {
			printf("指定需要修改的左右区间");
			scanf_s("%d%d", &left, &right);
			printf("如果你想修改奇数，输入1；如果你想修改偶数，输入2");
			scanf_s("%d", &type1);
			if (type1 == 1) {
				printf("输入加入的数字x");
				scanf_s("%d", &x);
				for (i = left - 1; i < right; i++) {
					if (A[i] % 2 == 1) {
						A[i] += x;
					}
				}
			}
			if (type1 == 2) {
				printf("输入加入的数字x");
				scanf_s("%d", &x);
				for (i = left - 1; i < right; i++) {
					if (A[i] % 2 == 0) {
						A[i] += x;
					}
				}
			}
			for (i = 0; i < n; i++) {
				printf("%d\t", A[i]);
			}
		}
		if (typetotal == 2) {
			printf("指定查询的左右区间");
			scanf_s("%d%d", &left, &right);
			for (i = left - 1; i < right; i++) {
				sum += A[i];
			}
			printf("%d", sum);
		}
	}
	free(A);
	return 0;
	
}*/


/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int random_int(int min, int max) {
	return rand() % (max - min + 1) + min;
}
void shuffle(int arr[], int size) {
	int i,j;
	for (i = size - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int jiecheng(int n) {
	return(n * jiecheng(n - 1));
}
int main() {
	int i,j,k,count=0;
	int A[2025] = { 0 };
	for (i = 0; i < 2025; i++) {
		A[i] = i;
	}
	for (k = 0; k < 2025; k++) {
		shuffle(A, 2025);
		for (i = 0; i < 2025; i++) {
			for (j = i; j < 2025; j++) {
				if (A[i] * A[j] >= i * j + 2025) {
					break;
				}
				else count++;
			}
		}
	}
	printf("%d\n", count);
	count = count % (1000000007);
	printf("%d\n", count);
	
	return 0;
}*/
/*#include<stdio.h>   //20538
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int T;
	scanf_s("%d", &T);
	while (T--) {
		int a, b, c, k;
		scanf_s("%d%d%d%d", &a, &b, &c, &k);
		while (k--) {
			int ta = (b + c) / 2;
			int tb = (a + c) / 2;
			int tc = (a + b) / 2;
			a = ta, b = tb, c = tc;
			if (ta == tb && tb == tc) {
				break;
			}
		}
		printf("%d%%d%d", a, b, c);
	}
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<math.h>
#define min(a,b) a<b?a:b
int compare(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int n, i, j, length = 0;
	scanf("%d", &n);
	int* x = (int*)malloc(n * sizeof(int));
	int* y = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &y[i]);
	}
	qsort(x, n, sizeof(int), compare);
	qsort(y, n, sizeof(int), compare);
	for (i = 0; i < n; i++) {
		length += abs(x[i] - y[i]);
	}
	printf("%d", length);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	char A[7] = { 'lqb','lbq','qlb','qbl','blq','bql'};
	char s[100], result[4];
	int i,j, count=0;
	scanf_s("%s", &s);
	for (i = 0; i < strlen(s); i++) {
		for (j = 0; j < 6; j++) {
			if ( strncmp(&s[i],A[j],3)==0) {
				count++;
				break;
			}
		}
	}
	printf("%d", count);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int two=0, five=0, zero=0,i,j;
	int count=0;
	for (i = 0; i < 20250412; i++) {
		char s[20] = {};
		sprintf(s, "%d", i);
		for (char *p=s; *p; ++p) {
			if (*p == '0') {
				zero++;
			}
			if (*p == '2') {
				two++;
			}
			if (*p == '5') {
				five++;
			}
		}
		if (zero >= 1 && five >= 1 && two >= 2) {
			count++;
		}
		zero = 0, five = 0, two = 0;
	}
	printf("%d", count);
	return 0;
}*/
/*#include <stdio.h>    //20518
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int n, i, count = 0;
	scanf_s("%d", &n);
	int* shelf = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf_s("%d", &shelf[i]);
	}
	for (i = 0; i < n; i++) {
		if (shelf[i] != (i + 1)) {
			swap(&shelf[i], &shelf[shelf[i]-1]);
			count++;
		}
	}
	printf("%d", count);

	return 0;
}*/
/*#include <stdio.h>    //20541
#include <stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int zhishu(int a) {
	int i;
	for (i = 2; i < a; i++) {
		if (a % i == 0 && i != 1&&a!=0) {
			return 0;
		}
		else {
			return 1;
		}
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int n, m, i, j, count = 0, k = 0,check,count1=0;
	scanf_s("%d%d", &n, &m);
	int* shang = (int*)malloc(n * sizeof(int));
	int* xia = (int*)malloc(m * sizeof(int));
	int* sum = (int*)malloc(n * m * sizeof(int));
	for (i = 0; i < n; i++) {
		scanf_s("%d", &shang[i]);
	}
	for (i = 0; i < m; i++) {
		scanf_s("%d", &xia[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if(((shang[i] + xia[j]) <= (n + m))&&zhishu(shang[i]+xia[j])) {
				sum[k] = shang[i] + xia[j];
				k++;
			}
		}
	}
	for (count = 0; count < k; count++) {
		check = sum[count];
		sum[count] = 0;
		for (i = count; i < k; i++) {
			if (check == sum[i]&&check!=0) {
				count1++;
			}
		}
	}
	printf("%d", k-count1);
	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>  //97 经典前缀和问题



int main(int argc, char* argv[])
{

	long long a[1000000];
	long long b[1000000];
	long long c[1000000];
	c[0] = 1;
	int n = 0; int k = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	b[0] = a[0];
	for (int i = 0; i < n; i++) {
		b[i + 1] = b[i] + a[i + 1];
	}
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += c[b[i] % k];
		c[b[i] % k]++;
	}
	printf("%lld", ans);


}*/

/*#define _CRT_SECURE_NO_WARNINGS    //itoa函数的使用
#include<stdio.h>
#include<stdlib.h>

int main() {
	char a[10] = { '1','2','3','4','5' };
	int m = 12345, count = 0;
	char c[10] = {};
	_itoa(m, c, 10);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (c[i] == a[j]) {
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}*/


/*#include <stdio.h>      //20544
#include <stdlib.h>
	int compare(const void* a, const void* b) {
		return(*(int*)a - *(int*)b);
	}
	int score(int a[], int b[], int c[], int n) {
		int s[3], i;
		int count = 0;
		for (i = 0; i < n; i++) {
			s[0] = a[i];
			s[1] = b[i];
			s[2] = c[i];
			if (b[i] - a[i] == c[i] - a[i] && (a[i] != b[i])) {
				count += 200;
				continue;
			}
			qsort(s, 3, sizeof(int), compare);
			if (a[i] == b[i] && b[i] == c[i] && a[i] == c[i]) {
				count += 200;
			}
			else if (a[i] == b[i] || b[i] == c[i] || a[i] == c[i]) {
				count += 100;
			}
			else if ((b[i] - a[i]) == (c[i] - b[i])) {
				count += 100;
			}
		}
		return count;
	}
	int main(int argc, char* argv[])
	{
		// 请在此输入您的代码
		int n, m;
		int result = 0, i;
		scanf("%d", &n);
		int* a = (int*)malloc(n * sizeof(int));
		int* b = (int*)malloc(n * sizeof(int));
		int* c = (int*)malloc(n * sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
		for (i = 0; i < n; i++) {
			scanf("%d", &c[i]);
		}
		sacnf("%d", m);
		for (i = 0; i < 3; i++) {

		}
		result = score(a, b, c, n);
		printf("%d", result);
		free(a);
		free(b);
		free(c);
		return 0;
	}*/

/*#include <stdio.h>
#include <stdlib.h>

	// 检查给定边长是否能切出至少K块巧克力
int check(int mid, int N, int K, int* H, int* W) {
	if (mid == 0) return 0;

	long long total = 0;
	for (int i = 0; i < N; i++) {
		long long pieces = (long long)(H[i] / mid) * (W[i] / mid);
		total += pieces;

		if (total >= K) return 1; // 提前返回优化
	}
	return total >= K;
}

int main() {                                                       //99 二分方法
	int N, K;
	scanf("%d %d", &N, &K);

	int* H = (int*)malloc(N * sizeof(int));
	int* W = (int*)malloc(N * sizeof(int));
	int maxSide = 0;

	// 读取所有巧克力数据
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &H[i], &W[i]);
		if (H[i] > maxSide) maxSide = H[i];
		if (W[i] > maxSide) maxSide = W[i];
	}

	// 二分查找最大边长
	int left = 1, right = maxSide;
	int answer = 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (check(mid, N, K, H, W)) {
			// 当前边长可行，尝试更大的边长
			answer = mid;
			left = mid + 1;
		}
		else {
			// 当前边长不可行，尝试更小的边长
			right = mid - 1;
		}
	}

	printf("%d\n", answer);

	free(H);
	free(W);
	return 0;
}*/



/*#define _CRT_SECURE_NO_WARNINGS                                      //20537
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
char* itoa(int n, char* s, int b) {
	int i = 0;
	while (n > 0) s[i++] = (n % b < 10) ? n % b + '0' : n % b - 10 + 'a', n /= b;
	s[i] = '\0';
	for (int j = 0; j < i / 2; j++) { char t = s[j]; s[j] = s[i - j - 1]; s[i - j - 1] = t; }
	return s;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int m, number, one, zero;
	char a[100000] = {};
	scanf("%d", &m);
	int* n = (int*)malloc(m * sizeof(int));
	int* k = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &n[i], &k[i]);
	}
	for (int i = 0; i < m; i++) {
		number = pow(2, n[i] - 1) + k[i] - 1;
		itoa(number, a, 2);
		one = 0, zero = 0;
		for (char* p = a; *p; p++) {
			if (*p == '1') {
				one++;
			}
			if (*p == '0') {
				zero++;
			}
		}
		if (one % 2 == 0) {
			printf("BLACK\n");
		}
		if (one % 2 == 1) {
			printf("RED\n");
		}
	}
	return 0;
}*/


/*#include <stdio.h>                                  //倒水问题
#include <limits.h>

#define min(a,b) ((a)<(b)?(a):(b))

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	int ans = INT_MAX;

	for (int c = 0; c < k; c++) {
		long long sum = 0;
		int cnt = 0;
		int group_min = INT_MAX;

		for (int i = c + 1; i <= n; i += k) {
			cnt++;
			sum += a[i];
			// 前 cnt 个瓶子的平均值（整除）
			int avg = sum / cnt;
			if (avg < group_min) {
				group_min = avg;
			}
		}

		if (group_min < ans) {
			ans = group_min;
		}
	}

	printf("%d\n", ans);
	return 0;
}*/

/*#include<stdio.h>                                        //青蛙跳台阶  （马尔科夫链）
#include<stdlib.h>
int f(int n) {
	if (n == 1)return 1;
	if (n == 2)return 2;
	return f(n - 1) + f(n - 2);
}
int main() {
	printf("%d", f(6));
	return 0;
}*/


/*#include <stdio.h>                                     //二叉树的存储与遍历
#include <stdlib.h>
// 树存储结构
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild; // 左右孩子指针
} BiTNode, * BiTree;
// 循环队列算法，辅助完成二叉树层次遍历
#define MaxSize 50   // 定义队列中元素的最大个数
typedef struct {
	BiTree data[MaxSize]; // 存放队列元素
	int front, rear;   // 队头和队尾指针 
} SqQueue;
// 初始化队列（带头结点）
void Queue_Init(SqQueue& Q) {
	Q.rear = Q.front = 0;
}
// 判断队列是否为空
bool Queue_Empty(SqQueue Q) {
	return Q.front == Q.rear;
}
// 入队
bool Queue_En(SqQueue& Q, BiTree e) {
	if ((Q.rear + 1) % MaxSize == Q.front) return false; // 队满则报错
	Q.data[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MaxSize; // 队尾指针加 1 取模
	return true;
}
// 出队
bool Queue_De(SqQueue& Q, BiTree& e) {
	if (Queue_Empty(Q)) return false; // 队空则报错
	e = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
// 通过给定数组创建二叉树，0为空结点
// nums 为数组、len 为数组长度、i 为当前数组下标
BiTNode* BiTree_Create(char* nums, int len, int i) {        //返回的是BiTNode*类型的指针
	if (i >= len || nums[i] == 0) return NULL;
	BiTNode* node = (BiTNode*)malloc(sizeof(BiTNode));
	node->data = nums[i];
	node->lchild = BiTree_Create(nums, len, 2 * i + 1);
	node->rchild = BiTree_Create(nums, len, 2 * i + 2);
	return node;
}
// 先序遍历: 根左右(NLR)
void Order_Pre(BiTree tree) {
	if (tree == NULL) return;
	printf("%d,", tree->data);  // 访问根树内容
	Order_Pre(tree->lchild); // 递归遍历左子树
	Order_Pre(tree->rchild); // 递归遍历右子树
}
// 中序遍历: 左根右(LNR)
void Order_In(BiTree tree) {
	if (tree == NULL) return;
	Order_In(tree->lchild); // 递归遍历左子树
	printf("%d,", tree->data);  // 访问根树内容
	Order_In(tree->rchild); // 递归遍历右子树
}
// 后序遍历: 左根右(LRN)
void Order_Post(BiTree tree) {
	if (tree == NULL) return;
	Order_Post(tree->lchild); // 递归遍历左子树
	Order_Post(tree->rchild); // 递归遍历右子树
	printf("%d,", tree->data);  // 访问根树内容
}
// 层次遍历
void Order_Level(BiTree tree) {
	SqQueue Q; // 初始化队列
	Queue_Init(Q);
	BiTree p;
	Queue_En(Q, tree); // 根节点入队
	while (!Queue_Empty(Q)) { // 队列不空则继续遍历
		Queue_De(Q, p); // 队头结点出队
		printf("%d,", p->data); // 访问出队结点内容
		if (p->lchild != NULL)
			Queue_En(Q, p->lchild); // 左子树不为空，则左子树根入队
		if (p->rchild != NULL)
			Queue_En(Q, p->rchild); // 右子树不为空，则右子树根入队
	}
}
int main() {
	char nums[11] = { 1, 2, 3, 0, 4, 0, 5, 0, 0, 6, 0 };
	BiTree tree = BiTree_Create(nums, 11, 0);
	printf("先序遍历：");
	Order_Pre(tree);
	printf("\n");
	printf("中序遍历：");
	Order_In(tree);
	printf("\n");
	printf("后序遍历：");
	Order_Post(tree);
	printf("\n");
	// 层次遍历需要借助队列实现
	printf("层次遍历: ");
	Order_Level(tree);
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS                         //链表最基础的建立和遍历
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	typedef struct student {
		char* name;
		int score;
		struct student* next;
	}stu;
	stu* head = NULL;
	stu* current = NULL;
	head = (stu*)malloc(sizeof(stu));
	head->name = (char*)malloc(sizeof(char));
	strcpy(head->name, "cobe");
	head->score = 1;
	head->next = NULL;
	current = head;

	current->next = (stu*)malloc(sizeof(stu));
	current = current->next;
	current->name = (char*)malloc(sizeof(char) * 10);
	strcpy(current->name, "sb");
	current->score = 92;
	current->next = NULL;

	current->next = (stu*)malloc(sizeof(stu));
	current = current->next;
	current->name = (char*)malloc(sizeof(char) * 10);
	strcpy(current->name, "sb");
	current->score = 91;
	current->next = NULL;

	current->next = (stu*)malloc(sizeof(stu));
	current = current->next;
	current->name = (char*)malloc(sizeof(char) * 10);
	strcpy(current->name, "sb");
	current->score = 93;
	current->next = NULL;

	current->next = (stu*)malloc(sizeof(stu));
	current = current->next;
	current->name = (char*)malloc(sizeof(char) * 10);
	strcpy(current->name, "sb");
	current->score = 94;
	current->next = NULL;

	current = head;
	int count = 1;
	while (current != NULL) {
		printf("%d", count);
		printf("  姓名: %s\n", current->name);
		printf("  分数: %d\n", current->score);
		printf("  下一个节点地址: %p\n", (void*)current->next);
		current = current->next;
		count++;
	}
	return 0;
}*/


/*#include<stdio.h>                                  //20536


int main() {
	int i, j, n, l, size = 0;
	char a[1000001];
	gets(a);
	while (a[i] != '\0')
		i++;
	n = i;
	j = n - 1;
	i = 0;
	while (i < j) {
		if (a[i] == 'B') {
			i++;
		}
		if (a[j] == 'A') {
			j--;
		}
		if (a[i] == 'A' && a[j] == 'B' && i < j) {
			size++;
			i++;
			j--;
		}
	}
	printf("%d", n - size * 2);
}*/


/*#include<stdio.h>                              //itoa库函数
#include<stdlib.h>
char* itoa(int n,char* s,int b) {
	int i = 0;
	while (n > 0) {
		s[i++] = (n % b < 10) ? n % b + '0' : n % b - 10 + 'a', n /= b;
	}
	s[i] = '\0';
	for (int j = 0; j < i / 2; j++) {
		char t = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1]=t;
	}
	return s;
}
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int n;
	scanf("%d", n);
	int* m = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	qsort(m, n, sizeof(int), compare);
	for (int i = 0; i < n; i++) {
		if (m[i] <= (i + 1)) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}*/


/*#define _CRT_SECURE_NO_WARNINGS                            //32届线上赛第三题
#define min(a,b) a<b?a:b
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<limits.h>

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int a, b, temp, mintotal = INT_MAX;
	scanf("%d %d", &a, &b);
	if (a > b) {
		temp = a;
		a = b;
		b = a;
	}
	for (int i = 0; i <= a; i++) {
		mintotal = min(mintotal, abs(4i - a - b));
	}
	printf("%d", mintotal);
	return 0;
}*/


/*#define _CRT_SECURE_NO_WARNINGS                     //32届线上赛第5题
#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int n;
	scanf("%d", &n);
	int k[100000];
	for (int i = 0; i < n; i++) {
		k[i] = -1;
	}
	int* a = (int*)malloc(n * sizeof(int));
	int* b = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	qsort(a, n, sizeof(int), compare);
	qsort(b, n, sizeof(int), compare);
	for (int t = 0; t < n; t++) {
		int count = 1;
		for (int i = 1; i < n; i++) {
			if (a[i] <= b[t]) {
				count++;
			}
		}
 		if (count > 1) {
			k[count] = b[t];
		}
	}
	k[0] = a[0];
	for (int i = 0; i < n; i++) {
		printf("%d\n", k[i]);
	}
	return 0;
}*/



/*#define _CRT_SECURE_NO_WARNINGS							//二维数组的动态内存分配（重要）
#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	printf("请输入要创建的数组数量: ");
	scanf("%d", &t);

	// 创建指针数组，每个指针指向一个动态数组
	int** arrays = (int**)malloc(t * sizeof(int*));
	int* sizes = (int*)malloc(t * sizeof(int));

	for (int i = 0; i < t; i++) {
		printf("请输入第%d个数组的大小: ", i + 1);
		scanf("%d", &sizes[i]);

		// 为每个数组动态分配内存
		arrays[i] = (int*)malloc(sizes[i] * sizeof(int));

		printf("请输入第%d个数组的%d个元素: ", i + 1, sizes[i]);
		for (int j = 0; j < sizes[i]; j++) {
			scanf("%d", &arrays[i][j]);
		}
	}

	// 打印所有数组
	printf("\n所有数组的内容:\n");
	for (int i = 0; i < t; i++) {
		printf("数组%d: ", i + 1);
		for (int j = 0; j < sizes[i]; j++) {
			printf("%d ", arrays[i][j]);
		}
		printf("\n");
	}

	// 释放内存
	for (int i = 0; i < t; i++) {
		free(arrays[i]);
	}
	free(arrays);
	free(sizes);

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS							//20547
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int t;
	scanf("%d", &t);
	int** a = (int**)malloc(t * sizeof(int*));
	int* size = (int*)malloc(t * sizeof(int));
	for (int i = 0; i < t; i++) {
		scanf("%d", &size[i]);
		a[i] = (int*)malloc(size[i] * sizeof(int));
		for (int j = 0; j < size[i]; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < t; i++) {
		int sum = a[i][0];
		for (int j = 1; j < size[i]; j++) {
			sum = sum ^ a[i][j];
		}
		if (sum == 0) {
			printf("YES");
		}
		if (sum != 0) {
			printf("NO");
		}
	}
	return 0;
}*/

/*#include <stdio.h>                            //19685(递归实现指数型枚举)
#include <stdlib.h>
#define N 20
int n;
int st[N];
void dsp(int x) {
	if (x > n) {
		for (int i = 1; i <= n; i++) {
			if (st[i] == 1) {
				printf("%d\t", i);
			}
		}
		printf("\n");
		return;
	}
	st[x] = 2;
	dsp(x + 1);
	st[x] = 0;
	st[x] = 1;
	dsp(x + 1);
	st[x] = 0;
}

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &n);
	dsp(1);
	return 0;
}*/

/*#include <stdio.h>                          //19684(递归实现排列型枚举)
#include <stdlib.h>
#include <stdbool.h>
#define N 20
int n;
bool st[N];
int res[N];
void dsp(int x) {
	if (x > n) {
		for (int i = 1; i <= n; i++) {
			if (st[i] == true) {
				printf("%d\t", res[i]);
			}
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!st[i]) {
			st[i] = true;
			res[x] = i;
			dsp(x + 1);
			st[i] = false;
			res[x] = 0;
		}
	}
}

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &n);
	dsp(1);

	return 0;
}*/

/*#include <stdio.h>                                 //19686(递归实现组合型枚举)
#include <stdlib.h>
int n, m;
int arr[30];
int st[30];
void dsp(int x, int start) {
	if (x > m) {
		for (int i = 1; i <= m; i++) {
			printf("%d\t", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = start; i <= n; i++) {
		arr[x] = i;
		dsp(x + 1, i + 1);
		arr[x] = 0;
	}
}

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d %d", &n, &m);
	dsp(1, 1);
	return 0;
}*/



/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
#define min(a,b) a<b?a:b
int n;
int s[20];
int b[20];
int arr[20];
int state[20];
int flavour = INT_MAX;
void dfs(int x) {
	if (x > n) {
		int soursum = 1;
		int bittersum = 0;
		for (int i = 1; i <= n; i++) {
			if(state[i]==1){
				soursum *= s[i];
				bittersum += b[i];
				flavour = min(abs(soursum - bittersum), flavour);
			}
		}
		return ;
	}
	


	state[x] = 1;
	dfs(x + 1);
	state[x] = 0;

	state[x] = 2;
	dfs(x + 1);
	state[x] = 0;
}


int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d ", &s[i], &b[i]);
	}
	dfs(1);
	printf("%d", flavour);
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS                            //cacc约瑟夫环
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, m, current = 0;
	scanf("%d%d", &n, &m);
	int remain = n;
	int count = 0;
	int jishu[1010];
	for (int i = 0; i < 1010; i++) {
		jishu[i] = 1;
	}
	while (remain > 1) {
		if (jishu[current] == 1) {
			count++;
			if (count == m) {
				jishu[current] = 0;
				remain--;
				count = 0;
			}
		}
		current = (current + 1) % n;
	}
	for (int i = 0; i < n; i++) {
		if (jishu[i] ) {
			printf("%d", i + 1);
		}
	}
	return 0;
}*/




/*#define _CRT_SECURE_NO_WARNINGS                             //cacc宝藏探测70分
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int energy[100000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &energy[i]);
	}
	int tmin = INT_MAX;
	for (int j = 1; j < n - k-1; j++) {
		int frontmax = INT_MIN;
		int	frontmin = INT_MAX;
		int backmax = INT_MIN;
		int backmin = INT_MAX;
		for (int i = 0; i < j; i++) {
			frontmax = max(energy[i], frontmax);
			frontmin = min(energy[i], frontmin);
		}
		for (int t = j + k; t < n; t++) {
			backmax = max(energy[t], backmax);                   
			backmin = min(energy[t], backmin);
		}
		tmin = min(tmin, max(frontmax, backmax) - min(frontmin, backmin));
	}
	printf("%d", tmin);
	return 0;
}*/


/*#include<stdio.h>                                       //p1102暴力方法
#include<stdlib.h>
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	if (n == 1) {
		printf("0");
	}
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] - arr[i] == c) {
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}*/


/*#define _CRT_SECURE_NO_WARNINGS                            //p1102二分
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int decline1(int a[], int x, int c,int length) {
	int left = -1, right = length;
	while (left + 1 != right) {
		int mid = left + right >> 1;
		if (a[mid] - x < c) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	return left;
}
int decline2(int a[], int x, int c,int length) {
	int left = -1, right = length;
	while (left + 1 != right) {
		int mid = left + right >> 1;
		if (a[mid] - x <= c) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	return left;
}
int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	if (n == 1) {
		printf("0");
	}
	int* arr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		int res1 = decline1(arr, arr[i], c,n);
		int res2 = decline2(arr, arr[i], c,n);
		count += res2 - res1;
	}
	printf("%d", count);
	return 0;
}*/


/*#include<stdio.h>                                          //竞赛模板--字符串快排
#include<stdlib.h>
#include<string.h>
int cmp_strlen(const void* a, const void* b) {
	return strlen((char*)a) - strlen((char*)b);
}
int main() {
	char arr[][100] = { "123","12345","789","akodpadjqid","afhfoiqwdqo","qwhuiifoqhifoqqfopqwoq" };
	int count = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, count, sizeof(arr[0]), cmp_strlen);
	printf("%s", arr[count-1]);
	return 0;
}*/


/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removechar(char* str, char ch) {
	char* src = str, * sdt = str;
	while (*src) {
		if (*src != ch) {
			*sdt++ = *src;
		}
		src++;
	}
	*sdt = '\0';
}

int compare(const void* a, const void* b) {
	return strcmp((char*)a, (char*)b);
}
int main() {
	int n;
	scanf("%d", &n);
	char a[100] = {};
	char b[100][100];
	char c[100][100];
	for (int i = 1; i <= n; i++) {
		scanf("%d", a[i]);
	}
	for (int i = 1; i <= n; i++) {
		char ch = a[i];
		b[i] = removechar(a, ch);
		c[i] = b[i];
	}
	int count = sizeof(b) / sizeof(b[0]);
	qsort(b, count, sizeof(b[0]), compare);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (b[i] = c[j]) {
				printf("%d", &j);
				continue;
			}
		}
	}
	return 0;
}*/


/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, a;
	int m=0;
	double pai;
	scanf("%d%d", &n, &a);
	double cor[100][2];
	for (int i = 0; i < n; i++) {
		scanf("%lf%lf", &cor[i][0], &cor[i][1]);
	}
	for (int i = 0; i < n; i++) {
		
		if (cor[i][0] * cor[i][0] + cor[i][1] * cor[i][1] <= a*a) {
			m++;
		}
	}
	pai = (double)(4*m) / n;
	printf("%lf", pai);
	return 0;
}*/


 
/*#define _CRT_SECURE_NO_WARNINGS                                               //剩余2:30
#include<stdio.h>
#include<stdlib.h>
int target[5][9] = { {1,1,1,1,1,1,1,1,1},{1,0,0,1,0,0,1,0,1},{1,0,0,1,1,1,1,1,0},{1,0,0,0,0,1,1,0,0},{1,1,1,1,1,1,1,0,0} };
int n, l;
void change(int a[][100], int x) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] >= x) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 0;
			}
		}
	}
}
int check(int a[][100], int x) {
	int temp[100][100];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = a[i][j];
		}
	}
	change(temp, x);
	for (int i = 1; i <= n - 4; i++) {
		for (int j = 1; j <= n - 8; j++) {
			int found = 1;
			for (int ti = 0; ti < 5 && found; ti++) {
				for (int tj = 0; tj < 9 && found; tj++) {
					if (temp[i + ti][j + tj] != target[ti][tj]) {
						found = 0;
					}
				}
			}

			if (found) {
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	scanf("%d%d", &n, &l);
	int matlab[100][100];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &matlab[i][j]);
		}
	}
	for (int k = 0; k < l; k++) {
		if (check(matlab, k)) {
			printf("%d\n", k);
		}
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char x[2020],y[2020];
	scanf("%s", x);
	scanf("%d", y);
	int len1 = (int)strlen(x);
	int len2 = (int)strlen(y);
	int sum[2020];
	unsigned long long nsum = 0;
	if (len1 == len2) {
		for (int i = 0; i < len1; i++) {
			sum[i] = (int)x[i] + (int)y[i];
		}
		for (int i = 0; i < len1; i++) {
			nsum += sum[i] % 10;
			while (sum[i] / 10 != 0) {
				sum[i] /= 10;
				nsum += sum[i]%10;
			}
		}
	}
	if (len1 > len2) {
		for (int i = 0; i < len2; i++) {
			sum[i + len1 - len2] = (int)x[i + len1 - len2] + (int)y[i];
		}
		for (int i = 0; i < len1 - len2; i++) {
			sum[i] = (int)x[i];
		}
		for (int i = 0; i < len1; i++) {
			nsum += sum[i] % 10;
			while (sum[i] / 10 != 0) {
				sum[i] /= 10;
				nsum += sum[i] % 10;
			}
		}
	}
}*/

/*#include<stdio.h>                                     //AT_abc374_c
#include<stdlib.h>
#include<limits.h>

#define MAX_N 20  // DFS适用于较小的N，一般N<=20-30

int N;
int K[MAX_N];
int total = 0;
int min_max = INT_MAX;

// idx: 当前处理的部门索引
// sumA: 当前A组的总人数
void dfs(int idx, int sumA) {
	// 所有部门都已分配
	if (idx == N) {
		int sumB = total - sumA;
		int current_max = (sumA > sumB) ? sumA : sumB;
		if (current_max < min_max) {
			min_max = current_max;
		}
		return;
	}

	// 将当前部门分配到A组
	dfs(idx + 1, sumA + K[idx]);

	// 将当前部门分配到B组
	dfs(idx + 1, sumA);
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &K[i]);
		total += K[i];
	}

	dfs(0, 0);

	printf("%d\n", min_max);

	return 0;
}*/

/*#include<stdio.h>                    //B3624 猫粮规划        50分解法
#include<stdlib.h>
#define N 50
int n, l, r;
int st[N];
int res;
int w[N];
void dfs(int x, int sum) {
	if (x >= n) {
		if (l <= sum && sum <= r) {
			res++;
		}
		return;
	}
	st[x] = 1;
	dfs(x + 1, sum + w[x]);
	st[x] = 2;
	dfs(x + 1, sum);
	st[x] = 0;
}
int main() {
	scanf("%d%d%d", &n, &l, &r);
	for (int i = 0; i < n; i++) {
		scanf("%d", &w[i]);
	}
	dfs(0, 0);
	printf("%d", res);
	return 0;
}*/

/*#include <stdio.h>                               //蓝桥DFS
#include <stdlib.h>
#include <stdbool.h>
#define N 25
int n;
int pan[N][N];
int wes[N];
int nor[N];
bool st[N][N] = { false };
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
void dfs(int x, int y, int nsum, int wsum) {
	if (!(x == n - 1 && y == n - 1)) {
		printf("%d ", pan[x][y]);
	}
	if (x == n - 1 && y == n - 1) {
		printf("15");
		return;
	}
	for (int i = 0; i < 4; i++) {
		int a = x + dx[i], b = y + dy[i];
		if (a < 0 || a >= n || b < 0 || b >= n) continue;
		if (st[a][b]) continue;
		if (nsum + 1 > nor[b]) continue;
		if (wsum + 1 > wes[a]) continue;
		st[a][b] = true;
		dfs(a, b, nsum + 1, wsum + 1);
		st[a][b] = false;
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nor[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &wes[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			pan[i][j] = j + n * i;
		}
	}
	dfs(0, 0, 1, 1);
	return 0;
}*/

/*#include <stdio.h>                             //蓝桥长草
#include <stdlib.h>
#define N 1010
int n, m, k;
char gra[N][N];
typedef struct {
	int x;
	int y;
} pii;
pii q[N * N];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int hh = 0, tt = 0;
void bfs() {
	while (hh < tt && k>0) {

		int size = tt - hh;
		for (int i = 0; i < size; i++) {
			pii t = q[hh++];
			for (int j = 0; j < 4; j++) {
				int a = t.x + dx[j], b = t.y + dy[j];
				if (a<1 || a>n || b<1 || b>m) continue;
				if (gra[a][b] == 'g') continue;

				gra[a][b] = 'g';
				q[tt++] = (pii){ a,b };
			}
		}
		k--;
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%s", gra[i] + 1);
	}
	scanf("%d", &k);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (gra[i][j] == 'g') {
				q[tt++] = (pii){ i,j };
			}
		}
	}
	bfs();
	for (int i = 1; i <= n; i++) {
		printf("%s\n", gra[i] + 1);
	}
	return 0;
}*/

/*#include <stdio.h>                         //蓝桥1019
#include <stdlib.h>
#include <string.h>
#define offset 2025
#define n 4050
typedef struct {
	int x;
	int y;
} pii;
pii* q;
int tt = 0, hh = 0;
int res = 0;
int st[n][n];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int k = 2020;
void bfs() {
	while (hh < tt && (k--)) {
		int size = tt - hh;
		res += size;
		for (int i = 0; i < size; i++) {
			pii t = q[hh++];
			for (int j = 0; j < 4; j++) {
				int a = t.x + dx[j], b = t.y + dy[j];
				if (st[a][b] == 1) continue;
				st[a][b] = 1;
				q[tt++] = (pii){ a,b };
			}
		}
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	memset(st, 0, sizeof(st));
	q = (pii*)malloc(n * n * sizeof(pii));
	st[0 + offset][00 + offset] = 1;
	st[2020 + offset][11 + offset] = 1;
	st[11 + offset][14 + offset] = 1;
	st[2000 + offset][2000 + offset] = 1;
	q[tt++] = (pii){ 00 + offset,00 + offset };
	q[tt++] = (pii){ 2020 + offset,11 + offset };
	q[tt++] = (pii){ 11 + offset,14 + offset };
	q[tt++] = (pii){ 2000 + offset,2000 + offset };
	bfs();
	printf("%d", res);
	return 0;
}*/


/*#include <stdio.h>                          //蓝桥229（错误）
#include <stdlib.h>
#include <string.h>
#define N 1010
int n, k;
char maze[N][N];
int dist[N][N];
typedef struct {
	int x;
	int y;
	int wudi;
} pii;
pii q[N * N];
int tt = 0, hh = 0;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int bfs(int x, int y) {
	memset(dist, -1, sizeof(dist));
	dist[x][y] = 0;
	while (hh <= tt) {
		pii t = q[hh++];
		int wudi1 = t.wudi;
		for (int i = 0; i < 4; i++) {
			int a = t.x + dx[i], b = t.y + dy[i];
			if (a<1 || a>n || b<1 || b>n) continue;
			if (dist[a][b] >= 0)  continue;
			if (maze[a][b] == '#') continue;
			int newwudi = wudi1;
			if (maze[a][b] == '%') {
				newwudi = k;
				dist[a][b] = dist[t.x][t.y] + 1;
				q[tt++] = (pii){ a,b,newwudi };;
				continue;
			}
			if (maze[a][b] == 'X') {
				if (newwudi == 0) {
					continue;
				}
			}
			dist[a][b] = dist[t.x][t.y] + 1;
			newwudi--;
			if (newwudi < 0) {
				newwudi = 0;
			}
			q[tt++] = (pii){ a,b,newwudi };
		}
	}
	if (dist[n][n] > 0) return dist[n][n];
	return -1;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		scanf("%s", maze[i] + 1);
	}
	int res = bfs(1, 1);
	printf("%d", res);
	return 0;
}*/


/*#include <stdio.h>                   //蓝桥2386（错误）
#include <stdlib.h>
#include <string.h>
#define N 1010
#define max(a,b) (a>b?a:b)
int n, m;
int pan[N][N];
int st[N][N];
int dist[N][N];
typedef struct {
	int x;
	int y;
	int time;
}pii;
pii q[N * N];
int tt = 0, hh = 0;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,-1,0 };
int bfs(int x, int y) {
	memset(st, -1, sizeof(st));
	memset(dist, -1, sizeof(dist));
	st[x][y] = 1;
	dist[x][y] = pan[x][y];
	q[tt++] = (pii){ x,y,pan[x][y] };
	int maxtime = 0;
	while (hh < tt) {
		pii t = q[hh++];
		if (dist[t.x][t.y] > maxtime) {
			maxtime = dist[t.x][t.y];
		}
		if (t.time > 0) {
			q[tt++] = (pii){ t.x,t.y,t.time-- };
		}
		if (t.time == 0) {
			for (int i = 0; i < 4; i++) {
				int a = t.x + dx[i];
				int b = t.y + dy[i];
				if (a<1 || a>n || b<1 || b>m) continue;
				if (st[a][b] > 0) continue;

				st[a][b] = 1;
				dist[a][b] = dist[t.x][t.y] + 1 + pan[a][b];
				q[tt++] = (pii){ a,b,pan[a][b] };
			}
		}
	}
	return maxtime;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &pan[i][j]);
		}
	}
	int res = bfs(1, 1);
	printf("%d", res);
	return 0;
}*/

/*#include <stdio.h>                            //蓝桥5000（30分）
#include <stdlib.h>
#include <string.h>
#define N 1010
int n, m;
char maze[N][N];
int x1, y1, x2, y2;
int dist[N][N][2];
typedef struct {
	int x;
	int y;
	int key;
}pii;
pii q[N * N * 2];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int bfs(int x, int y) {
	int hh = 0, tt = 0;
	memset(dist, -1, sizeof(dist));
	int startk = (maze[x][y] == 'k') ? 1 : 0;
	q[tt++] = (pii){ x,y,startk };
	dist[x][y][startk] = 0;
	while (hh < tt) {
		pii t = q[hh++];
		if (t.x == x2 && t.y == y2 && t.key == 1) return dist[t.x][t.y][t.key];
		for (int i = 0; i < 4; i++) {
			int a = t.x + dx[i];
			int b = t.y + dy[i];
			int newk = t.key;
			if (a<1 || a>n || b<1 || b>m) continue;
			if (maze[a][b] == '#') continue;

			if (maze[a][b] == 'k') {
				newk = 1;
			}
			if (dist[a][b][newk] >= 0) continue;
			dist[a][b][newk] = dist[t.x][t.y][t.key] + 1;
			q[tt++] = (pii){ a,b,newk };
		}
	}
}

int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d%d", &n, &m);
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	for (int i = 1; i <= n; i++) {
		scanf("%s", maze[i] + 1);
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (maze[i][j] == 'k') {
				count++;
			}
		}
	}
	if (count == 0) {
		printf("-1");
	}
	else {
		int res = bfs(x1, y1);
		printf("%d", res);
	}
	return 0;
}*/


/*#include <stdio.h>                               //蓝桥4575（100分） BFS
#include <stdlib.h>
#include <string.h>
#define N 1010
int n, m, d, r;
char maze[N][N];
int dist[N][N][2];
typedef struct {
	int x;
	int y;
	int use;
}pii;
pii q[N * N * 2];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int bfs() {
	int hh = 0, tt = 0;
	memset(dist, -1, sizeof(dist));
	dist[1][1][0] = 0;
	q[tt++] = (pii){ 1,1,0 };
	while (hh < tt) {
		pii t = q[hh++];
		if (t.x == n && t.y == m) return dist[t.x][t.y][t.use];
		for (int i = 0; i < 4; i++) {
			int a = t.x + dx[i];
			int b = t.y + dy[i];
			int newu = t.use;
			if (a<1 || a>n || b<1 || b>m) continue;
			if (maze[a][b] == '#') continue;
			if (dist[a][b][newu] > 0) continue;

			dist[a][b][newu] = dist[t.x][t.y][t.use] + 1;
			q[tt++] = (pii){ a,b,newu };
		}
		if (t.use == 0) {
			int a = t.x + d;
			int b = t.y + r;
			if (a >= 1 && a <= n && b >= 1 && b <= m) {
				if (dist[a][b][1] < 0 && maze[a][b] != '#') {
					dist[a][b][1] = dist[t.x][t.y][t.use] + 1;
					q[tt++] = (pii){ a,b,1 };
				}
			}
		}
	}
	return -1;
}
int main() {
	scanf("%d%d%d%d", &n, &m, &d, &r);
	for (int i = 1; i <= n; i++) {
		scanf("%s", maze[i] + 1);
	}
	int res = bfs();
	printf("%d", res);
	return 0;
}*/


/*#include <stdio.h>                                       //高精度加法算法
#include <stdlib.h>
#include <string.h>
char s1[100], s2[100];
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	int a1[60] = { 0 }, a2[60] = { 0 }, a3[60] = { 0 };
	scanf("%s", s1);
	scanf("%s", s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i < len1; i++) {
		a1[len1 - i - 1] = s1[i] - '0';
	}
	for (int i = 0; i < len2; i++) {
		a2[len2 - i - 1] = s2[i] - '0';
	}
	int len = len1;
	if (len2 > len1) {
		len = len2;
	}
	for (int i = 0; i < len; i++) {
		a3[i] = a1[i] + a2[i];
	}
	for (int i = 0; i < len; i++) {
		if (a3[i] >= 10) {
			a3[i + 1] = a3[i + 1] + a3[i] / 10;
			a3[i] = a3[i] % 10;
		}
	}
	if (a3[len] != 0) {
		len++;
	}
	for (int i = len - 1; i >= 0; i--) {
		printf("%d", a3[i]);
	}
	return 0;
}*/

/*#include <stdio.h>                              //高精度阶乘
#include <stdlib.h>
#define N 3000
int main() {
	int n;
	int res[N] = { 0 };
	res[0] = 1;
	scanf("%d", &n);
	int len = 1;
	for (int i = 2; i <= n; i++) {
		int carry = 0;
		for (int j = 0; j < len; j++) {
			int pro = res[j] * i + carry;
			res[j] = pro % 10;
			carry = pro / 10;
		}
		while (carry) {
			res[len] = carry % 10;
			carry /= 10;
			len++;
		}
	}
	for (int i = len - 1; i >= 0; i--) {
		printf("%d", res[i]);
	}
	return 0;
}*/

/*#include <stdio.h>                                    //蓝桥779   阶乘求和
#include <stdlib.h>
#include <string.h>
#define N 3000
int sum[N];
int n;
void jiecheng(int x, int res[]) {
	int len = 1;
	res[0] = 1;
	for (int i = 2; i <= x; i++) {
		int carry = 0;
		for (int j = 0; j < len; j++) {
			int pro = res[j] * i + carry;
			res[j] = pro % 10;
			carry = pro / 10;
		}
		while (carry) {
			res[len] = carry % 10;
			carry /= 10;
			len++;
		}
	}
}
void jia(int res[], int sum[]) {
	for (int i = 0; i < N; i++) {
		sum[i] = sum[i] + res[i];
	}
	for (int i = 0; i < N; i++) {
		if (sum[i] >= 10) {
			sum[i + 1] = sum[i + 1] + sum[i] / 10;
			sum[i] = sum[i] % 10;
		}
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &n);
	memset(sum, 0, sizeof(sum));
	int res[N];
	for (int i = 1; i <= n; i++) {
		memset(res, 0, sizeof(res));
		jiecheng(i, res);
		jia(res, sum);
	}
	int len = N;
	while (len > 0 && sum[len] == 0) {
		len--;
	}
	for (int i = len; i >= 0; i--) {
		printf("%d", sum[i]);
	}
	return 0;
}*/

/*#include <stdio.h>                               //蓝桥292
#include <stdlib.h>                               //如何快速记录整形数组长度！！
#include <math.h>
#include <string.h>
#define N 3000
int n;
int sum[N];
int ilog(int x, int y) {
	int k = 0;
	int p = 1;
	while (p * x <= y) {
		p *= x;
		k++;
	}
	return k;
}
int sushu(int x) {
	int count = 0;
	if (x < 2) return 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		return 1;
	}
	return 0;
}
void chengfa(int sum[], int x, int* lenp) {
	int len = *lenp;
	int carry = 0;
	for (int i = 0; i < len; i++) {
		int pro = sum[i] * x + carry;
		sum[i] = pro % 10;
		carry = pro / 10;
	}
	while (carry) {
		sum[len] = carry % 10;
		carry /= 10;
		len++;
	}
	*lenp = len;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &n);
	int len = 1;
	memset(sum, 0, sizeof(sum));
	sum[0] = 1;
	for (int i = 1; i <= n; i++) {
		if (sushu(i)) {
			int k = ilog(i, n);
			int power = 1;
			for (int j = 1; j <= k; j++) {
				power *= i;
			}
			chengfa(sum, power, &len);
		}
	}
	for (int i = len - 1; i >= 0; i--) {
		printf("%d", sum[i]);
	}
	return 0;
}*/


/*#include <stdio.h>                               //蓝桥209    贪心
#include <stdlib.h>
#include <string.h>
#define N 1010
void change(char* s1, int x) {
	if (s1[x] == '*') {
		s1[x] = 'o';
	}
	if (s1[x] == 'o') {
		s1[x] = '*';
	}
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	char s1[N], s2[N];
	scanf("%s", s1);
	scanf("%s", s2);
	int len = strlen(s1);
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (s1[i] != s2[i]) {
			change(s1, i);
			change(s1, i + 1);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}*/


/*#include <stdio.h>                                   //函数自传递指针
#include <stdlib.h>                                   //蓝桥357 贪心
typedef int long long;
int k;
int sum = 0;
void jia(int* money, int* dayp) {
	int day = *dayp;
	if (day == 0) {
		(*money)++;
		day = *money;
	}
	sum += *money;
	if (day > 0) {
		day--;
	}
	*dayp = day;
}
signed main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%lld", &k);
	int money = 1;
	int day = 1;
	for (int i = 0; i < k; i++) {
		jia(&money, &day);
	}
	printf("%d", sum);
	return 0;
}*/

/*#include <stdio.h>                                //蓝桥330        经典的逻辑思想,填沟
#include <stdlib.h>
#define N 100010
typedef int long long;
int n;
int road[N];
signed main() {
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &road[i]);
	}
	int day = road[0];
	for (int i = 1; i < n; i++) {
		if (road[i] > road[i - 1]) {
			day += road[i] - road[i - 1];
		}
	}
	printf("%lld", day);
	return 0;
}*/

/*
#include <stdio.h>                           //蓝桥384  与上一题类似
#include <stdlib.h>
#define N 100010
int n;
int jimu[N];
int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  scanf("%d",&n);
  for(int i=0;i<n;i++){
	scanf("%d",&jimu[i]);
  }
  int ope=jimu[0];
  for(int i=1;i<n;i++){
	if(jimu[i]>jimu[i-1]){
	  ope+=jimu[i]-jimu[i-1];
	}
  }
  printf("%d",ope);
  return 0;
}*/

/*#include <stdio.h>                                   //蓝桥385     逻辑思维：记录波峰和波谷
#include <stdlib.h>
#define N 100010
int n;
int high[N];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &high[i]);
	}
	int ans = 1;
	int trend = 0;
	for (int i = 1; i < n; i++) {
		if (high[i] > high[i - 1]) {
			if (trend != 1) {
				ans++;
				trend = 1;
			}
		}
		if (high[i] < high[i - 1]) {
			if (trend != -1) {
				ans++;
				trend = -1;
			}
		}
	}
	printf("%d", ans);
	return 0;
}*/

/*#include <stdio.h>                              //蓝桥1135            并查集
#include <stdlib.h>
#define N 200010
int fa[N];
int n, m;
int find(int x) {
	if (fa[x] != x) {
		fa[x] = find(fa[x]);
	}
	return fa[x];
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int op, x, y;
		scanf("%d%d%d", &op, &x, &y);
		if (op == 1) {
			int fx = find(x), fy = find(y);
			if (fx != fy) {
				fa[fx] = fy;
			}
		}
		else {
			int fx = find(x), fy = find(y);
			if (fx != fy) {
				printf("NO\n");
			}
			else {
				printf("YES\n");
			}
		}
	}
	return 0;
}*/

/*#include <stdio.h>                          //蓝桥185   并查集
#include <stdlib.h>
#define N 200010
int n;
int fa[N];
int find(int x) {
	if (fa[x] != x) {
		fa[x] = find(fa[x]);
	}
	return fa[x];
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= N; i++) {
		fa[i] = i;
	}
	int x;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		int root = find(x);
		printf("%d\t", root);
		fa[root] = find(root + 1);
	}
	return 0;
}*/

/*#include <stdio.h>                                     //蓝桥3870(错误)
#include <stdlib.h>
#define N 200010
int n, m;
int fa[N];
int find(int x) {
	if (fa[x] != x) {
		fa[x] = find(fa[x]);
	}
	return fa[x];
}
int main() {
	scanf("%d%d", &n, &m);
	int count = 0;
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		char s1, s2;
		scanf("%d %c %d %c", &a, &s1, &b, &s2);
		int fa1 = find(a);
		int fb = find(b);
		if (s1 != s2) {
			if (fa1 != fb) {
				fa[fa1] = fb;
			}
		}
		else {
			if (fa1 == fb) {
				count++;
			}
		}
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		if (fa[i] == i) {
			res++;
		}
	}
	printf("%d %d", res, count);
	return 0;
}*/


/*#include <stdio.h>                            //蓝桥5118 经典DP 01背包
#include <stdlib.h>
#define max(a,b) (a>b)?a:b
#define N 1010
int v, n;
int vol[N];
int mem[N][N];
int dfs(int x, int spv) {
	if (mem[x][spv]) return mem[x][spv];
	int sum = 0;
	if (x > n) return 0;
	else {
		if (spv < vol[x]) sum = dfs(x + 1, spv);
		else {
			sum = max(dfs(x + 1, spv), dfs(x + 1, spv - vol[x]) + vol[x]);
		}
	}
	mem[x][spv] = sum;
	return sum;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d", &v);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &vol[i]);
	}
	int res = dfs(1, v);
	printf("%d", v - res);
	return 0;
}*/

/*#include <stdio.h>                            //蓝桥1176  经典DP   多重背包
#include <stdlib.h>
#define N 1010
#define max(a,b) (a>b?a:b)
int n, v;
int vol[N];
int w[N];
int s[N];
int mem[N][N];
int dfs(int x, int spv) {
	if (mem[x][spv]) return mem[x][spv];
	int sum = 0;
	if (x > n) return 0;
	else {
		int m = s[x];
		for (int k = 0; k <= m; k++) {
			if (spv < k * vol[x]) break;
			sum = max(sum, dfs(x + 1, spv - k * vol[x]) + k * w[x]);
		}
	}
	mem[x][spv] = sum;
	return sum;
}
int main() {
	scanf("%d%d", &n, &v);
	memset(mem, -1, sizeof(mem));
	for (int i = 1; i <= n; i++) {
		scanf("%d%d%d", &vol[i], &w[i], &s[i]);
	}
	int res = dfs(1, v);
	printf("%d", res);
}*/

/*#include <stdio.h>                            //蓝桥4283   排序后记忆化搜索20分
#include <stdlib.h>
#define max(a,b) (a>b?a:b)
#define N 100
int t, n;
typedef struct {
	int x;
	int y;
	int z;
}pii;
pii mine[N * N * N];
int mem[N][N];
int compare(const void* a, const void* b) {
	pii* oa = (pii*)a;
	pii* ob = (pii*)b;
	return ob->y * oa->z - oa->y * ob->z;
}
int dfs(int x, int spt) {
	if (mem[x][spt]) return mem[x][spt];
	int sum = 0;
	if (x > n) return 0;
	else {
		if (spt < mine[x].z) sum = dfs(x + 1, spt);
		else {
			sum = max(dfs(x + 1, spt), dfs(x + 1, spt - mine[x].z) + mine[x].x - (t - spt + mine[x].z) * mine[x].y);
		}
	}
	mem[x][spt] = sum;
	return sum;
}
int main(int argc, char* argv[])
{
	// 请在此输入您的代码
	scanf("%d%d", &t, &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &mine[i].x);
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &mine[i].y);
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &mine[i].z);
	}
	qsort(mine + 1, n, sizeof(pii), compare);
	int res = dfs(1, t);
	printf("%d", res);
	return 0;
}*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#define pi 3.1415926
//float tan1(float x) {
//	return tan(x * pi / 180);
//}
//float sin1(float x) {
//	return sin(x * pi / 180);
//}
//float cos1(float x) {
//	return cos(x * pi / 180);
//}
//int main() {
//
//	float thata = 120;
//	float alpha = 1.5;
//	float d = 200;
//
//	float D0 = 70;
//	float distance[9] = { -800,-600,-400,-200,0,200,400,600,800 };
//	float D[9] = { 0 };
//	float W[9] = { 0 };
//	float n[9] = { 0 };
//
//	float d1;
//	d1 = sin1(90 - thata / 2) * d / sin1(90 + thata / 2 - alpha);
//	for (int i = 0; i < 9; i++) {
//		D[i] = D0 - distance[i] * tan1(alpha);
//		W[i] = sin1(thata / 2) * D[i] * ((1 / cos1(thata / 2 + alpha) + 1 / (cos1(alpha - thata / 2))));
//	}
//	for (int i = 0; i < 8; i++) {
//		n[i] = 1-d1 / W[i+1];
//	}
//	for (int i = 0; i < 9; i++) {
//		printf("%f\t", D[i]);
//		printf("\n");
//	}
//	for (int i = 0; i < 9; i++) {
//		printf("%f\t", W[i]);
//		printf("\n");
//	}
//	for (int i = 0; i < 8; i++) {
//		printf("%f\t", n[i]);
//		printf("\n");
//	}
//}

//#include <stdio.h>                         
//#include <stdlib.h>
//#include <math.h>
//#define pi 3.1415926
//#define haili 1852
//float sin1(float x) {
//	return sin(x * pi / 180);
//}
//float cos1(float x) {
//	return cos(x * pi / 180);
//}
//float tan1(float x) {
//	return tan(x * pi / 180);
//}
//int main() {
//	
//	float beta[8] = { 0,45,90,135,180,225,270,315 };
//	float alpha = 1.5;
//	float thata = 120;
//	float D0 = 120;
//
//	float distance[8] = { 0,0.3,0.6,0.9,1.2,1.5,1.8,2.1 };
//	float D[8] = { 0 };
//	float W[8] = { 0 };
//	for (int i = 0; i < 8; i++) {
//		float gama = atan(tan1(alpha) * sin1(beta[i]));
//		//用gama去代替模型一中的alpha即可
//		gama = gama * 180 / pi;
//		for (int j = 0; j < 8; j++) {
//			D[j] = D0 + distance[j] * cos1(beta[i]) * haili*tan1(alpha);
//			W[j] = sin1(thata / 2) * D[j] * ((1 / cos1(thata / 2 + gama) + 1 / cos1(gama - thata / 2)));
//		}
//		for (int i = 0; i < 8; i++) {
//			printf("%f\t", W[i]);
//			printf("\n");
//		}
//	}
//	return 0;
//}


