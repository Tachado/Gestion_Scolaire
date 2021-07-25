//---------------------------------------------------------------------------

#ifndef ges_demarrageH
#define ges_demarrageH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class Tgdemarrage : public TForm
{
__published:	// Composants gérés par l'EDI
	TTimer *Timer1;
	TPanel *Panel1;
	TImage *Image1;
	TProgressBar *ProgressBar1;
	TLabel *Label1;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label4;
	TSplitter *Splitter1;
	TPanel *Panel3;
	void __fastcall Timer1Timer(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall Tgdemarrage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tgdemarrage *gdemarrage;
//---------------------------------------------------------------------------
#endif
