#include "Unicode.h"

wchar_t *L()
{
	static wchar_t *temp = L"�����ڵ� �׽�Ʈ";
	return temp;
}

void test() 
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Black, _itoa(10, new char[10], 10));
}