//---------------------------------------------------------------------------

#ifndef ges_principalH
#define ges_principalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class Tgprincipal : public TForm
{
__published:	// Composants gérés par l'EDI
	TMainMenu *MainMenu1;
	TMenuItem *Fichiers1;
	TMenuItem *Outils1;
	TMenuItem *Aide1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPageControl *PageControl2;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TTabSheet *TabSheet7;
	TTabSheet *TabSheet8;
	TTabSheet *TabSheet9;
	TStatusBar *StatusBar1;
	TMenuItem *Elves1;
	TMenuItem *Enseignants1;
	TMenuItem *Matres1;
	TMenuItem *Notes1;
	TMenuItem *Calculatrice1;
	TMenuItem *Donnes1;
	TMenuItem *Excel1;
	TMenuItem *Importer1;
	TMenuItem *Exporter1;
	TMenuItem *Bulletins2;
	TMenuItem *Elves2;
	TMenuItem *Enseignants2;
	TMenuItem *Notes2;
	TMenuItem *Bulltins1;
	TMenuItem *Elves3;
	TMenuItem *Enseignants3;
	TMenuItem *Notes3;
	TMenuItem *NiveauAccs1;
	TMenuItem *AProposdeTeTaSoftTeam1;
	TMenuItem *Massagerie1;
	TMenuItem *Horloge1;
	TMenuItem *Calendrier1;
	TMenuItem *Messagerie1;
	TMenuItem *Scolarit1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton1;
	TMenuItem *Parents1;
	TSpeedButton *SpeedButton8;
	TMenuItem *Personnelsparclasses1;
	TSpeedButton *SpeedButton4;
	TMenuItem *Classes1;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TMenuItem *AProposdeGestionScolaire1;
	TMenuItem *APropos1;
	TMenuItem *GestionScolaire1;
	TTabSheet *TabSheet10;
	TTabSheet *TabSheet11;
	TTabSheet *TabSheet12;
	TGroupBox *GroupBox3;
	TLabel *Label7;
	TLabel *Label18;
	TLabel *Label21;
	TLabel *Label49;
	TLabel *nliste1;
	TLabel *c1;
	TLabel *c2;
	TDBGrid *DBGrid1;
	TEdit *recherche1;
	TEdit *idx1;
	TButton *Button16;
	TGroupBox *GroupBox20;
	TImage *img2;
	TGroupBox *GroupBox4;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label16;
	TLabel *Label20;
	TEdit *nomp;
	TEdit *user;
	TEdit *mp;
	TComboBox *niveaua;
	TComboBox *etatc;
	TComboBox *sexep;
	TDateTimePicker *daten;
	TEdit *poste;
	TEdit *contactp;
	TGroupBox *GroupBox5;
	TLabel *Label15;
	TEdit *id1;
	TGroupBox *GroupBox6;
	TButton *Button8;
	TButton *Button9;
	TButton *Button2;
	TButton *Button11;
	TButton *Button12;
	TButton *Button91;
	TButton *Button99;
	TGroupBox *GroupBox19;
	TImage *img1;
	TButton *Button34;
	TGroupBox *GroupBox23;
	TLabel *Label50;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TGroupBox *GroupBox7;
	TGroupBox *GroupBox8;
	TGroupBox *GroupBox9;
	TGroupBox *GroupBox10;
	TGroupBox *GroupBox11;
	TGroupBox *GroupBox12;
	TGroupBox *GroupBox13;
	TGroupBox *GroupBox14;
	TLabel *Label1;
	TEdit *Edit1;
	TGroupBox *GroupBox15;
	TLabel *Label2;
	TGroupBox *GroupBox16;
	TLabel *Label3;
	TEdit *Edit2;
	TGroupBox *GroupBox17;
	TLabel *Label4;
	TGroupBox *GroupBox18;
	TLabel *Label5;
	TEdit *Edit3;
	TGroupBox *GroupBox21;
	TLabel *Label6;
	TGroupBox *GroupBox27;
	TLabel *Label24;
	TEdit *Edit6;
	TGroupBox *GroupBox28;
	TLabel *Label25;
	TGroupBox *GroupBox29;
	TLabel *Label26;
	TEdit *Edit7;
	TGroupBox *GroupBox30;
	TLabel *Label27;
	TGroupBox *GroupBox31;
	TLabel *Label28;
	TEdit *Edit8;
	TGroupBox *GroupBox32;
	TLabel *Label29;
	TGroupBox *GroupBox22;
	TLabel *Label17;
	TEdit *Edit4;
	TGroupBox *GroupBox24;
	TLabel *Label19;
	TGroupBox *GroupBox25;
	TLabel *Label22;
	TEdit *Edit5;
	TGroupBox *GroupBox26;
	TLabel *Label23;
	TGroupBox *GroupBox33;
	TLabel *Label30;
	TLabel *Label31;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TDBGrid *DBGrid2;
	TEdit *Edit9;
	TEdit *Edit10;
	TButton *Button1;
	TGroupBox *GroupBox34;
	TImage *Image1;
	TGroupBox *GroupBox35;
	TLabel *Label37;
	TLabel *Label38;
	TLabel *Label39;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label43;
	TLabel *Label45;
	TEdit *Edit11;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TDateTimePicker *DateTimePicker1;
	TEdit *lieu_naiss;
	TEdit *Edit15;
	TGroupBox *GroupBox36;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button10;
	TButton *Button13;
	TGroupBox *GroupBox37;
	TImage *Image2;
	TButton *Button14;
	TGroupBox *GroupBox38;
	TLabel *Label40;
	TLabel *Label44;
	TLabel *Label46;
	TLabel *Label48;
	TDBGrid *DBGrid3;
	TEdit *Edit12;
	TEdit *Edit13;
	TButton *Button15;
	TGroupBox *GroupBox40;
	TLabel *Label53;
	TLabel *Label56;
	TLabel *Label58;
	TLabel *Label60;
	TLabel *Label61;
	TEdit *Edit18;
	TGroupBox *GroupBox41;
	TButton *Button17;
	TButton *Button18;
	TButton *Button19;
	TButton *Button20;
	TButton *Button21;
	TButton *Button22;
	TButton *Button23;
	TGroupBox *GroupBox39;
	TImage *Image3;
	TGroupBox *GroupBox42;
	TImage *Image4;
	TDateTimePicker *DateTimePicker2;
	TComboBox *ComboBox4;
	TComboBox *ComboBox5;
	TGroupBox *GroupBox43;
	TLabel *Label47;
	TLabel *Label51;
	TLabel *Label52;
	TLabel *Label54;
	TDBGrid *DBGrid4;
	TEdit *Edit16;
	TEdit *Edit17;
	TButton *Button24;
	TGroupBox *GroupBox44;
	TImage *Image5;
	TGroupBox *GroupBox45;
	TLabel *Label55;
	TEdit *Edit19;
	TEdit *Edit20;
	TGroupBox *GroupBox46;
	TButton *Button25;
	TButton *Button26;
	TButton *Button27;
	TButton *Button28;
	TButton *Button29;
	TButton *Button30;
	TButton *Button31;
	TGroupBox *GroupBox47;
	TImage *Image6;
	TLabel *Label64;
	TEdit *Edit21;
	TLabel *Label65;
	TLabel *Label66;
	TEdit *Edit22;
	TLabel *Label68;
	TComboBox *ComboBox8;
	TComboBox *ComboBox9;
	TLabel *Label67;
	TComboBox *ComboBox10;
	TLabel *Label69;
	TComboBox *ComboBox11;
	TLabel *Label59;
	TLabel *Label70;
	TLabel *Label57;
	TEdit *Edit14;
	TGroupBox *GroupBox48;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label71;
	TLabel *Label72;
	TLabel *Label73;
	TLabel *Label74;
	TLabel *Label75;
	TDBGrid *DBGrid5;
	TEdit *Edit23;
	TEdit *Edit24;
	TButton *Button32;
	TGroupBox *GroupBox49;
	TImage *Image7;
	TGroupBox *GroupBox50;
	TLabel *Label76;
	TLabel *Label77;
	TLabel *Label78;
	TLabel *Label80;
	TLabel *Label82;
	TEdit *Edit25;
	TComboBox *ComboBox12;
	TDateTimePicker *DateTimePicker3;
	TEdit *Edit26;
	TEdit *Edit27;
	TGroupBox *GroupBox51;
	TButton *Button33;
	TButton *Button35;
	TButton *Button36;
	TButton *Button37;
	TButton *Button38;
	TButton *Button39;
	TButton *Button40;
	TGroupBox *GroupBox52;
	TImage *Image8;
	TButton *Button41;
	TLabel *Label79;
	TEdit *Edit28;
	TGroupBox *GroupBox53;
	TGroupBox *GroupBox54;
	TMemo *Memo1;
	TButton *Button42;
	TButton *Button43;
	TButton *Button44;
	TButton *Button45;
	TLabel *Label81;
	TEdit *Edit29;
	TButton *Button46;
	TGroupBox *GroupBox55;
	TButton *Button47;
	TButton *Button48;
	TButton *Button50;
	TButton *Button51;
	TButton *Button52;
	TGroupBox *GroupBox56;
	TButton *Button54;
	TGroupBox *GroupBox57;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TGroupBox *GroupBox58;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox5;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	TComboBox *ComboBox13;
	TComboBox *ComboBox14;
	TCheckBox *CheckBox7;
	TComboBox *ComboBox15;
	TCheckBox *CheckBox8;
	TComboBox *ComboBox16;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox6;
	TLabel *Label83;
	TEdit *Edit30;
	TLabel *Label84;
	TLabel *Label85;
	TLabel *Label86;
	TGroupBox *GroupBox59;
	TLabel *Label87;
	TLabel *Label88;
	TLabel *Label89;
	TLabel *Label90;
	TLabel *Label91;
	TLabel *Label92;
	TLabel *Label93;
	TDBGrid *DBGrid6;
	TEdit *Edit31;
	TEdit *Edit32;
	TButton *Button49;
	TGroupBox *GroupBox60;
	TImage *Image9;
	TGroupBox *GroupBox61;
	TLabel *Label94;
	TLabel *Label97;
	TComboBox *ComboBox18;
	TGroupBox *GroupBox62;
	TButton *Button53;
	TButton *Button55;
	TButton *Button56;
	TButton *Button57;
	TButton *Button58;
	TButton *Button59;
	TGroupBox *GroupBox63;
	TImage *Image10;
	TComboBox *ComboBox19;
	TLabel *Label95;
	TComboBox *ComboBox17;
	TGroupBox *GroupBox64;
	TLabel *Label96;
	TLabel *Label98;
	TLabel *Label99;
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall Tgprincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tgprincipal *gprincipal;
//---------------------------------------------------------------------------
#endif
