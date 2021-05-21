#include <bits/stdc++.h>

using namespace std;

void XoaPhanTu(char *s, int pos)
{
    for (int i = pos; i < strlen(s) - 1; i++)
        s[i] = s[i + 1];
    s[strlen(s) - 1] = '\0';
}

void XoaSo(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        /*
        // C1: ép kiểu, nhớ bẳng ascii nhé!
        int temp = (int)s[i] - 48;
        if (temp >= 0 && temp <= 9)
        {
            XoaPhanTu(s, i);
            i--;
        }
        */
        // C2: Xử lý thẳng, anh thường dùng cách này
        if (s[i] >= '0' && s[i] <= '9')
        {
            XoaPhanTu(s, i);
            i--;
        }
    }
}

int tongSo(char *s)
{
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] >= '0' && s[i] <= '9')
            sum += s[i] - 48;
    return sum;
}

void XoaDauCach(char *s)
{
    // Xóa những dấu cách đầu tiên
    while (s[0] == ' ')
        XoaPhanTu(s, 0);
    // Xóa những dấu cách cuối cùng
    while (s[strlen(s) - 1] == ' ')
        s[strlen(s) - 1] = '\0';
    // Xóa 1 dấu cách nếu 2 dấu cách kề nhau
    for (int i = 1; i < strlen(s) - 1; i++)
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            XoaPhanTu(s, i);
            i--;
        }
}

void ChuanHoaTenRieng(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        // C1: Cách làm thông thường, nên ưu tiên nếu không muốn bị trừ điểm
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    // C2: Dùng hàm strlwr, không khuyến khích
    // strlwr(s);

    //Chữ đầu tiên in hoa
    s[0] -= 32;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            s[i + 1] -= 32;
        }
    }
}

int main(int argc, char const *argv[])
{
    // đây là làm lười, không nên sử dụng nhé!
    // char *s = "     nGuy32en  35  di0nH    hu8An   ";
    char *s = new char;
    strcpy(s, "     nGuy32en  35  di0nH    hu8An   ");
    cout<<tongSo(s)<<endl;
    XoaSo(s);
    XoaDauCach(s);
    ChuanHoaTenRieng(s);
    //    puts(s);
    cout << s;
    delete s;
    return 0;
}

/*
#include <iostream>
#include <string.h>

using namespace std;

void Xoa(char *s, int pos)
{
	for (int i = pos; i < strlen(s) - 1; i++)
		s[i] = s[i + 1];
	s[strlen(s) - 1] = '\0';
}
void XoaAllSpace(char *s)
{
	while (s[0] == ' ')
		Xoa(s, 0);
	for (int i = 1; i < strlen(s); i++)
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			Xoa(s, i);
			i--;
		}
}
void XoaSo(char *s)
{
	for (int i = 0; i < strlen(s); i++)
		if (s[i] >= '0' && s[i] <= '9')		//chỗ này phải là kí tự chứ
		{
			Xoa(s, i);
			i--;
		}
}
void ChuanHoa(char *s)
{
	strlwr(s);
	s[0] -= 32;
	for (int i = 1; i < strlen(s) - 1; i++)
		if (s[i] == ' ' && s[i + 1] != ' ')
			s[i + 1] -= 32;
}
int main()
{
	char s[100];
	// gets(s);
	strcpy( s, "     nGuy32en  35  di0nH    hu8An   ");
	// s = new char;
	XoaSo(s);
	XoaAllSpace(s);
	ChuanHoa(s);
	cout << strlen(s) << endl;
	cout << s;
	// delete s;
}
*/
