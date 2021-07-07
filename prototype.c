#include<stdio.h>
int main()
{
    int a, i, x, d,  y, e, ck;
    char file[20], ch;
    char str[100];
				FILE *fpts, *fptt;
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("                                                                                                                \n");
	printf("    //   ) )                                                //   ) )                                            \n");
	printf("   //         __               ___    __  ___  ___         ((         ___      ___               __      ___    \n");
	printf("  //        //  ) ) //   / / //   ) )  / /   //   ) )        \\     //___) ) //   ) ) //   / / //  ) ) //___) ) \n");
	printf(" //        //      ((___/ / //___/ /  / /   //   / /           ) ) //       //       //   / / //      //        \n");
	printf("((____/ / //           / / //        / /   ((___/ /     ((___ / / ((____   ((____   ((___( ( //      ((____     \n");
	//printf("																     \nDeveloped By : Yatin Kalra | Ashutosh Singh\n");
	printf("\n----------------------------------------------------------------------------------------------------------------\n");
    printf("\nEnter the License Key :- ");
    scanf("%d", &y);
    if((y>11111 && y<99999) || y==123456789 )
    {
        printf("\n		**************\n");
		printf("		ACCESS GRANTED\n");
		printf("		**************\n");
        printf("        \nWelcome to CryptoSecure - A Secure Platform to make your secrets secure\n");
        printf("           (Your secrets are secure between you and only you)\n");
        printf("                           For any assist : cryptosecureuser@gmail.com\n");
        printf("***********************************************************************\n");
        printf("What do you want to Encrypt or Decrypt\n");
        printf("[1] Text (Space Limit = 01)\n");
        printf("[2] File\n");
        printf("Selected Option :");
        scanf("%d", &d);
        
		switch(d)
        {
        	
            case 1: 
					printf("Enter the Secret : ");
					scanf("%s", &str);
					printf("\nPlease choose following options:\n");
					printf("1 = Encrypt the string.\n");
					printf("2 = Decrypt the string.\n");
					scanf("%d", &x);
					printf("Enter the Cryptographic Key [1-50] : ");
					scanf("%d", &ck);
				
					switch(x)
   					{
   						case 1:
						   for(i = 0; (i < 100 && str[i] != '\0'); i++)
						   str[i] = str[i] + ck; 
						   printf("\nEncrypted string: %s\n", str);
						   break;

   						case 2:
						   for(i = 0; (i < 100 && str[i] != '\0'); i++)
						   str[i] = str[i] - ck; 
						   printf("\nDecrypted string: %s\n", str);
						   break;

   						default:
      						printf("\nError\n");
   					}
                		break;

                
            
            
            case 2:
            	
            		printf("What do you want to do\n");
            		printf("[1] Encrypt the File\n");
            		printf("[2] Decrypt the File\n");
					scanf("%d", &e);
					switch(e)
					{
						case 1:
						printf("\n\n Encrypt a text file :\n");
						printf("--------------------------\n"); 	
						printf(" Input the name of file to encrypt : ");
						scanf("%s",file);	
						fpts=fopen(file, "r");
						if(fpts==NULL)
							{
								printf(" File does not exists or error in opening..!!");
								exit(1);
							}
						fptt=fopen("temp.txt", "w");
						if(fptt==NULL)
							{
								printf(" Error in creation of file temp.txt ..!!");
								fclose(fpts);
								exit(2);
							}
						while(1)
						{
							ch=fgetc(fpts);
							if(ch==EOF)
							{
								break;
							}
							else
							{
								ch=ch+100;
								fputc(ch, fptt);
							}
						}
							fclose(fpts);
							fclose(fptt);
							fpts=fopen(file, "w");
							if(fpts==NULL)
							{
								printf(" File does not exists or error in opening..!!");
								exit(3);
							}
							fptt=fopen("temp.txt", "r");
							if(fptt==NULL)
							{
								printf(" File does not exists or error in opening..!!");
								fclose(fpts);
								exit(4);
							}
							while(1)
							{
								ch=fgetc(fptt);
								if(ch==EOF)
								{
									break;
								}
								else
								{
									fputc(ch, fpts);
								}
							}
							printf(" File %s successfully encrypted ..!!\n\n", file);
							fclose(fpts);
							fclose(fptt);
            				break;
            
           					default:
            					printf("error\n");
        
        
    					case 2:
    					printf("\n\n Decrypt a text file :\n");
						printf("--------------------------\n"); 	
	
						printf(" Input the name of file to decrypt : ");
						scanf("%s",file);	
	
						fpts=fopen(file, "w");
						if(fpts==NULL)
						{
							printf(" File does not exists or error in opening..!!");
							exit(7);
						}
						fptt=fopen("temp.txt", "r");
						if(fptt==NULL)
						{
							printf(" File does not exists or error in opening..!!");
							fclose(fpts);
							exit(9);
						}
						while(1)
						{
							ch=fgetc(fptt);
							if(ch==EOF)
							{
								break;
							}
							else
							{
								ch=ch-100;
								fputc(ch, fpts);
							}
						}
						printf(" The file %s decrypted successfully..!!\n\n",file);
						fclose(fpts);
						fclose(fptt);
						}

					}
				}
	else
    {
        printf("Wrong License Key! Contact to Administrator to get a new one\n");
    }
    
return 0;
    
}

