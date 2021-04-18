#include <bits/stdc++.h>

using namespace std;

void Delete_space(char str[]) // hàm xóa dấu cách thừa
{
    int i, j;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
            str[strlen(str)] = '\0';
        }
        if (str[i] != ' ')
        {
            for (j = i; j < strlen(str); j++)
            {
                if (str[j] == ' ' && str[j + 1] == ' ')
                {
                    for (int k = j; k < strlen(str); k++)
                    {
                        str[k] = str[k + 1];
                    }
                    j--;
                    str[strlen(str)] = '\0';
                }
            }
            break;
        }
        else
            i--;
    }
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
            break;
        if (str[i] == ' ')
            str[i] = '\0';
        if (str[i - 1] != ' ')
            break;
    }
}

void VietHoaChuCaiDau(char str[])
{
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    str[0] = toupper(str[0]);
    for (i = 1; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);
    }
}

int main()
{
    char str[50];

    cout << "Nhap chuoi ten rieng can phai chuan hoa: ";
    gets(str);

    Delete_space(str);
    VietHoaChuCaiDau(str);
    cout << "Chuoi sau khi duoc chuan hoa la: " << str;
}
