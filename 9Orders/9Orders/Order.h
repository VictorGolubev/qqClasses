#pragma once
class Order
{
public:
	char Name[10];
	int Count;

	static void openZakazFile(FILE* file_cust, Order* zk)
	{
		//чтение заказа
		printf("\nOrder\n");
		printf("Name \t Count \n");
		file_cust = fopen("C:\\Users\\viktor.golubev\\Documents\\zakaz.txt", "r");
		if (file_cust != NULL)
		{

			for (int i = 0; i < 6;i++)
			{
				fscanf(file_cust, "%s", &zk[i].Name);
				fscanf(file_cust, "%d", &zk[i].Count);
				printf("%s\t %d\n", zk[i].Name, zk[i].Count);

			}
		}
		else
			printf("Can't open file");
	}
};
