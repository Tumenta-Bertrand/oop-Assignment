/***************************************************************
 * Name:      CaveRunApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2024-01-04
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CaveRunApp.h"

//(*AppHeaders
#include "CaveRunMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CaveRunApp);

bool CaveRunApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CaveRunFrame* Frame = new CaveRunFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
