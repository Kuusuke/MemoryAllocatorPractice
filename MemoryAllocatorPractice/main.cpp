// ***************************************************************************************
/// @file			main.cpp
/// @brief			メインループ
/// @author			楠原 健作
// ***************************************************************************************

// ***************************************************************************************
// INCLUDE SECTION
// ***************************************************************************************
#include <stdio.h>
#include "ObjectBase.h"
#include "FixedSizeBlockAllocator.h"

#include <time.h>
#include <iostream>

// ***************************************************************************************
/// @brief			メイン関数
/// @return			エラーコード	
// ***************************************************************************************
int main( void )
{
	ZakLib::FixedSizeBlockAllocator<ZakLib::ObjectBase> allocator;

	clock_t start = clock();
	
	allocator.Initialize( 1000000 );

	ZakLib::ObjectBase* pObject[1000000];

	// メモリ確保
	for( int i=0; i<1000000; ++i )
	{
		pObject[i] = allocator.GetObject();
	}

	//// メモリ解放
	for( int i=0; i<1000000; ++i )
	{
		 allocator.ReleaseObject(pObject[i]);
	}

	allocator.Finalize();


	// 停止
	getchar();

	return 0;
}