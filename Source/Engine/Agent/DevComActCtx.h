/*
 * Copyright (C) 2010-2015 Nektra S.A., Buenos Aires, Argentina.
 * All rights reserved. Contact: http://www.nektra.com
 *
 *
 * This file is part of Deviare
 *
 *
 * Commercial License Usage
 * ------------------------
 * Licensees holding valid commercial Deviare licenses may use this file
 * in accordance with the commercial license agreement provided with the
 * Software or, alternatively, in accordance with the terms contained in
 * a written agreement between you and Nektra.  For licensing terms and
 * conditions see http://www.nektra.com/licensing/. Use the contact form
 * at http://www.nektra.com/contact/ for further information.
 *
 *
 * GNU General Public License Usage
 * --------------------------------
 * Alternatively, this file may be used under the terms of the GNU General
 * Public License version 3.0 as published by the Free Software Foundation
 * and appearing in the file LICENSE.GPL included in the packaging of this
 * file.  Please visit http://www.gnu.org/copyleft/gpl.html and review the
 * information to ensure the GNU General Public License version 3.0
 * requirements will be met.
 *
 **/

#ifndef _NKT_DV_DEVIARECOM_ACTCTX_H
#define _NKT_DV_DEVIARECOM_ACTCTX_H

#include "Agent.h"
#include "..\..\Common\EngBaseObj.h"

//-----------------------------------------------------------

class CNktDeviareComActCtx : public CNktMemMgrObj
{
public:
  CNktDeviareComActCtx();
  ~CNktDeviareComActCtx();

  HRESULT Initialize(__in HINSTANCE hDll, __in int nResource);

  HRESULT Activate(__out ULONG_PTR *lpnCookie);
  VOID Deactivate(__in ULONG_PTR nCookie);

private:
  HANDLE hActCtx;
  HINSTANCE hKernel32Dll;
  BOOL bIsXPorLater;
  LPVOID fn[4];
};


//-----------------------------------------------------------

#endif //_NKT_DV_DEVIARECOM_ACTCTX_H
