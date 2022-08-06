#include <stdio.h>
int main() {
int a[10000];
int b[10000] = {0};
int n,i;
scanf("%d", &n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
int max = 0;
for (i = 0; i < n; i++) {
if (a[i] % 5 == 0) {
b[a[i]]++;
if (a[i] > max) max = a[i];
}
}
for (i = 0; i <= max; i++) {
if (b[i] != 0) {
printf("%d-%d\n",b[i],i);

}
}
return 0;
}
