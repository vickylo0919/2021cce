#include <stdio.h>
int main()
{///Input: 1��, Output: �O���O���
    int n;  ///n�O���O��� : 1�Mn�����i�㰣,��L������
    scanf("%d",&n);

    int bad=0; ///�S���a��,�S���ѹ���
    for (int i=2 ; i<n ; i++){ ///�u�P�_2..n-1
        if ( n%i==0) bad++;  ///�V�|, �㰣�F ,���O���
    }

    if ( bad==0) printf("%d�O���",n); ///�S���ѹ���, �S���a��
    else printf("%d�a���F,���O���",n);
}
