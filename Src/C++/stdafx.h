
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // 功能区和控件条的 MFC 支持


#include "resource.h"
#include "libEasyPlayerPro/libEasyPlayerProAPI.h"

#define	WM_WINDOW_MAXIMIZED		(WM_USER+2001)
#define	WM_MANU_RECORDING		(WM_USER+2002)
#define WM_SET_FILE_DURATION	(WM_USER+2003)
#define	WM_SET_FILE_PROGRESS	(WM_USER+2004)
#define WM_SEEK_FILE					(WM_USER+2005)
#define	WM_PLAY_COMPLETE			(WM_USER+2006)
#define	WM_PLAY_ABROTED			(WM_USER+2007)

#define __CREATE_WINDOW(_x, _class, _id) {if (NULL == _x) {_x = (_class*)GetDlgItem(_id);}}
#define __MOVE_WINDOW(x, _rect)	{if (NULL != x) {x->MoveWindow(&_rect);}}
#define __MOVE_WINDOW_INVALIDATE(x, _rect)	{if (NULL != x) {x->MoveWindow(&_rect); x->Invalidate();}}
#define __DELETE_WINDOW(x)	{if (NULL != x) {x->DestroyWindow(); delete x; x=NULL;}}


bool MByteToWChar(LPCSTR lpcszStr, LPWSTR lpwszStr, DWORD dwSize);
bool WCharToMByte(LPCWSTR lpcwszStr, LPSTR lpszStr, DWORD dwSize);
int CheckFolder(wchar_t *folderName, int bCreate);

extern RENDER_FORMAT		RenderFormat;
extern PLAYER_HANDLE		playerHandle;

#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


