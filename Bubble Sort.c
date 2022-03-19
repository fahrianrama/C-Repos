#include<bits/stdc++.h>
using namespace std;

void BubbleSort(char arr[][alfabet], int n)
{
    char temp[alfabet];

    // Sorting strings using bubble sort
    for (int j=0; j<n-1; j++)
    {
        for (int i=j+1; i<n; i++)
        {
            if (strcmp(arr[j], arr[i]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

int main()
{
	int alfabet;
	cout << "Masukkan jumlah alfabet yang ingin dimasukkan : ";
	cin >> alfabet;
    char arr[][alfabet];
	for (int i=0; i<alfabet; i++)
	{
		cout << "Masukkan alfabet ke-%d : ",i+1;
		arr[i] = cin >> char huruf;
	}
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, n);

    printf("Strings in sorted order are : ");
    for (int i=0; i<n; i++)
        printf("\n Urutan ke -%d adalah : %s", i+1, arr[i]);
    return 0;
}
