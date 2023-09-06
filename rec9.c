int fun(int a[], int n){
int x;
if (n == 1)
	return a[0]; //base case - temel durum
else
	x = fun(a, n - 1);
if (x > a[n - 1])
	return x;
else
	return a[n - 1];
}


int main(){
int arr[] = { 12, 10, 300, 50, 100 };
printf(" %d ", fun(arr, 5));
getchar();
return 0;
}

//dizideki en büyük elemaný bulan program
