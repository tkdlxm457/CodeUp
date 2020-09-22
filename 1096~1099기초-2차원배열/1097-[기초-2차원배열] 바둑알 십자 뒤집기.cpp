#include     <stdio.h>

int main()
{
    int i, j, x, y, input = 0;
    int a[20][20] = { 0 };        // 20행(0~19) 20열(0~19) 배열을 선언
    
    for(i = 1; i <= 19; i++)        // 한 줄씩 바둑판 상황 입력 받음
        for(j = 1; j <= 19; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    scanf("%d", &input);            // 좌표 개수 입력 받음
    
    for(i = 1; i <= input; i++)     // 좌표 개수만큼 
    {
        scanf("%d %d", &x, &y);    // 좌표를 받음
        
        for(j = 1; j <= 19; j++)    // 가로줄 흑 백 바꾸기
            if(a[x][j] == 0)
                a[x][j] = 1;
            else
                a[x][j] = 0;
        
        for(j = 1; j <= 19; j++)    // 세로줄 흑 백 바꾸기
            if(a[j][y] == 0)
                a[j][y] = 1;
            else
                a[j][y] = 0;
    }
    
    for(i = 1; i <= 19; i++)         // 바뀐 바둑판 출력
    {  
        for(j = 1; j <= 19; j++)
            printf("%d ", a[i][j]);
        
        printf("\n");
    }    
    return 0;
}