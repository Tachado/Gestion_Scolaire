//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ges_demarrage.h"
#include "ges_login.h"
#include "ges_principal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tgdemarrage *gdemarrage;
//---------------------------------------------------------------------------
__fastcall Tgdemarrage::Tgdemarrage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tgdemarrage::Timer1Timer(TObject *Sender)
{
ProgressBar1->Position = ProgressBar1->Position + 1;

	if (ProgressBar1->Position >= ProgressBar1->Max) {
		  Timer1->Enabled = false;

			  glogin->Show();
			  // Pour faire disparaître la fiche de démarrage
			  gdemarrage->Width = 0;
			  gdemarrage->Height = 0;

	}

}
//---------------------------------------------------------------------------

