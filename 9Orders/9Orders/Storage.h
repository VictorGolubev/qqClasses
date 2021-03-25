class Storage
{
public:
	char Name[10];
	int num;
	int Count;

	static void openSkladFile(FILE* file, Storage* sk)
	{
		printf("\nSklad\n");
		printf("Number \t Name \t Count \n");
		file = fopen("C:\\Users\\viktor.golubev\\Documents\\sklad.txt", "r");
		if (file != NULL)
		{

			for (int i = 0; i < 6;i++)
			{
				fscanf(file, "%d", &sk[i].num);
				fscanf(file, "%s", &sk[i].Name);
				fscanf(file, "%d", &sk[i].Count);
				printf("%d\t %s\t %d\n", sk[i].num, sk[i].Name, sk[i].Count);

			}
		}
		else
			printf("Can't open file");
	}

	static void checkProduct(Storage* sk, Order* zk)
	{
		printf("\nNot enough product:\n");
		for (int i = 0; i < 6; i++)
			for (int j = 0; j < 6; j++) {
				if (strcmp(sk[i].Name, zk[j].Name) == 0 and sk[i].Count < zk[j].Count) {
					printf("%s\t%d\n", zk[j].Name, sk[i].Count - zk[j].Count);
				}
			}

	}

};