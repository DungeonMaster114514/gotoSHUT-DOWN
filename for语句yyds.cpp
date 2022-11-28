#define _CRT_SECURE_NO_WARNINGS 21
#include <stdio.h>
#include <windows.h>
//goto语句建议在多层嵌套的情况下使用
int main()
{
	printf("你的电脑将在1分钟后关机,你是赶快做些什么!\n输入G5的一匹紫色小马的名字即可取消关机(你有三次机会):");
	system("shutdown -s -t 60");
	//system("start cmd %0");//(设为无限循环有惊喜)
	char cancel[20] = { 0 };
	char password[20] = "IzzyMoonbow";
	int chance = 0;
	int numbleoftime = 0;
	int Yes = 0;
	for (chance = 0, numbleoftime = 3; chance < 3; chance++)
	{
		scanf("%s", &cancel);
		if (strcmp(cancel, password) == 0)
		{
			system("shutdown -a");//shutdown -a为终止关机命令
			printf("正确,已停止关机\n输入任意键确认:");
			scanf("%d", &Yes);
			break;
		}
		else
		{
			numbleoftime--;
			printf("你输错啦,还有%d次机会\n", numbleoftime);
		}
	}

	return 0;

}