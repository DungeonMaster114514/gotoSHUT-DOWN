#define _CRT_SECURE_NO_WARNINGS 21
#include <stdio.h>
#include <windows.h>
//goto��佨���ڶ��Ƕ�׵������ʹ��
int main()
{
	printf("��ĵ��Խ���1���Ӻ�ػ�,���ǸϿ���Щʲô!\n����G5��һƥ��ɫС������ּ���ȡ���ػ�(�������λ���):");
	system("shutdown -s -t 60");
	//system("start cmd %0");//(��Ϊ����ѭ���о�ϲ)
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
			system("shutdown -a");//shutdown -aΪ��ֹ�ػ�����
			printf("��ȷ,��ֹͣ�ػ�\n���������ȷ��:");
			scanf("%d", &Yes);
			break;
		}
		else
		{
			numbleoftime--;
			printf("�������,����%d�λ���\n", numbleoftime);
		}
	}

	return 0;

}