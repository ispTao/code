#include<stdio.h>

void getDose(int vol[], double actualVol[])
{
	for(int i = 0; i < 5; i++)
	{
		double res = actualVol[i] / vol[(i + 1)/ 2];
		for(int j = 10; j <= 180; j += 10)
		{
			printf("注射剂量选择%.1f/%dml\n", actualVol[i], vol[(i + 1)/ 2]);
			printf("注射次数选择%d次\n", j);
			printf("单次注射剂量：%f / %d = %.15f ml\n\n", res, j, res / j); 
		}
	}
}

int main()
{
	int vol[3] = {1, 3, 5};  //注射器容量
	double actualVol[5] = {0.8, 2.0, 3.0, 4.0, 5.0}; //实际药液容量
	
	getDose(vol, actualVol);

    return 0;
}
