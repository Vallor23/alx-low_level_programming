/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Description: This function takes an array of integers and reverses the
 * order of its elements in place.
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
int j = n - 1;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}

