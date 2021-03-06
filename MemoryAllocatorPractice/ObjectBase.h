﻿// ***************************************************************************************
/// @file			ObjectBase.h
/// @brief			オブジェクト基底クラス
/// @author			楠原 健作
// ***************************************************************************************

// ***************************************************************************************
// PREPROCESS SECTION
// ***************************************************************************************
#ifndef OBJECTBASE_H
#define OBJECTBASE_H

// ***************************************************************************************
// INCLUDE SECTION
// ***************************************************************************************
#include <Windows.h>

// ***************************************************************************************
// CLASS SECTION
// ***************************************************************************************
namespace ZakLib
{
	// ===================================================================================
	/// @brief		オブジェクト基底クラス
	// ===================================================================================
	class ObjectBase
	{
		// ===============================================================================
		// 公開領域
		// ===============================================================================
		public:

			// ---------------------------------------------------------------------------
			// 関数
			// ---------------------------------------------------------------------------

			//! コンストラクタ
			ObjectBase()
				: mpPrev(NULL)
				, mpNext(NULL)
			{
			}

			//! デストラクタ
			~ObjectBase()
			{
				mpPrev = NULL;
				mpNext = NULL;
			}

			//! リセット
			void Reset(){ mpPrev = NULL; mpNext = NULL; }

			//! 前オブジェクト取得
			ObjectBase*	GetPrev(){ return mpPrev; }

			//! 前オブジェクト設定
			void SetPrev( ObjectBase* pObj ){ mpPrev = pObj; }

			//! 次オブジェクト取得
			ObjectBase* GetNext(){ return mpNext; }

			//! 次オブジェクト設定
			void SetNext( ObjectBase* pObj ){ mpNext = pObj; }

			// ---------------------------------------------------------------------------
			// 変数
			// ---------------------------------------------------------------------------

		// ===============================================================================
		// 非公開領域
		// ===============================================================================
		private:

			// ---------------------------------------------------------------------------
			// 関数
			// ---------------------------------------------------------------------------

			// ---------------------------------------------------------------------------
			// 変数
			// ---------------------------------------------------------------------------

			ObjectBase*	mpPrev;				//!<	前オブジェクト

			ObjectBase* mpNext;				//!<	次オブジェクト
		
	};
}

#endif//OBJECTBASE_H