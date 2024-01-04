/***************************************************************
 * Name:      CaveRunMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-01-04
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CAVERUNMAIN_H
#define CAVERUNMAIN_H

//(*Headers(CaveRunFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class CaveRunFrame: public wxFrame
{
    public:

        CaveRunFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CaveRunFrame();

    private:

        //(*Handlers(CaveRunFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(CaveRunFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CaveRunFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CAVERUNMAIN_H
