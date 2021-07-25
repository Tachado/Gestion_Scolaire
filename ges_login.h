//---------------------------------------------------------------------------

#ifndef ges_loginH
#define ges_loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tglogin : public TForm
{
__published:	// Composants gérés par l'EDI
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label2;
	TImage *Image1;
	TSpeedButton *SpeedButton1;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *mp;
	TButton *Button1;
	TComboBox *user;
	TPanel *Panel2;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *structure;
	TEdit *clef;
	TButton *Button2;
	TDateTimePicker *DateTimePicker1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall SpeedButton1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall userChange(TObject *Sender);
	void __fastcall mpChange(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Panel2DblClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Panel1Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall Tglogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tglogin *glogin;
//---------------------------------------------------------------------------
#endif
